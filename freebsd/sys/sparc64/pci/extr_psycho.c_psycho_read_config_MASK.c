
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ sc_pci_secbus; int * sc_pci_bh; int sc_pci_cfgt; } ;
struct psycho_softc {int* sc_pci_hpbcfg; TYPE_1__ sc_ops; } ;
typedef int device_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 struct psycho_softc* FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static uint32_t
FUNC_7(device_t VAR_5, u_int VAR_6, u_int VAR_7, u_int VAR_8, u_int VAR_9,
    int VAR_10)
{
 struct psycho_softc *VAR_11;

 VAR_11 = FUNC_2(VAR_5);
 if (VAR_6 == VAR_11->sc_ops.sc_pci_secbus && VAR_7 == VAR_3 &&
     VAR_8 == VAR_4) {
  if (VAR_9 % VAR_10 != 0)
   return (-1);

  if (VAR_9 >= sizeof(VAR_11->sc_pci_hpbcfg))
   return (0);

  if ((VAR_9 < VAR_1 && VAR_9 + VAR_10 > VAR_1) ||
      VAR_9 == VAR_1 || VAR_9 == VAR_1 + 1)
   FUNC_4(&VAR_11->sc_pci_hpbcfg[VAR_1],
       FUNC_1(VAR_11->sc_ops.sc_pci_cfgt,
       VAR_11->sc_ops.sc_pci_bh[VAR_0],
       FUNC_0(VAR_11->sc_ops.sc_pci_secbus,
       VAR_3, VAR_4, VAR_1)));

  switch (VAR_10) {
  case 1:
   return (VAR_11->sc_pci_hpbcfg[VAR_9]);
  case 2:
   return (FUNC_3(&VAR_11->sc_pci_hpbcfg[VAR_9]));
  case 4:
   return (FUNC_5(&VAR_11->sc_pci_hpbcfg[VAR_9]));
  }
 }

 return (FUNC_6(VAR_5, VAR_2,
     FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9), VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10));
}
