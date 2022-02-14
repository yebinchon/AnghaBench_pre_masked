
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pci_dev {int bus; } ;
struct TYPE_2__ {scalar_t__ (* iommu_bypass_supported ) (struct pci_dev*,int ) ;} ;
struct pci_controller {TYPE_1__ controller_ops; } ;
struct device {int dummy; } ;


 struct pci_controller* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static bool FUNC_3(struct device *VAR_0, u64 VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_2(VAR_0);
 struct pci_controller *VAR_3 = FUNC_0(VAR_2->bus);

 return VAR_3->controller_ops.iommu_bypass_supported &&
  VAR_3->controller_ops.iommu_bypass_supported(VAR_2, VAR_1);
}
