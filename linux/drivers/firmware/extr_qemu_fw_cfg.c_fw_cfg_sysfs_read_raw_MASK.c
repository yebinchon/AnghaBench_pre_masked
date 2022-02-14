
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct fw_cfg_sysfs_entry {scalar_t__ size; int select; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,size_t) ;
 struct fw_cfg_sysfs_entry* FUNC_1 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_1, struct kobject *VAR_2,
         struct bin_attribute *VAR_3,
         char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 struct fw_cfg_sysfs_entry *VAR_7 = FUNC_1(VAR_2);

 if (VAR_5 > VAR_7->size)
  return -VAR_0;

 if (VAR_6 > VAR_7->size - VAR_5)
  VAR_6 = VAR_7->size - VAR_5;

 return FUNC_0(VAR_7->select, VAR_4, VAR_5, VAR_6);
}
