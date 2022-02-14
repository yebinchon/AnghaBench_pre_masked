
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ad714x_touchpad_plat {int y_max_coord; int y_end_stage; int y_start_stage; int x_max_coord; int x_end_stage; int x_start_stage; } ;
struct ad714x_touchpad_drv {void* y_abs_pos; void* x_abs_pos; int y_highest_stage; int x_highest_stage; } ;
struct ad714x_chip {int dev; TYPE_2__* sw; TYPE_1__* hw; } ;
struct TYPE_4__ {struct ad714x_touchpad_drv* touchpad; } ;
struct TYPE_3__ {struct ad714x_touchpad_plat* touchpad; } ;


 void* FUNC_0 (struct ad714x_chip*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int,void*,void*) ;

__attribute__((used)) static void FUNC_2(struct ad714x_chip *VAR_0, int VAR_1)
{
 struct ad714x_touchpad_plat *VAR_2 = &VAR_0->hw->touchpad[VAR_1];
 struct ad714x_touchpad_drv *VAR_3 = &VAR_0->sw->touchpad[VAR_1];

 VAR_3->x_abs_pos = FUNC_0(VAR_0, VAR_2->x_start_stage,
   VAR_2->x_end_stage, VAR_3->x_highest_stage, VAR_2->x_max_coord);
 VAR_3->y_abs_pos = FUNC_0(VAR_0, VAR_2->y_start_stage,
   VAR_2->y_end_stage, VAR_3->y_highest_stage, VAR_2->y_max_coord);

 FUNC_1(VAR_0->dev, "touchpad %d absolute position:(%d, %d)\n", VAR_1,
   VAR_3->x_abs_pos, VAR_3->y_abs_pos);
}
