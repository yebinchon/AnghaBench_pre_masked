
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct kone_settings {int dummy; } ;
struct TYPE_6__ {int startup_profile; } ;
struct kone_device {int kone_lock; TYPE_2__ settings; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_7__ {TYPE_1__* parent; } ;
struct TYPE_5__ {struct device* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct kone_device* FUNC_1 (int ) ;
 struct usb_device* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (struct kobject*) ;
 int FUNC_4 (struct kone_device*,int) ;
 int FUNC_5 (struct kone_device*,int) ;
 int FUNC_6 (struct usb_device*,struct kone_settings const*) ;
 int FUNC_7 (char*,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_12(struct file *VAR_1, struct kobject *VAR_2,
  struct bin_attribute *VAR_3, char *VAR_4,
  loff_t VAR_5, size_t VAR_6) {
 struct device *VAR_7 = FUNC_3(VAR_2)->parent->parent;
 struct kone_device *VAR_8 = FUNC_1(FUNC_0(VAR_7));
 struct usb_device *VAR_9 = FUNC_2(FUNC_11(VAR_7));
 int VAR_10 = 0, VAR_11, VAR_12;


 if (VAR_5 != 0 || VAR_6 != sizeof(struct kone_settings))
  return -VAR_0;

 FUNC_9(&VAR_8->kone_lock);
 VAR_11 = FUNC_7(VAR_4, &VAR_8->settings, sizeof(struct kone_settings));
 if (VAR_11) {
  VAR_10 = FUNC_6(VAR_9,
    (struct kone_settings const *)VAR_4);
  if (VAR_10) {
   FUNC_10(&VAR_8->kone_lock);
   return VAR_10;
  }

  VAR_12 = VAR_8->settings.startup_profile;
  FUNC_8(&VAR_8->settings, VAR_4, sizeof(struct kone_settings));

  FUNC_4(VAR_8, VAR_8->settings.startup_profile);

  if (VAR_8->settings.startup_profile != VAR_12)
   FUNC_5(VAR_8, VAR_8->settings.startup_profile);
 }
 FUNC_10(&VAR_8->kone_lock);

 return sizeof(struct kone_settings);
}
