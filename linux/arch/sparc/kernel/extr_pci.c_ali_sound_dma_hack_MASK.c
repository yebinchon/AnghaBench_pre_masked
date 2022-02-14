
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct pci_dev {int dummy; } ;
struct iommu {int dma_addr_mask; } ;
struct TYPE_3__ {struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
struct TYPE_4__ {scalar_t__ vendor; scalar_t__ device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (scalar_t__,int ,int *) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 TYPE_2__* FUNC_5 (struct device*) ;

int FUNC_6(struct device *VAR_3, u64 VAR_4)
{
 struct iommu *VAR_5 = VAR_3->archdata.iommu;
 struct pci_dev *VAR_6;
 u8 VAR_7;

 if (!FUNC_0(VAR_3))
  return 0;

 if (FUNC_5(VAR_3)->vendor != VAR_2 ||
     FUNC_5(VAR_3)->device != VAR_1 ||
     VAR_4 != 0x7fffffff)
  return 0;

 VAR_6 = FUNC_2(VAR_2,
      VAR_0,
      ((void*)0));

 FUNC_3(VAR_6, 0x7e, &VAR_7);
 if (VAR_5->dma_addr_mask & 0x80000000)
  VAR_7 |= 0x01;
 else
  VAR_7 &= ~0x01;
 FUNC_4(VAR_6, 0x7e, VAR_7);
 FUNC_1(VAR_6);
 return 1;
}
