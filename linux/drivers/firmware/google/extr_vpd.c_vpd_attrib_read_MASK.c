
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct vpd_attrib_info {TYPE_1__ bin_attr; int value; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {struct vpd_attrib_info* private; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int FUNC_0 (char*,size_t,int *,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct file *VAR_0, struct kobject *VAR_1,
          struct bin_attribute *VAR_2, char *VAR_3,
          loff_t VAR_4, size_t VAR_5)
{
 struct vpd_attrib_info *VAR_6 = VAR_2->private;

 return FUNC_0(VAR_3, VAR_5, &VAR_4, VAR_6->value,
           VAR_6->bin_attr.size);
}
