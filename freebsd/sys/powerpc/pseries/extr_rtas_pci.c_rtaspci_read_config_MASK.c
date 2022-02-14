
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_2__ {int phys_mid; int phys_hi; } ;
struct rtaspci_softc {int ex_read_pci_config; int read_pci_config; TYPE_1__ sc_pcir; scalar_t__ sc_extended_config; } ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int device_t ;


 struct rtaspci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int,int,int,int,int,int*,...) ;

__attribute__((used)) static uint32_t
FUNC_2(device_t VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
    int VAR_5)
{
 struct rtaspci_softc *VAR_6;
 uint32_t VAR_7 = 0xffffffff;
 uint32_t VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = FUNC_0(VAR_0);

 VAR_8 = ((VAR_1 & 0xff) << 16) | ((VAR_2 & 0x1f) << 11) |
     ((VAR_3 & 0x7) << 8) | (VAR_4 & 0xff);
 if (VAR_6->sc_extended_config)
  VAR_8 |= (VAR_4 & 0xf00) << 16;

 if (VAR_6->ex_read_pci_config != -1)
  VAR_9 = FUNC_1(VAR_6->ex_read_pci_config, 4, 2,
      VAR_8, VAR_6->sc_pcir.phys_hi,
      &VAR_6->sc_pcir.phys_mid, VAR_5, &VAR_10, &VAR_7);
 else
  VAR_9 = FUNC_1(VAR_6->read_pci_config, 2, 2,
      VAR_8, VAR_5, &VAR_10, &VAR_7);


 switch (VAR_5) {
 case 1:
  VAR_7 = (int32_t)(int8_t)(VAR_7);
  break;
 case 2:
  VAR_7 = (int32_t)(int16_t)(VAR_7);
  break;
 }

 if (VAR_9 < 0 || VAR_10 != 0)
  VAR_7 = 0xffffffff;

 return (VAR_7);
}
