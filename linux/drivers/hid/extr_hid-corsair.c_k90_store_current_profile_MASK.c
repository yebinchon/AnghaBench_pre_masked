
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
 int FUNC_0 (struct device*,char*,int) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 scalar_t__ FUNC_2 (char const*,int,int*) ;
 struct usb_interface* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_device*,int ,int ,int,int,int ,int *,int ,int ) ;
 int FUNC_5 (struct usb_device*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6,
      struct device_attribute *VAR_7,
      const char *VAR_8, size_t VAR_9)
{
 int VAR_10;
 struct usb_interface *VAR_11 = FUNC_3(VAR_6->parent);
 struct usb_device *VAR_12 = FUNC_1(VAR_11);
 int VAR_13;

 if (FUNC_2(VAR_8, 10, &VAR_13))
  return -VAR_0;
 if (VAR_13 < 1 || VAR_13 > 3)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_12, FUNC_5(VAR_12, 0),
         VAR_1,
         VAR_3 | VAR_5 |
         VAR_4, VAR_13, 0, ((void*)0), 0,
         VAR_2);
 if (VAR_10 != 0) {
  FUNC_0(VAR_6, "Failed to change current profile (error %d).\n",
    VAR_10);
  return VAR_10;
 }

 return VAR_9;
}
