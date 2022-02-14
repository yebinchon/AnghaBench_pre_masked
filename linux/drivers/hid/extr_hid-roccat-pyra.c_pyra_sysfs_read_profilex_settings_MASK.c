
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct usb_device {int dummy; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {scalar_t__ private; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct TYPE_3__ {struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_device* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct kobject*) ;
 scalar_t__ FUNC_2 (struct usb_device*,int ,int ) ;
 scalar_t__ FUNC_3 (struct file*,struct kobject*,char*,int ,size_t,int ,int ) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_3,
  struct kobject *VAR_4, struct bin_attribute *VAR_5, char *VAR_6,
  loff_t VAR_7, size_t VAR_8)
{
 struct device *VAR_9 = FUNC_1(VAR_4)->parent->parent;
 struct usb_device *VAR_10 = FUNC_0(FUNC_4(VAR_9));
 ssize_t VAR_11;

 VAR_11 = FUNC_2(VAR_10, *(uint *)(VAR_5->private),
   VAR_1);
 if (VAR_11)
  return VAR_11;

 return FUNC_3(VAR_3, VAR_4, VAR_6, VAR_7, VAR_8,
   VAR_2,
   VAR_0);
}
