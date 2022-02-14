
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_pci_ctl_info {int ctl_name; int mod_name; int pci_idx; int work; scalar_t__ edac_check; int op_state; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct edac_pci_ctl_info*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct edac_pci_ctl_info*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,char*,int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 struct edac_pci_ctl_info* FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct edac_pci_ctl_info *FUNC_8(struct device *VAR_4)
{
 struct edac_pci_ctl_info *VAR_5;

 FUNC_1(0, "\n");

 FUNC_6(&VAR_3);




 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_7(&VAR_3);
  return ((void*)0);
 }

 VAR_5->op_state = VAR_2;

 FUNC_0(VAR_5);

 FUNC_7(&VAR_3);

 if (VAR_5->edac_check)
  FUNC_4(&VAR_5->work);

 FUNC_3(VAR_1, VAR_0,
  "Removed device %d for %s %s: DEV %s\n",
  VAR_5->pci_idx, VAR_5->mod_name, VAR_5->ctl_name, FUNC_2(VAR_5));

 return VAR_5;
}
