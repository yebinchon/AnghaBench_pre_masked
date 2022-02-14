
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 struct usb_interface* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_device*,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_5 (struct usb_device*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_8,
        struct device_attribute *VAR_9,
        const char *VAR_10, size_t VAR_11)
{
 int VAR_12;
 struct usb_interface *VAR_13 = FUNC_3(VAR_8->parent);
 struct usb_device *VAR_14 = FUNC_1(VAR_13);
 __u16 VAR_15;

 if (FUNC_2(VAR_10, "SW", 2) == 0)
  VAR_15 = VAR_2;
 else if (FUNC_2(VAR_10, "HW", 2) == 0)
  VAR_15 = VAR_1;
 else
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_14, FUNC_5(VAR_14, 0),
         VAR_3,
         VAR_5 | VAR_7 |
         VAR_6, VAR_15, 0, ((void*)0), 0,
         VAR_4);
 if (VAR_12 != 0) {
  FUNC_0(VAR_8, "Failed to set macro mode.\n");
  return VAR_12;
 }

 return VAR_11;
}
