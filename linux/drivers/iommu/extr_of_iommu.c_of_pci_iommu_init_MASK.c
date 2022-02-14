
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct of_phandle_args {int args_count; int np; int args; } ;
struct of_pci_iommu_alias_info {int dev; int np; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct of_phandle_args*) ;
 int FUNC_1 (int ,int ,char*,char*,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_2, u16 VAR_3, void *VAR_4)
{
 struct of_pci_iommu_alias_info *VAR_5 = VAR_4;
 struct of_phandle_args VAR_6 = { .args_count = 1 };
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5->np, VAR_3, "iommu-map", "iommu-map-mask",
    &VAR_6.np, VAR_6.args);
 if (VAR_7)
  return VAR_7 == -VAR_0 ? VAR_1 : VAR_7;

 VAR_7 = FUNC_0(VAR_5->dev, &VAR_6);
 FUNC_2(VAR_6.np);
 return VAR_7;
}
