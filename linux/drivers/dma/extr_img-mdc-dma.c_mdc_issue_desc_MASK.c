
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct virt_dma_desc {int tx; int node; } ;
struct mdc_tx_desc {int list_phys; } ;
struct mdc_dma {TYPE_1__* soc; } ;
struct mdc_chan {int thread; int chan_nr; struct mdc_tx_desc* desc; int vc; struct mdc_dma* mdma; } ;
struct TYPE_2__ {int (* enable_chan ) (struct mdc_chan*) ;} ;


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
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mdc_chan*,int ) ;
 int FUNC_3 (struct mdc_chan*,int,int ) ;
 int FUNC_4 (struct mdc_dma*) ;
 int FUNC_5 (struct mdc_chan*) ;
 struct mdc_tx_desc* FUNC_6 (int *) ;
 struct virt_dma_desc* FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct mdc_chan *VAR_13)
{
 struct mdc_dma *VAR_14 = VAR_13->mdma;
 struct virt_dma_desc *VAR_15;
 struct mdc_tx_desc *VAR_16;
 u32 VAR_17;

 VAR_15 = FUNC_7(&VAR_13->vc);
 if (!VAR_15)
  return;

 FUNC_1(&VAR_15->node);

 VAR_16 = FUNC_6(&VAR_15->tx);
 VAR_13->desc = VAR_16;

 FUNC_0(FUNC_4(VAR_14), "Issuing descriptor on channel %d\n",
  VAR_13->chan_nr);

 VAR_14->soc->enable_chan(VAR_13);

 VAR_17 = FUNC_2(VAR_13, VAR_2);
 VAR_17 |= VAR_5 | VAR_3 |
  VAR_4 | VAR_7 |
  VAR_6;
 FUNC_3(VAR_13, VAR_17, VAR_2);
 VAR_17 = (VAR_13->thread << VAR_11) |
  (VAR_13->thread << VAR_10) |
  (VAR_13->thread << VAR_12);
 FUNC_3(VAR_13, VAR_17, VAR_9);
 FUNC_3(VAR_13, VAR_16->list_phys, VAR_8);
 VAR_17 = FUNC_2(VAR_13, VAR_0);
 VAR_17 |= VAR_1;
 FUNC_3(VAR_13, VAR_17, VAR_0);
}
