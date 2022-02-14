
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct glc_softc* if_softc; } ;
struct glc_softc {int bsy_txdma_slots; scalar_t__ sc_tx_vlan; int sc_wdog_timer; int sc_self; int sc_dev; int sc_bus; int sc_txdirtyq; int sc_mtx; } ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct mbuf*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;
 struct mbuf* FUNC_6 (struct mbuf*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct glc_softc*,struct mbuf**,scalar_t__*) ;
 int FUNC_8 (int ,int ,scalar_t__,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void
FUNC_10(struct ifnet *VAR_3)
{
 struct glc_softc *VAR_4 = VAR_3->if_softc;
 bus_addr_t VAR_5, VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 struct mbuf *VAR_9;

 FUNC_9(&VAR_4->sc_mtx, VAR_2);
 VAR_5 = 0;

 if ((VAR_3->if_drv_flags & (VAR_1 | VAR_0)) !=
     VAR_1)
  return;

 if (FUNC_4(&VAR_4->sc_txdirtyq))
  VAR_7 = 1;

 while (!FUNC_2(&VAR_3->if_snd)) {
  FUNC_1(&VAR_3->if_snd, VAR_9);

  if (VAR_9 == ((void*)0))
   break;


  if (VAR_4->bsy_txdma_slots > 125) {

   VAR_3->if_drv_flags |= VAR_0;
   FUNC_3(&VAR_3->if_snd, VAR_9);
   break;
  }

  FUNC_0(VAR_3, VAR_9);

  if (VAR_4->sc_tx_vlan >= 0)
   VAR_9 = FUNC_6(VAR_9, VAR_4->sc_tx_vlan);

  if (FUNC_7(VAR_4, &VAR_9, &VAR_6)) {
   VAR_3->if_drv_flags |= VAR_0;
   break;
  }

  if (VAR_5 == 0)
   VAR_5 = VAR_6;
 }

 if (VAR_7 && VAR_5 != 0) {
  VAR_8 = FUNC_8(VAR_4->sc_bus, VAR_4->sc_dev, VAR_5, 0);
  if (VAR_8 != 0)
   FUNC_5(VAR_4->sc_self,
       "lv1_net_start_tx_dma error: %d\n", VAR_8);
  VAR_4->sc_wdog_timer = 5;
 }
}
