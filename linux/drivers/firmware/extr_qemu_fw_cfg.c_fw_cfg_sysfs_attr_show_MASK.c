
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct fw_cfg_sysfs_entry {int dummy; } ;
struct fw_cfg_sysfs_attribute {int (* show ) (struct fw_cfg_sysfs_entry*,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct fw_cfg_sysfs_entry*,char*) ;
 struct fw_cfg_sysfs_attribute* FUNC_1 (struct attribute*) ;
 struct fw_cfg_sysfs_entry* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_0, struct attribute *VAR_1,
          char *VAR_2)
{
 struct fw_cfg_sysfs_entry *VAR_3 = FUNC_2(VAR_0);
 struct fw_cfg_sysfs_attribute *VAR_4 = FUNC_1(VAR_1);

 return VAR_4->show(VAR_3, VAR_2);
}
