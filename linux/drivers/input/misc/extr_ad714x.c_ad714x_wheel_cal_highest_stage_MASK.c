
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ad714x_wheel_plat {int end_stage; int start_stage; } ;
struct ad714x_wheel_drv {int highest_stage; int pre_highest_stage; } ;
struct ad714x_chip {int dev; TYPE_2__* sw; TYPE_1__* hw; } ;
struct TYPE_4__ {struct ad714x_wheel_drv* wheel; } ;
struct TYPE_3__ {struct ad714x_wheel_plat* wheel; } ;


 int FUNC_0 (struct ad714x_chip*,int ,int ) ;
 int FUNC_1 (int ,char*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct ad714x_chip *VAR_0, int VAR_1)
{
 struct ad714x_wheel_plat *VAR_2 = &VAR_0->hw->wheel[VAR_1];
 struct ad714x_wheel_drv *VAR_3 = &VAR_0->sw->wheel[VAR_1];

 VAR_3->pre_highest_stage = VAR_3->highest_stage;
 VAR_3->highest_stage = FUNC_0(VAR_0, VAR_2->start_stage,
   VAR_2->end_stage);

 FUNC_1(VAR_0->dev, "wheel %d highest_stage:%d\n", VAR_1,
  VAR_3->highest_stage);
}
