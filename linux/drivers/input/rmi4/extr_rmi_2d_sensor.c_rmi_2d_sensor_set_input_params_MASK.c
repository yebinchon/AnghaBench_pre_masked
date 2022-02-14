
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clip_x_low; int clip_y_low; scalar_t__ swap_axes; scalar_t__ clip_y_high; scalar_t__ clip_x_high; } ;
struct rmi_2d_sensor {int min_x; int max_x; int min_y; int max_y; int x_mm; int y_mm; int dmax; scalar_t__ sensor_type; scalar_t__ topbuttonpad; scalar_t__ report_rel; int nbr_fingers; scalar_t__ kernel_tracking; TYPE_1__ axis_align; scalar_t__ report_abs; struct input_dev* input; } ;
struct input_dev {int propbit; int relbit; int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int ,int,int ,int ) ;
 void* FUNC_3 (int,scalar_t__) ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct rmi_2d_sensor *VAR_20)
{
 struct input_dev *VAR_21 = VAR_20->input;
 int VAR_22;
 int VAR_23;
 int VAR_24, VAR_25;
 int VAR_26 = 0;

 if (VAR_20->report_abs) {
  VAR_20->min_x = VAR_20->axis_align.clip_x_low;
  if (VAR_20->axis_align.clip_x_high)
   VAR_20->max_x = FUNC_3(VAR_20->max_x,
    VAR_20->axis_align.clip_x_high);

  VAR_20->min_y = VAR_20->axis_align.clip_y_low;
  if (VAR_20->axis_align.clip_y_high)
   VAR_20->max_y = FUNC_3(VAR_20->max_y,
    VAR_20->axis_align.clip_y_high);

  FUNC_4(VAR_10, VAR_21->evbit);

  VAR_24 = VAR_20->max_x;
  VAR_25 = VAR_20->max_y;
  if (VAR_20->axis_align.swap_axes)
   FUNC_5(VAR_24, VAR_25);
  FUNC_2(VAR_21, VAR_1, 0, VAR_24, 0, 0);
  FUNC_2(VAR_21, VAR_2, 0, VAR_25, 0, 0);

  if (VAR_20->x_mm && VAR_20->y_mm) {
   VAR_22 = (VAR_20->max_x - VAR_20->min_x) / VAR_20->x_mm;
   VAR_23 = (VAR_20->max_y - VAR_20->min_y) / VAR_20->y_mm;
   if (VAR_20->axis_align.swap_axes)
    FUNC_5(VAR_22, VAR_23);

   FUNC_0(VAR_21, VAR_7, VAR_22);
   FUNC_0(VAR_21, VAR_8, VAR_23);

   FUNC_0(VAR_21, VAR_1, VAR_22);
   FUNC_0(VAR_21, VAR_2, VAR_23);

   if (!VAR_20->dmax)
    VAR_20->dmax = VAR_9 * VAR_22;
  }

  FUNC_2(VAR_21, VAR_3, 0, 0xff, 0, 0);
  FUNC_2(VAR_21, VAR_5, 0, 0x0f, 0, 0);
  FUNC_2(VAR_21, VAR_6, 0, 0x0f, 0, 0);
  FUNC_2(VAR_21, VAR_0, 0, 1, 0, 0);
  FUNC_2(VAR_21, VAR_4,
         0, VAR_16, 0, 0);

  if (VAR_20->sensor_type == VAR_19)
   VAR_26 = VAR_13;
  else
   VAR_26 = VAR_12;

  if (VAR_20->kernel_tracking)
   VAR_26 |= VAR_14;

  FUNC_1(VAR_21, VAR_20->nbr_fingers, VAR_26);
 }

 if (VAR_20->report_rel) {
  FUNC_4(VAR_11, VAR_21->evbit);
  FUNC_4(VAR_17, VAR_21->relbit);
  FUNC_4(VAR_18, VAR_21->relbit);
 }

 if (VAR_20->topbuttonpad)
  FUNC_4(VAR_15, VAR_21->propbit);
}
