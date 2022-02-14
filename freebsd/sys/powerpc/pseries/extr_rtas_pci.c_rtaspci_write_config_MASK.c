
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_2__ {int phys_mid; int phys_hi; } ;
struct rtaspci_softc {int ex_write_pci_config; int write_pci_config; TYPE_1__ sc_pcir; scalar_t__ sc_extended_config; } ;
typedef int device_t ;


 struct rtaspci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int,int,int,int,int,int,...) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
    u_int VAR_4, uint32_t VAR_5, int VAR_6)
{
 struct rtaspci_softc *VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_0);

 VAR_8 = ((VAR_1 & 0xff) << 16) | ((VAR_2 & 0x1f) << 11) |
     ((VAR_3 & 0x7) << 8) | (VAR_4 & 0xff);
 if (VAR_7->sc_extended_config)
  VAR_8 |= (VAR_4 & 0xf00) << 16;

 if (VAR_7->ex_write_pci_config != -1)
  FUNC_1(VAR_7->ex_write_pci_config, 5, 1, VAR_8,
      VAR_7->sc_pcir.phys_hi, VAR_7->sc_pcir.phys_mid,
      VAR_6, VAR_5, &VAR_9);
 else
  FUNC_1(VAR_7->write_pci_config, 3, 1, VAR_8,
      VAR_6, VAR_5, &VAR_9);
}
