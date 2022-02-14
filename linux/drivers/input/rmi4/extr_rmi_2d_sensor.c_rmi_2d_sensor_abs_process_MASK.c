
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_2d_sensor_abs_object {scalar_t__ type; void* y; void* x; } ;
struct rmi_2d_axis_alignment {scalar_t__ clip_y_high; scalar_t__ clip_x_high; int clip_y_low; int clip_x_low; scalar_t__ offset_y; scalar_t__ offset_x; scalar_t__ swap_axes; scalar_t__ flip_y; scalar_t__ flip_x; } ;
struct rmi_2d_sensor {TYPE_1__* tracking_pos; void* max_y; void* max_x; struct rmi_2d_axis_alignment axis_align; } ;
struct TYPE_2__ {void* y; void* x; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ,void*) ;
 void* FUNC_1 (void*,void*) ;
 int FUNC_2 (void*,void*) ;

void FUNC_3(struct rmi_2d_sensor *VAR_1,
    struct rmi_2d_sensor_abs_object *VAR_2,
    int VAR_3)
{
 struct rmi_2d_axis_alignment *VAR_4 = &VAR_1->axis_align;


 if (VAR_2->type == VAR_0)
  return;

 if (VAR_4->flip_x)
  VAR_2->x = VAR_1->max_x - VAR_2->x;

 if (VAR_4->flip_y)
  VAR_2->y = VAR_1->max_y - VAR_2->y;

 if (VAR_4->swap_axes)
  FUNC_2(VAR_2->x, VAR_2->y);
 VAR_2->x += VAR_4->offset_x;
 VAR_2->y += VAR_4->offset_y;

 VAR_2->x = FUNC_0(VAR_4->clip_x_low, VAR_2->x);
 VAR_2->y = FUNC_0(VAR_4->clip_y_low, VAR_2->y);

 if (VAR_4->clip_x_high)
  VAR_2->x = FUNC_1(VAR_1->max_x, VAR_2->x);

 if (VAR_4->clip_y_high)
  VAR_2->y = FUNC_1(VAR_1->max_y, VAR_2->y);

 VAR_1->tracking_pos[VAR_3].x = VAR_2->x;
 VAR_1->tracking_pos[VAR_3].y = VAR_2->y;
}
