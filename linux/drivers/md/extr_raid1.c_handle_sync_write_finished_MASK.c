
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1conf {int raid_disks; int mddev; TYPE_1__* mirrors; } ;
struct r1bio {int sectors; int sector; int state; struct bio** bios; } ;
struct md_rdev {int dummy; } ;
struct bio {scalar_t__ bi_status; int * bi_end_io; } ;
struct TYPE_2__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,struct md_rdev*) ;
 int FUNC_2 (struct r1bio*) ;
 int FUNC_3 (struct md_rdev*,int ,int,int ) ;
 int FUNC_4 (struct md_rdev*,int ,int,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct r1conf *VAR_2, struct r1bio *VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_3->sectors;
 for (VAR_4 = 0; VAR_4 < VAR_2->raid_disks * 2 ; VAR_4++) {
  struct md_rdev *VAR_6 = VAR_2->mirrors[VAR_4].rdev;
  struct bio *VAR_7 = VAR_3->bios[VAR_4];
  if (VAR_7->bi_end_io == ((void*)0))
   continue;
  if (!VAR_7->bi_status &&
      FUNC_5(VAR_0, &VAR_3->state)) {
   FUNC_3(VAR_6, VAR_3->sector, VAR_5, 0);
  }
  if (VAR_7->bi_status &&
      FUNC_5(VAR_1, &VAR_3->state)) {
   if (!FUNC_4(VAR_6, VAR_3->sector, VAR_5, 0))
    FUNC_1(VAR_2->mddev, VAR_6);
  }
 }
 FUNC_2(VAR_3);
 FUNC_0(VAR_2->mddev, VAR_5, 1);
}
