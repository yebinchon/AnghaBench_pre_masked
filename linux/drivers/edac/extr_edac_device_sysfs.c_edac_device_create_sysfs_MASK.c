
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct edac_device_ctl_info {int dev_idx; struct kobject kobj; TYPE_1__* dev; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct edac_device_ctl_info*) ;
 int FUNC_2 (struct edac_device_ctl_info*) ;
 int FUNC_3 (struct edac_device_ctl_info*) ;
 int FUNC_4 (struct kobject*,int *,int ) ;
 int FUNC_5 (struct kobject*,int ) ;

int FUNC_6(struct edac_device_ctl_info *VAR_1)
{
 int VAR_2;
 struct kobject *VAR_3 = &VAR_1->kobj;

 FUNC_0(0, "idx=%d\n", VAR_1->dev_idx);


 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(0, "failed to add sysfs attribs\n");
  goto err_out;
 }




 VAR_2 = FUNC_4(VAR_3,
    &VAR_1->dev->kobj, VAR_0);
 if (VAR_2) {
  FUNC_0(0, "sysfs_create_link() returned err= %d\n", VAR_2);
  goto err_remove_main_attribs;
 }





 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0(0, "edac_device_create_instances() returned err= %d\n",
    VAR_2);
  goto err_remove_link;
 }


 FUNC_0(4, "create-instances done, idx=%d\n", VAR_1->dev_idx);

 return 0;


err_remove_link:

 FUNC_5(&VAR_1->kobj, VAR_0);

err_remove_main_attribs:
 FUNC_3(VAR_1);

err_out:
 return VAR_2;
}
