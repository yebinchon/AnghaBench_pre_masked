
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rcar_du_group {int index; struct rcar_du_device* dev; } ;
struct rcar_du_device {int dpad0_source; int vspd1_sink; TYPE_1__* info; } ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct rcar_du_group*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rcar_du_group *VAR_4)
{
 struct rcar_du_device *VAR_5 = VAR_4->dev;
 u32 VAR_6 = VAR_1;

 if (VAR_5->info->gen < 3) {
  VAR_6 |= VAR_2;






  if (VAR_4->index == 0) {
   VAR_6 |= FUNC_0(VAR_5->dpad0_source);
   if (VAR_4->dev->vspd1_sink == 2)
    VAR_6 |= VAR_3;
  }
 } else {





  if (VAR_4->index == VAR_5->dpad0_source / 2)
   VAR_6 |= FUNC_0(VAR_5->dpad0_source);
 }

 FUNC_1(VAR_4, VAR_0, VAR_6);
}
