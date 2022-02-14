
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_drv_flags; int if_snd; } ;
struct glc_txsoft {size_t txs_lastdesc; int txs_firstdesc; int * txs_mbuf; scalar_t__ txs_ndescs; int txs_dmamap; } ;
struct glc_softc {int first_used_txdma_slot; int sc_wdog_timer; int sc_txdirtyq; int sc_self; scalar_t__ sc_txdmadesc_phys; int sc_dev; int sc_bus; int sc_txfreeq; TYPE_1__* sc_txdmadesc; int bsy_txdma_slots; int sc_txdma_tag; int sc_txdmadesc_map; int sc_dmadesc_tag; struct ifnet* sc_ifp; } ;
struct glc_dmadesc {int dummy; } ;
struct TYPE_2__ {int cmd_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct glc_txsoft* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct glc_txsoft*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ifnet*,int ,int) ;
 int FUNC_10 (int ,int ,scalar_t__,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int *) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_13(struct glc_softc *VAR_8)
{
 struct ifnet *VAR_9 = VAR_8->sc_ifp;
 struct glc_txsoft *VAR_10;
 int VAR_11 = 0, VAR_12 = 0, VAR_13;

 FUNC_5(VAR_8->sc_dmadesc_tag, VAR_8->sc_txdmadesc_map,
     VAR_0);

 while ((VAR_10 = FUNC_2(&VAR_8->sc_txdirtyq)) != ((void*)0)) {
  if (VAR_8->sc_txdmadesc[VAR_10->txs_lastdesc].cmd_stat
      & VAR_2)
   break;

  FUNC_4(&VAR_8->sc_txdirtyq, VAR_7);
  FUNC_6(VAR_8->sc_txdma_tag, VAR_10->txs_dmamap);
  VAR_8->bsy_txdma_slots -= VAR_10->txs_ndescs;

  if (VAR_10->txs_mbuf != ((void*)0)) {
   FUNC_12(VAR_10->txs_mbuf);
   VAR_10->txs_mbuf = ((void*)0);
  }

  if ((VAR_8->sc_txdmadesc[VAR_10->txs_lastdesc].cmd_stat & 0xf0000000)
      != 0) {
   FUNC_11(VAR_8->sc_bus, VAR_8->sc_dev, 0);
   VAR_12 = 1;
   FUNC_9(VAR_9, VAR_3, 1);
  }

  if (VAR_8->sc_txdmadesc[VAR_10->txs_lastdesc].cmd_stat &
      VAR_1)
   VAR_12 = 1;

  FUNC_3(&VAR_8->sc_txfreeq, VAR_10, VAR_7);
  FUNC_9(VAR_9, VAR_4, 1);
  VAR_11 = 1;
 }

 if (VAR_10 != ((void*)0))
  VAR_8->first_used_txdma_slot = VAR_10->txs_firstdesc;
 else
  VAR_8->first_used_txdma_slot = -1;

 if (VAR_12 || VAR_10 != ((void*)0)) {

  VAR_13 = FUNC_10(VAR_8->sc_bus, VAR_8->sc_dev,
      VAR_8->sc_txdmadesc_phys +
      ((VAR_10 == ((void*)0)) ? 0 : VAR_10->txs_firstdesc)*
       sizeof(struct glc_dmadesc), 0);
  if (VAR_13 != 0)
   FUNC_7(VAR_8->sc_self,
       "lv1_net_start_tx_dma error: %d\n", VAR_13);
 }

 if (VAR_11) {




  VAR_9->if_drv_flags &= ~VAR_5;
  VAR_8->sc_wdog_timer = FUNC_1(&VAR_8->sc_txdirtyq) ? 0 : 5;

  if ((VAR_9->if_drv_flags & VAR_6) &&
      !FUNC_0(&VAR_9->if_snd))
   FUNC_8(VAR_9);
 }
}
