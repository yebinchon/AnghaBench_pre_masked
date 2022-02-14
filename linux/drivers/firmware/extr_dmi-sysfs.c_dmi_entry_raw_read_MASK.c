
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct dmi_sysfs_entry {int dummy; } ;
struct dmi_read_state {char* buf; size_t count; int pos; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct dmi_sysfs_entry*,int ,struct dmi_read_state*) ;
 struct dmi_sysfs_entry* FUNC_1 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_1,
      struct kobject *VAR_2,
      struct bin_attribute *VAR_3,
      char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 struct dmi_sysfs_entry *VAR_7 = FUNC_1(VAR_2);
 struct dmi_read_state VAR_8 = {
  .buf = VAR_4,
  .pos = VAR_5,
  .count = VAR_6,
 };

 return FUNC_0(VAR_7, VAR_0, &VAR_8);
}
