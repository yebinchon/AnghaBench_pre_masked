
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int csum_flags; int csum_data; int len; struct ifnet* rcvif; } ;
struct mbuf {int m_len; TYPE_2__ m_pkthdr; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct glc_softc {size_t sc_next_rxdma_slot; int sc_self; TYPE_3__* sc_rxsoft; int sc_dev; int sc_bus; int sc_rxdmadesc_map; int sc_dmadesc_tag; int sc_mtx; TYPE_1__* sc_rxdmadesc; struct ifnet* sc_ifp; } ;
struct TYPE_6__ {int rxs_desc; struct mbuf* rxs_mbuf; } ;
struct TYPE_4__ {int cmd_stat; int rxerror; int data_stat; int valid_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (struct glc_softc*,int) ;
 int FUNC_3 (struct glc_softc*,int) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct mbuf*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_10(struct glc_softc *VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 struct mbuf *VAR_18;
 struct ifnet *VAR_19 = VAR_14->sc_ifp;

 FUNC_0(VAR_14->sc_dmadesc_tag, VAR_14->sc_rxdmadesc_map,
     VAR_0);

 VAR_16 = 0;
 while ((VAR_14->sc_rxdmadesc[VAR_14->sc_next_rxdma_slot].cmd_stat &
    VAR_7) == 0) {
  VAR_15 = VAR_14->sc_next_rxdma_slot;
  VAR_14->sc_next_rxdma_slot++;
  if (VAR_14->sc_next_rxdma_slot >= VAR_11)
   VAR_14->sc_next_rxdma_slot = 0;

  if (VAR_14->sc_rxdmadesc[VAR_15].cmd_stat & VAR_6)
   VAR_16 = 1;

  if (VAR_14->sc_rxdmadesc[VAR_15].rxerror & VAR_8) {
   FUNC_4(VAR_19, VAR_12, 1);
   goto requeue;
  }

  VAR_18 = VAR_14->sc_rxsoft[VAR_15].rxs_mbuf;
  if (VAR_14->sc_rxdmadesc[VAR_15].data_stat & VAR_9) {
   VAR_18->m_pkthdr.csum_flags |=
       VAR_3 | VAR_4;
  }
  if (VAR_14->sc_rxdmadesc[VAR_15].data_stat & VAR_10) {
   VAR_18->m_pkthdr.csum_flags |=
       VAR_2 | VAR_5;
   VAR_18->m_pkthdr.csum_data = 0xffff;
  }

  if (FUNC_2(VAR_14, VAR_15)) {
   FUNC_4(VAR_19, VAR_12, 1);
   goto requeue;
  }

  FUNC_4(VAR_19, VAR_13, 1);
  VAR_18->m_pkthdr.rcvif = VAR_19;
  VAR_18->m_len = VAR_14->sc_rxdmadesc[VAR_15].valid_size;
  VAR_18->m_pkthdr.len = VAR_18->m_len;





  FUNC_6(VAR_18, 2);

  FUNC_8(&VAR_14->sc_mtx);
  (*VAR_19->if_input)(VAR_19, VAR_18);
  FUNC_7(&VAR_14->sc_mtx);

     requeue:
  FUNC_3(VAR_14, VAR_15);
 }

 FUNC_0(VAR_14->sc_dmadesc_tag, VAR_14->sc_rxdmadesc_map,
     VAR_1);

 if (VAR_16) {
  VAR_17 = FUNC_5(VAR_14->sc_bus, VAR_14->sc_dev,
      VAR_14->sc_rxsoft[VAR_14->sc_next_rxdma_slot].rxs_desc, 0);
  if (VAR_17 != 0)
   FUNC_1(VAR_14->sc_self,
       "lv1_net_start_rx_dma error: %d\n", VAR_17);
 }
}
