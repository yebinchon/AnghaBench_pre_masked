
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapped_device {int deferred_lock; int deferred; } ;
struct dm_io {scalar_t__ status; struct bio* orig_bio; int io_count; int endio_lock; struct mapped_device* md; } ;
struct TYPE_2__ {scalar_t__ bi_size; } ;
struct bio {int bi_opf; scalar_t__ bi_status; TYPE_1__ bi_iter; } ;
typedef scalar_t__ blk_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mapped_device*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int *,struct bio*) ;
 int FUNC_4 (struct dm_io*) ;
 int FUNC_5 (struct mapped_device*,struct dm_io*) ;
 int FUNC_6 (struct mapped_device*,struct bio*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct dm_io *VAR_3, blk_status_t VAR_4)
{
 unsigned long VAR_5;
 blk_status_t VAR_6;
 struct bio *VAR_7;
 struct mapped_device *VAR_8 = VAR_3->md;


 if (FUNC_9(VAR_4)) {
  FUNC_7(&VAR_3->endio_lock, VAR_5);
  if (!(VAR_3->status == VAR_0 && FUNC_0(VAR_8)))
   VAR_3->status = VAR_4;
  FUNC_8(&VAR_3->endio_lock, VAR_5);
 }

 if (FUNC_1(&VAR_3->io_count)) {
  if (VAR_3->status == VAR_0) {



   FUNC_7(&VAR_8->deferred_lock, VAR_5);
   if (FUNC_0(VAR_8))

    FUNC_3(&VAR_8->deferred, VAR_3->orig_bio);
   else

    VAR_3->status = VAR_1;
   FUNC_8(&VAR_8->deferred_lock, VAR_5);
  }

  VAR_6 = VAR_3->status;
  VAR_7 = VAR_3->orig_bio;
  FUNC_4(VAR_3);
  FUNC_5(VAR_8, VAR_3);

  if (VAR_6 == VAR_0)
   return;

  if ((VAR_7->bi_opf & VAR_2) && VAR_7->bi_iter.bi_size) {




   VAR_7->bi_opf &= ~VAR_2;
   FUNC_6(VAR_8, VAR_7);
  } else {

   if (VAR_6)
    VAR_7->bi_status = VAR_6;
   FUNC_2(VAR_7);
  }
 }
}
