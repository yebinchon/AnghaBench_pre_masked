
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct find_dmi_data {void* private; int ret; int instance_countdown; int callback; struct dmi_sysfs_entry* entry; } ;
struct dmi_sysfs_entry {int instance; } ;
typedef int ssize_t ;
typedef int dmi_callback ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct find_dmi_data*) ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_1(struct dmi_sysfs_entry *VAR_3,
         dmi_callback VAR_4, void *VAR_5)
{
 struct find_dmi_data VAR_6 = {
  .entry = VAR_3,
  .callback = VAR_4,
  .private = VAR_5,
  .instance_countdown = VAR_3->instance,
  .ret = -VAR_1,
 };
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, &VAR_6);

 if (VAR_7)
  return -VAR_0;
 return VAR_6.ret;
}
