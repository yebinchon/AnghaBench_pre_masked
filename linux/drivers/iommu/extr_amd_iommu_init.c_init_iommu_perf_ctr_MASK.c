
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u64 ;
struct pci_dev {int dummy; } ;
struct amd_iommu {void* max_counters; void* max_banks; scalar_t__ mmio_base; struct pci_dev* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amd_iommu*,int ) ;
 scalar_t__ FUNC_1 (struct amd_iommu*,int ,int ,int ,int*,int) ;
 int FUNC_2 (struct pci_dev*,char*) ;
 int FUNC_3 (struct pci_dev*,char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct amd_iommu *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->dev;
 u64 VAR_5 = 0xabcd, VAR_6 = 0;

 if (!FUNC_0(VAR_3, VAR_0))
  return;

 VAR_2 = 1;


 if ((FUNC_1(VAR_3, 0, 0, 0, &VAR_5, 1)) ||
     (FUNC_1(VAR_3, 0, 0, 0, &VAR_6, 0)) ||
     (VAR_5 != VAR_6)) {
  FUNC_2(VAR_4, "Unable to write to IOMMU perf counter.\n");
  VAR_2 = 0;
  return;
 }

 FUNC_3(VAR_4, "IOMMU performance counters supported\n");

 VAR_5 = FUNC_4(VAR_3->mmio_base + VAR_1);
 VAR_3->max_banks = (u8) ((VAR_5 >> 12) & 0x3f);
 VAR_3->max_counters = (u8) ((VAR_5 >> 7) & 0xf);
}
