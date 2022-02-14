
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int raid_disks; int chunk_shift; } ;
struct r10conf {TYPE_2__ geo; TYPE_1__* mirrors; } ;
struct mddev {scalar_t__ delta_disks; scalar_t__ recovery_cp; scalar_t__ resync_max_sectors; scalar_t__ array_sectors; int chunk_sectors; scalar_t__ reshape_backwards; int reshape_position; int new_layout; int layout; int recovery; struct r10conf* private; } ;
struct md_rdev {int flags; } ;
struct TYPE_3__ {int replacement; int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 struct md_rdev* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct mddev *VAR_4)
{
 struct r10conf *VAR_5 = VAR_4->private;

 if (FUNC_5(VAR_1, &VAR_4->recovery))
  return;

 if (VAR_4->delta_disks > 0) {
  if (VAR_4->recovery_cp > VAR_4->resync_max_sectors) {
   VAR_4->recovery_cp = VAR_4->resync_max_sectors;
   FUNC_4(VAR_2, &VAR_4->recovery);
  }
  VAR_4->resync_max_sectors = VAR_4->array_sectors;
 } else {
  int VAR_6;
  FUNC_2();
  for (VAR_6 = VAR_5->geo.raid_disks ;
       VAR_6 < VAR_5->geo.raid_disks - VAR_4->delta_disks;
       VAR_6++) {
   struct md_rdev *VAR_7 = FUNC_1(VAR_5->mirrors[VAR_6].rdev);
   if (VAR_7)
    FUNC_0(VAR_0, &VAR_7->flags);
   VAR_7 = FUNC_1(VAR_5->mirrors[VAR_6].replacement);
   if (VAR_7)
    FUNC_0(VAR_0, &VAR_7->flags);
  }
  FUNC_3();
 }
 VAR_4->layout = VAR_4->new_layout;
 VAR_4->chunk_sectors = 1 << VAR_5->geo.chunk_shift;
 VAR_4->reshape_position = VAR_3;
 VAR_4->delta_disks = 0;
 VAR_4->reshape_backwards = 0;
}
