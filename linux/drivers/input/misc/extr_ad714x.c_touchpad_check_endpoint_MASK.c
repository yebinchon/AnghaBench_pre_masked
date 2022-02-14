
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ad714x_touchpad_plat {size_t x_start_stage; size_t x_end_stage; size_t y_start_stage; size_t y_end_stage; } ;
struct ad714x_touchpad_drv {int left_ep; int left_ep_val; int right_ep; int right_ep_val; int top_ep; int top_ep_val; int bottom_ep; int bottom_ep_val; } ;
struct ad714x_chip {int* sensor_val; TYPE_2__* sw; TYPE_1__* hw; } ;
struct TYPE_4__ {struct ad714x_touchpad_drv* touchpad; } ;
struct TYPE_3__ {struct ad714x_touchpad_plat* touchpad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct ad714x_chip *VAR_6, int VAR_7)
{
 struct ad714x_touchpad_plat *VAR_8 = &VAR_6->hw->touchpad[VAR_7];
 struct ad714x_touchpad_drv *VAR_9 = &VAR_6->sw->touchpad[VAR_7];
 int VAR_10;


 VAR_10 = (VAR_6->sensor_val[VAR_8->x_start_stage] -
   VAR_6->sensor_val[VAR_8->x_start_stage + 1]) * 100 /
   VAR_6->sensor_val[VAR_8->x_start_stage + 1];
 if (!VAR_9->left_ep) {
  if (VAR_10 >= VAR_1) {
   VAR_9->left_ep = 1;
   VAR_9->left_ep_val =
    VAR_6->sensor_val[VAR_8->x_start_stage + 1];
  }
 } else {
  if ((VAR_10 < VAR_1) &&
      (VAR_6->sensor_val[VAR_8->x_start_stage + 1] >
       VAR_2 + VAR_9->left_ep_val))
   VAR_9->left_ep = 0;
 }


 VAR_10 = (VAR_6->sensor_val[VAR_8->x_end_stage] -
   VAR_6->sensor_val[VAR_8->x_end_stage - 1]) * 100 /
   VAR_6->sensor_val[VAR_8->x_end_stage - 1];
 if (!VAR_9->right_ep) {
  if (VAR_10 >= VAR_3) {
   VAR_9->right_ep = 1;
   VAR_9->right_ep_val =
    VAR_6->sensor_val[VAR_8->x_end_stage - 1];
  }
 } else {
  if ((VAR_10 < VAR_3) &&
  (VAR_6->sensor_val[VAR_8->x_end_stage - 1] >
  VAR_2 + VAR_9->right_ep_val))
   VAR_9->right_ep = 0;
 }


 VAR_10 = (VAR_6->sensor_val[VAR_8->y_start_stage] -
   VAR_6->sensor_val[VAR_8->y_start_stage + 1]) * 100 /
   VAR_6->sensor_val[VAR_8->y_start_stage + 1];
 if (!VAR_9->top_ep) {
  if (VAR_10 >= VAR_5) {
   VAR_9->top_ep = 1;
   VAR_9->top_ep_val =
    VAR_6->sensor_val[VAR_8->y_start_stage + 1];
  }
 } else {
  if ((VAR_10 < VAR_5) &&
  (VAR_6->sensor_val[VAR_8->y_start_stage + 1] >
  VAR_4 + VAR_9->top_ep_val))
   VAR_9->top_ep = 0;
 }


 VAR_10 = (VAR_6->sensor_val[VAR_8->y_end_stage] -
  VAR_6->sensor_val[VAR_8->y_end_stage - 1]) * 100 /
  VAR_6->sensor_val[VAR_8->y_end_stage - 1];
 if (!VAR_9->bottom_ep) {
  if (VAR_10 >= VAR_0) {
   VAR_9->bottom_ep = 1;
   VAR_9->bottom_ep_val =
    VAR_6->sensor_val[VAR_8->y_end_stage - 1];
  }
 } else {
  if ((VAR_10 < VAR_0) &&
  (VAR_6->sensor_val[VAR_8->y_end_stage - 1] >
   VAR_4 + VAR_9->bottom_ep_val))
   VAR_9->bottom_ep = 0;
 }

 return VAR_9->left_ep || VAR_9->right_ep || VAR_9->top_ep || VAR_9->bottom_ep;
}
