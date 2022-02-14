
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ msi_alloc; int msi_ctrl; } ;
struct TYPE_4__ {TYPE_1__ msi; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
struct opalpci_softc {int base_msi_irq; int msi_base; int phb_id; int * msi_vmem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 struct pci_devinfo* FUNC_2 (int ) ;
 struct opalpci_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ,int ,int,...) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_8, device_t VAR_9, int VAR_10, uint64_t *VAR_11,
    uint32_t *VAR_12)
{
 struct opalpci_softc *VAR_13;
 struct pci_devinfo *VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = FUNC_3(VAR_8);
 if (VAR_13->msi_vmem == ((void*)0))
  return (VAR_0);

 VAR_16 = VAR_10 - VAR_13->base_msi_irq - VAR_13->msi_base;
 FUNC_5(VAR_5, VAR_13->phb_id, VAR_4, VAR_16);

 VAR_14 = FUNC_2(VAR_9);
 if (VAR_14->cfg.msi.msi_alloc > 0 &&
     (VAR_14->cfg.msi.msi_ctrl & VAR_6) == 0) {
  uint32_t VAR_17;
  VAR_15 = FUNC_5(VAR_2, VAR_13->phb_id,
      VAR_4, VAR_16, 1, FUNC_6(&VAR_17),
      FUNC_6(VAR_12));
  *VAR_11 = FUNC_0(VAR_17);
 } else {
  VAR_15 = FUNC_5(VAR_3, VAR_13->phb_id,
      VAR_4, VAR_16, 1, FUNC_6(VAR_11), FUNC_6(VAR_12));
  *VAR_11 = FUNC_1(*VAR_11);
 }
 *VAR_12 = FUNC_0(*VAR_12);

 if (VAR_7 && VAR_15 != 0)
  FUNC_4(VAR_9, "OPAL MSI mapping error: %d\n", VAR_15);

 return ((VAR_15 == 0) ? 0 : VAR_1);
}
