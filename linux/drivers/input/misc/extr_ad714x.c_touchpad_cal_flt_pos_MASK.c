
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad714x_touchpad_drv {int x_flt_pos; int x_abs_pos; int y_flt_pos; int y_abs_pos; } ;
struct ad714x_chip {int dev; TYPE_1__* sw; } ;
struct TYPE_2__ {struct ad714x_touchpad_drv* touchpad; } ;


 int FUNC_0 (int ,char*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct ad714x_chip *VAR_0, int VAR_1)
{
 struct ad714x_touchpad_drv *VAR_2 = &VAR_0->sw->touchpad[VAR_1];

 VAR_2->x_flt_pos = (VAR_2->x_flt_pos * (10 - 4) +
   VAR_2->x_abs_pos * 4)/10;
 VAR_2->y_flt_pos = (VAR_2->y_flt_pos * (10 - 4) +
   VAR_2->y_abs_pos * 4)/10;

 FUNC_0(VAR_0->dev, "touchpad %d filter position:(%d, %d)\n",
   VAR_1, VAR_2->x_flt_pos, VAR_2->y_flt_pos);
}
