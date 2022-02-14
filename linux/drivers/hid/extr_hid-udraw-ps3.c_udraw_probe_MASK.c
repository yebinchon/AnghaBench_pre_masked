
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udraw {int last_two_finger_x; int last_two_finger_y; int accel_input_dev; int pen_input_dev; int touch_input_dev; int joy_input_dev; struct hid_device* hdev; } ;
struct hid_device_id {int dummy; } ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct udraw* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct hid_device*,int) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,struct udraw*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct udraw*,struct hid_device*) ;
 int FUNC_7 (struct udraw*,struct hid_device*) ;
 int FUNC_8 (struct udraw*,struct hid_device*) ;
 int FUNC_9 (struct udraw*,struct hid_device*) ;

__attribute__((used)) static int FUNC_10(struct hid_device *VAR_4, const struct hid_device_id *VAR_5)
{
 struct udraw *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(&VAR_4->dev, sizeof(struct udraw), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->hdev = VAR_4;
 VAR_6->last_two_finger_x = -1;
 VAR_6->last_two_finger_y = -1;

 FUNC_4(VAR_4, VAR_6);

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7) {
  FUNC_1(VAR_4, "parse failed\n");
  return VAR_7;
 }

 if (!FUNC_7(VAR_6, VAR_4) ||
     !FUNC_9(VAR_6, VAR_4) ||
     !FUNC_8(VAR_6, VAR_4) ||
     !FUNC_6(VAR_6, VAR_4)) {
  FUNC_1(VAR_4, "could not allocate interfaces\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_5(VAR_6->joy_input_dev) ||
  FUNC_5(VAR_6->touch_input_dev) ||
  FUNC_5(VAR_6->pen_input_dev) ||
  FUNC_5(VAR_6->accel_input_dev);
 if (VAR_7) {
  FUNC_1(VAR_4, "failed to register interfaces\n");
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_3 | VAR_2);
 if (VAR_7) {
  FUNC_1(VAR_4, "hw start failed\n");
  return VAR_7;
 }

 return 0;
}
