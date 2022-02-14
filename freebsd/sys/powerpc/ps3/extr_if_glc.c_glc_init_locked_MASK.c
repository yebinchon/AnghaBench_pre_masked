
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct glc_txsoft {int * txs_mbuf; int txs_dmamap; } ;
struct glc_softc {int first_used_txdma_slot; int sc_tick_ch; scalar_t__ sc_wdog_timer; TYPE_1__* sc_ifp; int sc_ifpflags; int sc_self; struct glc_rxsoft* sc_rxsoft; int sc_dev; int sc_bus; scalar_t__ bsy_txdma_slots; int sc_txfreeq; int sc_txdma_tag; int sc_txdirtyq; int sc_rxdmadesc_map; int sc_dmadesc_tag; int sc_mtx; } ;
struct glc_rxsoft {int rxs_desc_slot; int rxs_desc; int * rxs_mbuf; } ;
struct TYPE_2__ {int if_flags; int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct glc_txsoft* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct glc_txsoft*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int ,struct glc_softc*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct glc_softc*,int) ;
 int FUNC_8 (struct glc_softc*,int) ;
 int FUNC_9 (struct glc_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_15(struct glc_softc *VAR_8)
{
 int VAR_9, VAR_10;
 struct glc_rxsoft *VAR_11;
 struct glc_txsoft *VAR_12;

 FUNC_14(&VAR_8->sc_mtx, VAR_4);

 FUNC_12(VAR_8->sc_bus, VAR_8->sc_dev, 0);
 FUNC_11(VAR_8->sc_bus, VAR_8->sc_dev, 0);

 FUNC_9(VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_11 = &VAR_8->sc_rxsoft[VAR_9];
  VAR_11->rxs_desc_slot = VAR_9;

  if (VAR_11->rxs_mbuf == ((void*)0)) {
   FUNC_7(VAR_8, VAR_9);

   if (VAR_11->rxs_mbuf == ((void*)0)) {
    VAR_11->rxs_desc_slot = -1;
    break;
   }
  }

  FUNC_8(VAR_8, VAR_9);
  FUNC_3(VAR_8->sc_dmadesc_tag, VAR_8->sc_rxdmadesc_map,
      VAR_0);
 }


 while ((VAR_12 = FUNC_0(&VAR_8->sc_txdirtyq)) != ((void*)0)) {
  FUNC_2(&VAR_8->sc_txdirtyq, VAR_7);
  FUNC_4(VAR_8->sc_txdma_tag, VAR_12->txs_dmamap);

  if (VAR_12->txs_mbuf != ((void*)0)) {
   FUNC_13(VAR_12->txs_mbuf);
   VAR_12->txs_mbuf = ((void*)0);
  }

  FUNC_1(&VAR_8->sc_txfreeq, VAR_12, VAR_7);
 }
 VAR_8->first_used_txdma_slot = -1;
 VAR_8->bsy_txdma_slots = 0;

 VAR_10 = FUNC_10(VAR_8->sc_bus, VAR_8->sc_dev,
     VAR_8->sc_rxsoft[0].rxs_desc, 0);
 if (VAR_10 != 0)
  FUNC_6(VAR_8->sc_self,
      "lv1_net_start_rx_dma error: %d\n", VAR_10);

 VAR_8->sc_ifp->if_drv_flags |= VAR_3;
 VAR_8->sc_ifp->if_drv_flags &= ~VAR_2;
 VAR_8->sc_ifpflags = VAR_8->sc_ifp->if_flags;

 VAR_8->sc_wdog_timer = 0;
 FUNC_5(&VAR_8->sc_tick_ch, VAR_6, VAR_5, VAR_8);
}
