
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; struct mbuf* m_next; } ;
struct glc_txsoft {int txs_ndescs; int txs_firstdesc; int txs_lastdesc; struct mbuf* txs_mbuf; int txs_dmamap; } ;
struct glc_softc {int bsy_txdma_slots; int first_used_txdma_slot; int next_txdma_slot; int sc_txdirtyq; int sc_txfreeq; TYPE_3__* sc_txdmadesc; int sc_txdma_tag; scalar_t__ sc_txdmadesc_phys; } ;
struct glc_dmadesc {int dummy; } ;
struct TYPE_6__ {int ds_len; int ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_7__ {scalar_t__ next; int cmd_stat; int len; int paddr; } ;


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
 int FUNC_0 (int,char*) ;
 int VAR_12 ;
 struct glc_txsoft* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct glc_txsoft*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,struct mbuf*,TYPE_2__*,int*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int) ;
 struct mbuf* FUNC_7 (struct mbuf*,int ,int) ;
 int FUNC_8 (struct mbuf*) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_9(struct glc_softc *VAR_14, struct mbuf **VAR_15, bus_addr_t *VAR_16)
{
 bus_dma_segment_t VAR_17[16];
 struct glc_txsoft *VAR_18;
 struct mbuf *VAR_19;
 bus_addr_t VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25 = 0;


 VAR_24 = 128 - VAR_14->bsy_txdma_slots;

 if (VAR_24 > 16 || VAR_14->first_used_txdma_slot < 0)
  VAR_24 = 16;


 if ((VAR_18 = FUNC_1(&VAR_14->sc_txfreeq)) == ((void*)0)) {

  return (VAR_5);
 }

 VAR_23 = 0;
 for (VAR_19 = *VAR_15; VAR_19 != ((void*)0); VAR_19 = VAR_19->m_next)
  VAR_23++;

 if (VAR_23 > VAR_24) {
  VAR_19 = FUNC_7(*VAR_15, VAR_12, VAR_24);
  if (VAR_19 == ((void*)0)) {
   FUNC_8(*VAR_15);
   *VAR_15 = ((void*)0);
   return (VAR_5);
  }
  *VAR_15 = VAR_19;
 }

 VAR_25 = FUNC_4(VAR_14->sc_txdma_tag, VAR_18->txs_dmamap,
     *VAR_15, VAR_17, &VAR_23, VAR_1);
 if (VAR_25 != 0) {
  FUNC_8(*VAR_15);
  *VAR_15 = ((void*)0);
  return (VAR_25);
 }

 FUNC_0(VAR_23 <= 128 - VAR_14->bsy_txdma_slots,
     ("GLC: Mapped too many (%d) DMA segments with %d available",
     VAR_23, 128 - VAR_14->bsy_txdma_slots));

 if (VAR_23 == 0) {
  FUNC_8(*VAR_15);
  *VAR_15 = ((void*)0);
  return (VAR_4);
 }

 VAR_18->txs_ndescs = VAR_23;
 VAR_18->txs_firstdesc = VAR_14->next_txdma_slot;

 VAR_22 = VAR_18->txs_firstdesc;
 VAR_20 = VAR_14->sc_txdmadesc_phys +
     VAR_18->txs_firstdesc*sizeof(struct glc_dmadesc);

 for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
  FUNC_6(&VAR_14->sc_txdmadesc[VAR_22], sizeof(VAR_14->sc_txdmadesc[VAR_22]));
  VAR_14->sc_txdmadesc[VAR_22].paddr = VAR_17[VAR_21].ds_addr;
  VAR_14->sc_txdmadesc[VAR_22].len = VAR_17[VAR_21].ds_len;
  VAR_14->sc_txdmadesc[VAR_22].next = VAR_14->sc_txdmadesc_phys +
      ((VAR_22 + 1) % VAR_11)*sizeof(struct glc_dmadesc);
  VAR_14->sc_txdmadesc[VAR_22].cmd_stat |= VAR_9;

  if (VAR_21+1 == VAR_23) {
   VAR_18->txs_lastdesc = VAR_22;
   VAR_14->sc_txdmadesc[VAR_22].next = 0;
   VAR_14->sc_txdmadesc[VAR_22].cmd_stat |= VAR_8;
  }

  if ((*VAR_15)->m_pkthdr.csum_flags & VAR_2)
   VAR_14->sc_txdmadesc[VAR_22].cmd_stat |= VAR_6;
  if ((*VAR_15)->m_pkthdr.csum_flags & VAR_3)
   VAR_14->sc_txdmadesc[VAR_22].cmd_stat |= VAR_7;
  VAR_14->sc_txdmadesc[VAR_22].cmd_stat |= VAR_10;

  VAR_22 = (VAR_22 + 1) % VAR_11;
 }
 VAR_14->next_txdma_slot = VAR_22;
 VAR_14->bsy_txdma_slots += VAR_23;
 if (VAR_18->txs_firstdesc != 0)
  VAR_22 = VAR_18->txs_firstdesc - 1;
 else
  VAR_22 = VAR_11 - 1;

 if (VAR_14->first_used_txdma_slot < 0)
  VAR_14->first_used_txdma_slot = VAR_18->txs_firstdesc;

 FUNC_5(VAR_14->sc_txdma_tag, VAR_18->txs_dmamap,
     VAR_0);
 VAR_14->sc_txdmadesc[VAR_22].next = VAR_20;

 FUNC_3(&VAR_14->sc_txfreeq, VAR_13);
 FUNC_2(&VAR_14->sc_txdirtyq, VAR_18, VAR_13);
 VAR_18->txs_mbuf = *VAR_15;
 *VAR_16 = VAR_20;

 return (0);
}
