
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_2__ {int sc_bus; } ;
struct uninorth_softc {int sc_skipslot; int sc_ver; int sc_addr; TYPE_1__ pci_sc; int sc_cfg_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct uninorth_softc *VAR_1, u_int VAR_2, u_int VAR_3,
    u_int VAR_4, u_int VAR_5)
{
 uint32_t VAR_6;

 FUNC_1(&VAR_1->sc_cfg_mtx, VAR_0);

 if (VAR_1->sc_skipslot == VAR_3)
  return (0);
 if (VAR_1->pci_sc.sc_bus == VAR_2 && VAR_1->sc_ver < 4) {



  if (VAR_3 < 11)
   return (0);

  VAR_6 = (1 << VAR_3) | (VAR_4 << 8) | (VAR_5 & 0xfc);
 } else {
  VAR_6 = (VAR_2 << 16) | (VAR_3 << 11) | (VAR_4 << 8) |
      (VAR_5 & 0xfc) | 1;
 }


 if (VAR_1->sc_ver == 4)
  VAR_6 |= (VAR_5 >> 8) << 28;

 do {
  FUNC_2(VAR_1->sc_addr, VAR_6);
 } while (FUNC_0(VAR_1->sc_addr) != VAR_6);

 return (1);
}
