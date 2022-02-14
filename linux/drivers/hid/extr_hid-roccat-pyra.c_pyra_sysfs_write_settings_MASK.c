
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_device {int dummy; } ;
struct pyra_settings {scalar_t__ startup_profile; } ;
struct pyra_roccat_report {scalar_t__ value; scalar_t__ key; int type; } ;
struct pyra_device {int pyra_lock; int chrdev_minor; int profile_settings; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct TYPE_3__ {struct device* parent; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct device*) ;
 struct pyra_device* FUNC_2 (int ) ;
 struct usb_device* FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (struct kobject*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pyra_device*,scalar_t__) ;
 int FUNC_8 (struct usb_device*,struct pyra_settings const*) ;
 int FUNC_9 (int ,int const*) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct file *VAR_3,
  struct kobject *VAR_4, struct bin_attribute *VAR_5, char *VAR_6,
  loff_t VAR_7, size_t VAR_8)
{
 struct device *VAR_9 = FUNC_4(VAR_4)->parent->parent;
 struct pyra_device *VAR_10 = FUNC_2(FUNC_1(VAR_9));
 struct usb_device *VAR_11 = FUNC_3(FUNC_10(VAR_9));
 int VAR_12 = 0;
 struct pyra_roccat_report VAR_13;
 struct pyra_settings const *VAR_14;

 if (VAR_7 != 0 || VAR_8 != VAR_2)
  return -VAR_0;

 VAR_14 = (struct pyra_settings const *)VAR_6;
 if (VAR_14->startup_profile >= FUNC_0(VAR_10->profile_settings))
  return -VAR_0;

 FUNC_5(&VAR_10->pyra_lock);

 VAR_12 = FUNC_8(VAR_11, VAR_14);
 if (VAR_12) {
  FUNC_6(&VAR_10->pyra_lock);
  return VAR_12;
 }

 FUNC_7(VAR_10, VAR_14->startup_profile);

 VAR_13.type = VAR_1;
 VAR_13.value = VAR_14->startup_profile + 1;
 VAR_13.key = 0;
 FUNC_9(VAR_10->chrdev_minor,
   (uint8_t const *)&VAR_13);

 FUNC_6(&VAR_10->pyra_lock);
 return VAR_2;
}
