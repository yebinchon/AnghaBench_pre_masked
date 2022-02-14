
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,char) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,char*,char const*) ;
 struct usb_interface* FUNC_5 (int ) ;
 int FUNC_6 (struct usb_device*,int ,int ,int,int ,int ,char*,int,int ) ;
 int FUNC_7 (struct usb_device*,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_9,
       struct device_attribute *VAR_10, char *VAR_11)
{
 int VAR_12;
 struct usb_interface *VAR_13 = FUNC_5(VAR_9->parent);
 struct usb_device *VAR_14 = FUNC_1(VAR_13);
 const char *VAR_15;
 char *VAR_16;

 VAR_16 = FUNC_3(2, VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_12 = FUNC_6(VAR_14, FUNC_7(VAR_14, 0),
         VAR_3,
         VAR_6 | VAR_8 |
         VAR_7, 0, 0, VAR_16, 2,
         VAR_5);
 if (VAR_12 < 1) {
  FUNC_0(VAR_9, "Failed to get K90 initial mode (error %d).\n",
    VAR_12);
  VAR_12 = -VAR_0;
  goto out;
 }

 switch (VAR_16[0]) {
 case 129:
  VAR_15 = "HW";
  break;

 case 128:
  VAR_15 = "SW";
  break;
 default:
  FUNC_0(VAR_9, "K90 in unknown mode: %02hhx.\n",
    VAR_16[0]);
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_4(VAR_11, VAR_4, "%s\n", VAR_15);
out:
 FUNC_2(VAR_16);

 return VAR_12;
}
