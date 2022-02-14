
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int chunk_mask; scalar_t__ near_copies; scalar_t__ raid_disks; } ;
struct TYPE_4__ {int chunk_mask; scalar_t__ near_copies; scalar_t__ raid_disks; } ;
struct r10conf {int wait_barrier; TYPE_2__ prev; TYPE_1__ geo; } ;
struct mddev {struct r10conf* private; } ;
struct TYPE_6__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_3__ bi_iter; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct mddev*,struct bio*,int) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct mddev*,struct bio*) ;
 int FUNC_3 (struct mddev*,struct bio*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct mddev *VAR_1, struct bio *VAR_2)
{
 struct r10conf *VAR_3 = VAR_1->private;
 sector_t VAR_4 = (VAR_3->geo.chunk_mask & VAR_3->prev.chunk_mask);
 int VAR_5 = VAR_4 + 1;
 int VAR_6 = FUNC_1(VAR_2);

 if (FUNC_4(VAR_2->bi_opf & VAR_0)) {
  FUNC_2(VAR_1, VAR_2);
  return 1;
 }

 if (!FUNC_3(VAR_1, VAR_2))
  return 0;





 if (FUNC_4((VAR_2->bi_iter.bi_sector & VAR_4) +
       VAR_6 > VAR_5
       && (VAR_3->geo.near_copies < VAR_3->geo.raid_disks
    || VAR_3->prev.near_copies <
    VAR_3->prev.raid_disks)))
  VAR_6 = VAR_5 -
   (VAR_2->bi_iter.bi_sector &
    (VAR_5 - 1));
 FUNC_0(VAR_1, VAR_2, VAR_6);


 FUNC_5(&VAR_3->wait_barrier);
 return 1;
}
