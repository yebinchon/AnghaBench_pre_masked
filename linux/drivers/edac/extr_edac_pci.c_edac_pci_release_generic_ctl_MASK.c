
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_pci_ctl_info {int dev; int mod_name; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct edac_pci_ctl_info*) ;

void FUNC_3(struct edac_pci_ctl_info *VAR_0)
{
 FUNC_0(0, "pci mod=%s\n", VAR_0->mod_name);

 FUNC_1(VAR_0->dev);
 FUNC_2(VAR_0);
}
