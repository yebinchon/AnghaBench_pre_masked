
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct usb_device {int dummy; } ;
struct koneplus_device {int koneplus_lock; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef size_t loff_t ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct TYPE_3__ {struct device* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct koneplus_device* FUNC_1 (int ) ;
 struct usb_device* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct kobject*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_device*,int ,char*,size_t) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct file *VAR_1, struct kobject *VAR_2,
  char *VAR_3, loff_t VAR_4, size_t VAR_5,
  size_t VAR_6, uint VAR_7)
{
 struct device *VAR_8 = FUNC_3(VAR_2)->parent->parent;
 struct koneplus_device *VAR_9 = FUNC_1(FUNC_0(VAR_8));
 struct usb_device *VAR_10 = FUNC_2(FUNC_7(VAR_8));
 int VAR_11;

 if (VAR_4 >= VAR_6)
  return 0;

 if (VAR_4 != 0 || VAR_5 != VAR_6)
  return -VAR_0;

 FUNC_4(&VAR_9->koneplus_lock);
 VAR_11 = FUNC_6(VAR_10, VAR_7, VAR_3, VAR_6);
 FUNC_5(&VAR_9->koneplus_lock);

 if (VAR_11)
  return VAR_11;

 return VAR_6;
}
