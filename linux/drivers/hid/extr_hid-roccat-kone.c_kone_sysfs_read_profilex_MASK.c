
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
struct kone_profile {int dummy; } ;
struct kone_device {int kone_lock; int * profiles; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {scalar_t__ private; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct TYPE_3__ {struct device* parent; } ;


 int FUNC_0 (struct device*) ;
 struct kone_device* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct kobject*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct file *VAR_0,
  struct kobject *VAR_1, struct bin_attribute *VAR_2,
  char *VAR_3, loff_t VAR_4, size_t VAR_5) {
 struct device *VAR_6 = FUNC_2(VAR_1)->parent->parent;
 struct kone_device *VAR_7 = FUNC_1(FUNC_0(VAR_6));

 if (VAR_4 >= sizeof(struct kone_profile))
  return 0;

 if (VAR_4 + VAR_5 > sizeof(struct kone_profile))
  VAR_5 = sizeof(struct kone_profile) - VAR_4;

 FUNC_4(&VAR_7->kone_lock);
 FUNC_3(VAR_3, ((char const *)&VAR_7->profiles[*(uint *)(VAR_2->private)]) + VAR_4, VAR_5);
 FUNC_5(&VAR_7->kone_lock);

 return VAR_5;
}
