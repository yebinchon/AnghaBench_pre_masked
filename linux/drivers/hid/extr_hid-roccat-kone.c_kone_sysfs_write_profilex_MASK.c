
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
struct usb_device {int dummy; } ;
struct kone_profile {int dummy; } ;
struct kone_device {int kone_lock; struct kone_profile* profiles; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {scalar_t__ private; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct TYPE_3__ {struct device* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct kone_device* FUNC_1 (int ) ;
 struct usb_device* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct kobject*) ;
 int FUNC_4 (struct usb_device*,struct kone_profile const*,size_t) ;
 int FUNC_5 (char*,struct kone_profile*,int) ;
 int FUNC_6 (struct kone_profile*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_10(struct file *VAR_1,
  struct kobject *VAR_2, struct bin_attribute *VAR_3,
  char *VAR_4, loff_t VAR_5, size_t VAR_6) {
 struct device *VAR_7 = FUNC_3(VAR_2)->parent->parent;
 struct kone_device *VAR_8 = FUNC_1(FUNC_0(VAR_7));
 struct usb_device *VAR_9 = FUNC_2(FUNC_9(VAR_7));
 struct kone_profile *VAR_10;
 int VAR_11 = 0, VAR_12;


 if (VAR_5 != 0 || VAR_6 != sizeof(struct kone_profile))
  return -VAR_0;

 VAR_10 = &VAR_8->profiles[*(uint *)(VAR_3->private)];

 FUNC_7(&VAR_8->kone_lock);
 VAR_12 = FUNC_5(VAR_4, VAR_10, sizeof(struct kone_profile));
 if (VAR_12) {
  VAR_11 = FUNC_4(VAR_9,
    (struct kone_profile const *)VAR_4,
    *(uint *)(VAR_3->private) + 1);
  if (!VAR_11)
   FUNC_6(VAR_10, VAR_4, sizeof(struct kone_profile));
 }
 FUNC_8(&VAR_8->kone_lock);

 if (VAR_11)
  return VAR_11;

 return sizeof(struct kone_profile);
}
