
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_async_tx_descriptor {unsigned long flags; int phys; scalar_t__ cookie; } ;
struct TYPE_2__ {size_t dcmd; size_t dsadr; size_t dtadr; int ddadr; } ;
struct mmp_pdma_desc_sw {int tx_list; struct dma_async_tx_descriptor async_tx; TYPE_1__ desc; int node; } ;
struct mmp_pdma_chan {size_t dev_addr; int dir; size_t dcmd; struct mmp_pdma_desc_sw* cyclic_first; int dev; int slave_config; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef size_t dma_addr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;


 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 struct mmp_pdma_desc_sw* FUNC_3 (struct mmp_pdma_chan*) ;
 int FUNC_4 (struct dma_chan*,int *,int) ;
 int FUNC_5 (struct mmp_pdma_chan*,int *) ;
 struct mmp_pdma_chan* FUNC_6 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_7(struct dma_chan *VAR_4,
    dma_addr_t VAR_5, size_t VAR_6, size_t VAR_7,
    enum dma_transfer_direction VAR_8,
    unsigned long VAR_9)
{
 struct mmp_pdma_chan *VAR_10;
 struct mmp_pdma_desc_sw *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13;
 dma_addr_t VAR_14, VAR_15;

 if (!VAR_4 || !VAR_6 || !VAR_7)
  return ((void*)0);


 if (VAR_6 % VAR_7 != 0)
  return ((void*)0);

 if (VAR_7 > VAR_3)
  return ((void*)0);

 VAR_10 = FUNC_6(VAR_4);
 FUNC_4(VAR_4, &VAR_10->slave_config, VAR_8);

 switch (VAR_8) {
 case 128:
  VAR_14 = VAR_5;
  VAR_15 = VAR_10->dev_addr;
  break;
 case 129:
  VAR_15 = VAR_5;
  VAR_14 = VAR_10->dev_addr;
  break;
 default:
  FUNC_1(VAR_10->dev, "Unsupported direction for cyclic DMA\n");
  return ((void*)0);
 }

 VAR_10->dir = VAR_8;

 do {

  VAR_13 = FUNC_3(VAR_10);
  if (!VAR_13) {
   FUNC_1(VAR_10->dev, "no memory for desc\n");
   goto fail;
  }

  VAR_13->desc.dcmd = (VAR_10->dcmd | VAR_0 |
      (VAR_1 & VAR_7));
  VAR_13->desc.dsadr = VAR_14;
  VAR_13->desc.dtadr = VAR_15;

  if (!VAR_11)
   VAR_11 = VAR_13;
  else
   VAR_12->desc.ddadr = VAR_13->async_tx.phys;

  VAR_13->async_tx.cookie = 0;
  FUNC_0(&VAR_13->async_tx);

  VAR_12 = VAR_13;
  VAR_6 -= VAR_7;

  if (VAR_10->dir == 128)
   VAR_14 += VAR_7;
  else
   VAR_15 += VAR_7;


  FUNC_2(&VAR_13->node, &VAR_11->tx_list);
 } while (VAR_6);

 VAR_11->async_tx.flags = VAR_9;
 VAR_11->async_tx.cookie = -VAR_2;


 VAR_13->desc.ddadr = VAR_11->async_tx.phys;
 VAR_10->cyclic_first = VAR_11;

 return &VAR_11->async_tx;

fail:
 if (VAR_11)
  FUNC_5(VAR_10, &VAR_11->tx_list);
 return ((void*)0);
}
