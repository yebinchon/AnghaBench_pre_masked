
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {scalar_t__ vendor; int dev; } ;
struct ahci_host_priv {int flags; scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_8, int VAR_9,
  struct ahci_host_priv *VAR_10)
{
 int VAR_11, VAR_12 = 0;
 u32 VAR_13;




 if (VAR_8->vendor != VAR_6 ||
     FUNC_2(VAR_8, VAR_9) < VAR_7 ||
     VAR_9 != VAR_2 ||
     !(FUNC_3(VAR_10->mmio + VAR_4) & 1))
  return;

 VAR_13 = FUNC_4(VAR_10->mmio + VAR_3);
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if ((VAR_13 & (1 << VAR_11)) == 0)
   continue;
  if (FUNC_3(VAR_10->mmio + FUNC_0(VAR_11))
    != VAR_5)
   continue;


  VAR_12++;
 }

 if (!VAR_12)
  return;

 FUNC_1(&VAR_8->dev, "Found %d remapped NVMe devices.\n", VAR_12);
 FUNC_1(&VAR_8->dev,
   "Switch your BIOS from RAID to AHCI mode to use them.\n");





 VAR_10->flags |= VAR_0;
}
