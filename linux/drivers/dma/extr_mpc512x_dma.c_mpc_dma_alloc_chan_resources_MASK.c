
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mpc_dma_tcd {int dummy; } ;
struct TYPE_6__ {int tx_submit; int flags; } ;
struct mpc_dma_desc {int node; void* tcd_paddr; struct mpc_dma_tcd* tcd; TYPE_3__ desc; } ;
struct mpc_dma_chan {int lock; int free; void* tcd_paddr; struct mpc_dma_tcd* tcd; } ;
struct TYPE_4__ {int dev; } ;
struct mpc_dma {TYPE_2__* regs; TYPE_1__ dma; } ;
struct dma_chan {int chan_id; } ;
typedef void* dma_addr_t ;
struct TYPE_5__ {int dmaseei; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 struct mpc_dma_tcd* FUNC_2 (int ,int,void**,int ) ;
 int FUNC_3 (TYPE_3__*,struct dma_chan*) ;
 struct mpc_dma* FUNC_4 (struct dma_chan*) ;
 struct mpc_dma_chan* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (int ,int,struct mpc_dma_tcd*,void*) ;
 struct mpc_dma_desc* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int VAR_5 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct dma_chan *VAR_6)
{
 struct mpc_dma *VAR_7 = FUNC_4(VAR_6);
 struct mpc_dma_chan *VAR_8 = FUNC_5(VAR_6);
 struct mpc_dma_desc *VAR_9;
 struct mpc_dma_tcd *VAR_10;
 dma_addr_t VAR_11;
 unsigned long VAR_12;
 FUNC_0(VAR_4);
 int VAR_13;


 VAR_10 = FUNC_2(VAR_7->dma.dev,
   VAR_3 * sizeof(struct mpc_dma_tcd),
       &VAR_11, VAR_2);
 if (!VAR_10)
  return -VAR_1;


 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_9 = FUNC_7(sizeof(struct mpc_dma_desc), VAR_2);
  if (!VAR_9) {
   FUNC_1(VAR_7->dma.dev,
    "Memory allocation error. Allocated only %u descriptors\n", VAR_13);
   break;
  }

  FUNC_3(&VAR_9->desc, VAR_6);
  VAR_9->desc.flags = VAR_0;
  VAR_9->desc.tx_submit = VAR_5;

  VAR_9->tcd = &VAR_10[VAR_13];
  VAR_9->tcd_paddr = VAR_11 + (VAR_13 * sizeof(struct mpc_dma_tcd));

  FUNC_8(&VAR_9->node, &VAR_4);
 }


 if (VAR_13 == 0) {
  FUNC_6(VAR_7->dma.dev,
   VAR_3 * sizeof(struct mpc_dma_tcd),
        VAR_10, VAR_11);
  return -VAR_1;
 }

 FUNC_11(&VAR_8->lock, VAR_12);
 VAR_8->tcd = VAR_10;
 VAR_8->tcd_paddr = VAR_11;
 FUNC_9(&VAR_4, &VAR_8->free);
 FUNC_12(&VAR_8->lock, VAR_12);


 FUNC_10(&VAR_7->regs->dmaseei, VAR_6->chan_id);

 return 0;
}
