
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_pci_ctl_info {int kobj; int pci_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (struct edac_pci_ctl_info*) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(struct edac_pci_ctl_info *VAR_1)
{
 FUNC_0(0, "index=%d\n", VAR_1->pci_idx);


 FUNC_3(&VAR_1->kobj, VAR_0);


 FUNC_2(VAR_1);





 FUNC_0(0, "calling edac_pci_main_kobj_teardown()\n");
 FUNC_1();
}
