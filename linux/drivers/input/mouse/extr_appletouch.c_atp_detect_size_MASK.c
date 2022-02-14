
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atp {TYPE_1__* info; int input; TYPE_2__* intf; scalar_t__* xy_cur; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int xsensors; int xsensors_17; int xfact; int fuzz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct atp *VAR_2)
{
 int VAR_3;


 for (VAR_3 = VAR_2->info->xsensors; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->xy_cur[VAR_3]) {

   FUNC_0(&VAR_2->intf->dev,
    "appletouch: 17\" model detected.\n");

   FUNC_1(VAR_2->input, VAR_0, 0,
          (VAR_2->info->xsensors_17 - 1) *
       VAR_2->info->xfact - 1,
          VAR_2->info->fuzz, 0);
   break;
  }
 }
}
