
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1conf {int raid_disks; } ;
struct r1bio {struct bio** bios; TYPE_1__* mddev; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct r1conf* private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,struct r1bio*) ;

__attribute__((used)) static int FUNC_2(struct r1bio *VAR_0, struct bio *VAR_1)
{
 int VAR_2;
 struct r1conf *VAR_3 = VAR_0->mddev->private;
 int VAR_4 = VAR_3->raid_disks;

 for (VAR_2 = 0; VAR_2 < VAR_4 * 2; VAR_2++)
  if (VAR_0->bios[VAR_2] == VAR_1)
   break;

 FUNC_0(VAR_2 == VAR_4 * 2);
 FUNC_1(VAR_2, VAR_0);

 return VAR_2;
}
