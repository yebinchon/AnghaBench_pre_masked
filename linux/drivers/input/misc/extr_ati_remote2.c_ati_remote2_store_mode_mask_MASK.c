
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ati_remote2 {unsigned int mode_mask; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,unsigned int*) ;
 struct usb_device* FUNC_1 (struct device*) ;
 struct ati_remote2* FUNC_2 (struct usb_interface*) ;
 struct usb_interface* FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct usb_device *VAR_6 = FUNC_1(VAR_2);
 struct usb_interface *VAR_7 = FUNC_3(VAR_6, 0);
 struct ati_remote2 *VAR_8 = FUNC_2(VAR_7);
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_4, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 & ~VAR_0)
  return -VAR_1;

 VAR_8->mode_mask = VAR_9;

 return VAR_5;
}
