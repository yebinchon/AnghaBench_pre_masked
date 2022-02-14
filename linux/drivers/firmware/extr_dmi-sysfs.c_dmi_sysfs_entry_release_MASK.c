
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct dmi_sysfs_entry {int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct dmi_sysfs_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct dmi_sysfs_entry* FUNC_4 (struct kobject*) ;

__attribute__((used)) static void FUNC_5(struct kobject *VAR_1)
{
 struct dmi_sysfs_entry *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(&VAR_0);
 FUNC_1(&VAR_2->list);
 FUNC_3(&VAR_0);
 FUNC_0(VAR_2);
}
