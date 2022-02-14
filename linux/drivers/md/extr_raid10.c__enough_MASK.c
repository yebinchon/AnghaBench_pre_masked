
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int raid_disks; int near_copies; } ;
struct TYPE_4__ {int raid_disks; int near_copies; } ;
struct r10conf {int copies; TYPE_3__* mirrors; TYPE_2__ geo; TYPE_1__ prev; } ;
struct md_rdev {int flags; } ;
struct TYPE_6__ {int rdev; } ;


 int VAR_0 ;
 struct md_rdev* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct r10conf *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6, VAR_7;
 if (VAR_2) {
  VAR_6 = VAR_1->prev.raid_disks;
  VAR_7 = VAR_1->prev.near_copies;
 } else {
  VAR_6 = VAR_1->geo.raid_disks;
  VAR_7 = VAR_1->geo.near_copies;
 }

 FUNC_1();
 do {
  int VAR_8 = VAR_1->copies;
  int VAR_9 = 0;
  int VAR_10 = VAR_4;
  while (VAR_8--) {
   struct md_rdev *VAR_11;
   if (VAR_10 != VAR_3 &&
       (VAR_11 = FUNC_0(VAR_1->mirrors[VAR_10].rdev)) &&
       FUNC_3(VAR_0, &VAR_11->flags))
    VAR_9++;
   VAR_10 = (VAR_10+1) % VAR_6;
  }
  if (VAR_9 == 0)
   goto out;
  VAR_4 = (VAR_4 + VAR_7) % VAR_6;
 } while (VAR_4 != 0);
 VAR_5 = 1;
out:
 FUNC_2();
 return VAR_5;
}
