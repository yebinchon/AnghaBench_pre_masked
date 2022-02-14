
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int dummy; } ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct hid_device*,char*) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*,int) ;
 int FUNC_6 (struct hid_device*) ;
 int FUNC_7 (struct hid_device*) ;
 int FUNC_8 (struct hid_device*,char*,int) ;

__attribute__((used)) static int FUNC_9(struct hid_device *VAR_2, const struct hid_device_id *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_2->dev, "ACRUX HID hardware probe...\n");

 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_2, "parse failed\n");
  return VAR_4;
 }

 VAR_4 = FUNC_5(VAR_2, VAR_0 & ~VAR_1);
 if (VAR_4) {
  FUNC_3(VAR_2, "hw start failed\n");
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {




  FUNC_8(VAR_2,
    "Failed to enable force feedback support, error: %d\n",
    VAR_4);
 }





 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4) {
  FUNC_2(&VAR_2->dev, "hw open failed\n");
  FUNC_6(VAR_2);
  return VAR_4;
 }

 return 0;
}
