
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
struct fire_softc {int sc_msi_data_mask; int sc_flags; scalar_t__ sc_msix_data_width; int sc_msi_addr64; int sc_msi_addr32; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 struct fire_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4, device_t VAR_5, int VAR_6, uint64_t *VAR_7,
    uint32_t *VAR_8)
{
 struct fire_softc *VAR_9;
 struct pci_devinfo *VAR_10;

 VAR_9 = FUNC_1(VAR_4);
 VAR_10 = FUNC_0(VAR_5);
 if (VAR_10->cfg.msi.msi_alloc > 0) {
  if ((VAR_6 & ~VAR_9->sc_msi_data_mask) != 0) {
   FUNC_2(VAR_4, "invalid MSI 0x%x\n", VAR_6);
   return (VAR_0);
  }
 } else {
  if ((VAR_9->sc_flags & VAR_2) == 0)
   return (VAR_1);
  if (FUNC_3(VAR_6) > VAR_9->sc_msix_data_width) {
   FUNC_2(VAR_4, "invalid MSI-X 0x%x\n", VAR_6);
   return (VAR_0);
  }
 }
 if (VAR_10->cfg.msi.msi_alloc > 0 &&
     (VAR_10->cfg.msi.msi_ctrl & VAR_3) == 0)
  *VAR_7 = VAR_9->sc_msi_addr32;
 else
  *VAR_7 = VAR_9->sc_msi_addr64;
 *VAR_8 = VAR_6;
 return (0);
}
