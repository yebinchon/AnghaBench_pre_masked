
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct input_dev {int dummy; } ;
struct cyapa_pip_touch_record {int x_hi; int x_lo; int y_hi; int y_lo; int z; int major_axis_len; int minor_axis_len; int major_tool_len; int minor_tool_len; int orientation; int touch_tip_event_id; } ;
struct cyapa {int max_abs_x; int max_abs_y; scalar_t__ y_origin; scalar_t__ x_origin; struct input_dev* input; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int) ;
 int FUNC_4 (struct input_dev*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct cyapa *VAR_11,
  const struct cyapa_pip_touch_record *VAR_12)
{
 struct input_dev *VAR_13 = VAR_11->input;
 u8 VAR_14 = FUNC_0(VAR_12->touch_tip_event_id);
 int VAR_15 = FUNC_1(VAR_12->touch_tip_event_id);
 int VAR_16, VAR_17;

 if (VAR_14 == VAR_10)
  return;

 FUNC_3(VAR_13, VAR_15);
 FUNC_2(VAR_13, VAR_9, 1);
 VAR_16 = (VAR_12->x_hi << 8) | VAR_12->x_lo;
 if (VAR_11->x_origin)
  VAR_16 = VAR_11->max_abs_x - VAR_16;
 VAR_17 = (VAR_12->y_hi << 8) | VAR_12->y_lo;
 if (VAR_11->y_origin)
  VAR_17 = VAR_11->max_abs_y - VAR_17;
 FUNC_4(VAR_13, VAR_2, VAR_16);
 FUNC_4(VAR_13, VAR_3, VAR_17);
 FUNC_4(VAR_13, VAR_0, 0);
 FUNC_4(VAR_13, VAR_4,
  VAR_12->z);
 FUNC_4(VAR_13, VAR_5,
  VAR_12->major_axis_len);
 FUNC_4(VAR_13, VAR_6,
  VAR_12->minor_axis_len);

 FUNC_4(VAR_13, VAR_7,
  VAR_12->major_tool_len);
 FUNC_4(VAR_13, VAR_8,
  VAR_12->minor_tool_len);

 FUNC_4(VAR_13, VAR_1,
  VAR_12->orientation);
}
