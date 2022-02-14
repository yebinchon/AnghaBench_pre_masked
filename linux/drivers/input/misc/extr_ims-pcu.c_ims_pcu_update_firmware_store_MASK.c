
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ims_pcu {int cmd_mutex; scalar_t__ bootloader_mode; int dev; } ;
struct firmware {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct ims_pcu*,struct firmware const*) ;
 int FUNC_2 (struct ims_pcu*) ;
 int FUNC_3 (char const*,int ,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,int ,int ) ;
 struct usb_interface* FUNC_8 (struct device*) ;
 struct ims_pcu* FUNC_9 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct usb_interface *VAR_6 = FUNC_8(VAR_2);
 struct ims_pcu *VAR_7 = FUNC_9(VAR_6);
 const struct firmware *VAR_8 = ((void*)0);
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_4, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 != 1)
  return -VAR_0;

 VAR_10 = FUNC_4(&VAR_7->cmd_mutex);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_7(&VAR_8, VAR_1, VAR_7->dev);
 if (VAR_10) {
  FUNC_0(VAR_7->dev, "Failed to request firmware %s, error: %d\n",
   VAR_1, VAR_10);
  goto out;
 }
 if (VAR_7->bootloader_mode)
  VAR_10 = FUNC_1(VAR_7, VAR_8);
 else
  VAR_10 = FUNC_2(VAR_7);

 FUNC_6(VAR_8);

out:
 FUNC_5(&VAR_7->cmd_mutex);
 return VAR_10 ?: VAR_5;
}
