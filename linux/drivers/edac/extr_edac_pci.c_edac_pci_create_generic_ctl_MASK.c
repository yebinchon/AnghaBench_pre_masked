
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_pci_gen_data {scalar_t__ edac_idx; } ;
struct edac_pci_ctl_info {char const* mod_name; int edac_check; int ctl_name; int dev_name; struct device* dev; struct edac_pci_gen_data* pvt_info; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct edac_pci_ctl_info*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct edac_pci_ctl_info*,scalar_t__) ;
 struct edac_pci_ctl_info* FUNC_3 (int,int ) ;
 int FUNC_4 (struct edac_pci_ctl_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*) ;

struct edac_pci_ctl_info *FUNC_7(struct device *VAR_5,
      const char *VAR_6)
{
 struct edac_pci_ctl_info *VAR_7;
 struct edac_pci_gen_data *VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_8 = VAR_7->pvt_info;
 VAR_7->dev = VAR_5;
 FUNC_0(VAR_7->dev, VAR_7);
 VAR_7->dev_name = FUNC_5(FUNC_6(VAR_5));

 VAR_7->mod_name = VAR_6;
 VAR_7->ctl_name = VAR_1;
 if (VAR_2 == VAR_0)
  VAR_7->edac_check = VAR_3;

 VAR_8->edac_idx = VAR_4++;

 if (FUNC_2(VAR_7, VAR_8->edac_idx) > 0) {
  FUNC_1(3, "failed edac_pci_add_device()\n");
  FUNC_4(VAR_7);
  return ((void*)0);
 }

 return VAR_7;
}
