
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct edac_pci_ctl_info {int pci_idx; TYPE_1__* dev; struct kobject kobj; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct edac_pci_ctl_info*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct edac_pci_ctl_info*) ;
 int FUNC_5 (struct kobject*,int *,int ) ;

int FUNC_6(struct edac_pci_ctl_info *VAR_1)
{
 int VAR_2;
 struct kobject *VAR_3 = &VAR_1->kobj;

 FUNC_0(0, "idx=%d\n", VAR_1->pci_idx);


 VAR_2 = FUNC_2();
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_1(VAR_1, VAR_1->pci_idx);
 if (VAR_2)
  goto unregister_cleanup;

 VAR_2 = FUNC_5(VAR_3, &VAR_1->dev->kobj, VAR_0);
 if (VAR_2) {
  FUNC_0(0, "sysfs_create_link() returned err= %d\n", VAR_2);
  goto symlink_fail;
 }

 return 0;


symlink_fail:
 FUNC_4(VAR_1);

unregister_cleanup:
 FUNC_3();

 return VAR_2;
}
