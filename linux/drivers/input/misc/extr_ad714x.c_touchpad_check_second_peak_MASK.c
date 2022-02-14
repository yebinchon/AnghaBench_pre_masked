
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ad714x_touchpad_plat {int x_start_stage; int x_end_stage; int y_start_stage; int y_end_stage; } ;
struct ad714x_touchpad_drv {int x_highest_stage; int y_highest_stage; } ;
struct ad714x_chip {int* sensor_val; TYPE_2__* sw; TYPE_1__* hw; } ;
struct TYPE_4__ {struct ad714x_touchpad_drv* touchpad; } ;
struct TYPE_3__ {struct ad714x_touchpad_plat* touchpad; } ;



__attribute__((used)) static int FUNC_0(struct ad714x_chip *VAR_0, int VAR_1)
{
 struct ad714x_touchpad_plat *VAR_2 = &VAR_0->hw->touchpad[VAR_1];
 struct ad714x_touchpad_drv *VAR_3 = &VAR_0->sw->touchpad[VAR_1];
 int VAR_4;

 for (VAR_4 = VAR_2->x_start_stage; VAR_4 < VAR_3->x_highest_stage; VAR_4++) {
  if ((VAR_0->sensor_val[VAR_4] - VAR_0->sensor_val[VAR_4 + 1])
   > (VAR_0->sensor_val[VAR_4 + 1] / 10))
   return 1;
 }

 for (VAR_4 = VAR_3->x_highest_stage; VAR_4 < VAR_2->x_end_stage; VAR_4++) {
  if ((VAR_0->sensor_val[VAR_4 + 1] - VAR_0->sensor_val[VAR_4])
   > (VAR_0->sensor_val[VAR_4] / 10))
   return 1;
 }

 for (VAR_4 = VAR_2->y_start_stage; VAR_4 < VAR_3->y_highest_stage; VAR_4++) {
  if ((VAR_0->sensor_val[VAR_4] - VAR_0->sensor_val[VAR_4 + 1])
   > (VAR_0->sensor_val[VAR_4 + 1] / 10))
   return 1;
 }

 for (VAR_4 = VAR_3->y_highest_stage; VAR_4 < VAR_2->y_end_stage; VAR_4++) {
  if ((VAR_0->sensor_val[VAR_4 + 1] - VAR_0->sensor_val[VAR_4])
   > (VAR_0->sensor_val[VAR_4] / 10))
   return 1;
 }

 return 0;
}
