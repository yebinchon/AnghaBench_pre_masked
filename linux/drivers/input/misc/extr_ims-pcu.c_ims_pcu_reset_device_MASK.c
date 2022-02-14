
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {int dummy; } ;
struct ims_pcu {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct ims_pcu*,int ,int const*,int) ;
 int FUNC_2 (char const*,int ,int*) ;
 struct usb_interface* FUNC_3 (struct device*) ;
 struct ims_pcu* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 static const u8 VAR_6 = 1;
 struct usb_interface *VAR_7 = FUNC_3(VAR_2);
 struct ims_pcu *VAR_8 = FUNC_4(VAR_7);
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_4, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 != 1)
  return -VAR_0;

 FUNC_0(VAR_8->dev, "Attempting to reset device\n");

 VAR_10 = FUNC_1(VAR_8, VAR_1, &VAR_6, 1);
 if (VAR_10) {
  FUNC_0(VAR_8->dev,
    "Failed to reset device, error: %d\n",
    VAR_10);
  return VAR_10;
 }

 return VAR_5;
}
