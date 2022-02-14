
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pending_bios; } ;
struct TYPE_5__ {int writing; scalar_t__ last_write; scalar_t__ successive_reads; int lock; int read_queue; int write_queue; int attention; } ;
struct pktcdvd_device {scalar_t__ read_speed; scalar_t__ write_speed; TYPE_3__ cdrw; TYPE_2__ iosched; } ;
struct TYPE_4__ {scalar_t__ bi_sector; int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 scalar_t__ FUNC_4 (struct bio*) ;
 int FUNC_5 (int *) ;
 struct bio* FUNC_6 (int *) ;
 struct bio* FUNC_7 (int *) ;
 int FUNC_8 (struct bio*) ;
 int FUNC_9 (int,struct pktcdvd_device*,char*) ;
 int FUNC_10 (struct pktcdvd_device*) ;
 int FUNC_11 (struct pktcdvd_device*,scalar_t__,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct pktcdvd_device *VAR_3)
{

 if (FUNC_1(&VAR_3->iosched.attention) == 0)
  return;
 FUNC_2(&VAR_3->iosched.attention, 0);

 for (;;) {
  struct bio *VAR_4;
  int VAR_5, VAR_6;

  FUNC_12(&VAR_3->iosched.lock);
  VAR_5 = !FUNC_5(&VAR_3->iosched.read_queue);
  VAR_6 = !FUNC_5(&VAR_3->iosched.write_queue);
  FUNC_13(&VAR_3->iosched.lock);

  if (!VAR_5 && !VAR_6)
   break;

  if (VAR_3->iosched.writing) {
   int VAR_7 = 1;
   FUNC_12(&VAR_3->iosched.lock);
   VAR_4 = FUNC_6(&VAR_3->iosched.write_queue);
   FUNC_13(&VAR_3->iosched.lock);
   if (VAR_4 && (VAR_4->bi_iter.bi_sector ==
        VAR_3->iosched.last_write))
    VAR_7 = 0;
   if (VAR_7 && VAR_5) {
    if (FUNC_1(&VAR_3->cdrw.pending_bios) > 0) {
     FUNC_9(2, VAR_3, "write, waiting\n");
     break;
    }
    FUNC_10(VAR_3);
    VAR_3->iosched.writing = 0;
   }
  } else {
   if (!VAR_5 && VAR_6) {
    if (FUNC_1(&VAR_3->cdrw.pending_bios) > 0) {
     FUNC_9(2, VAR_3, "read, waiting\n");
     break;
    }
    VAR_3->iosched.writing = 1;
   }
  }

  FUNC_12(&VAR_3->iosched.lock);
  if (VAR_3->iosched.writing)
   VAR_4 = FUNC_7(&VAR_3->iosched.write_queue);
  else
   VAR_4 = FUNC_7(&VAR_3->iosched.read_queue);
  FUNC_13(&VAR_3->iosched.lock);

  if (!VAR_4)
   continue;

  if (FUNC_3(VAR_4) == VAR_2)
   VAR_3->iosched.successive_reads +=
    VAR_4->bi_iter.bi_size >> 10;
  else {
   VAR_3->iosched.successive_reads = 0;
   VAR_3->iosched.last_write = FUNC_4(VAR_4);
  }
  if (VAR_3->iosched.successive_reads >= VAR_0) {
   if (VAR_3->read_speed == VAR_3->write_speed) {
    VAR_3->read_speed = VAR_1;
    FUNC_11(VAR_3, VAR_3->write_speed, VAR_3->read_speed);
   }
  } else {
   if (VAR_3->read_speed != VAR_3->write_speed) {
    VAR_3->read_speed = VAR_3->write_speed;
    FUNC_11(VAR_3, VAR_3->write_speed, VAR_3->read_speed);
   }
  }

  FUNC_0(&VAR_3->cdrw.pending_bios);
  FUNC_8(VAR_4);
 }
}
