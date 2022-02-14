
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsldma_chan {int dummy; } ;
struct dma_async_tx_descriptor {unsigned long flags; int cookie; int phys; } ;
struct fsl_desc_sw {int tx_list; struct dma_async_tx_descriptor async_tx; int node; int hw; } ;
struct dma_chan {int dummy; } ;
typedef size_t dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (struct fsldma_chan*,char*,int ) ;
 struct fsl_desc_sw* FUNC_2 (struct fsldma_chan*) ;
 int FUNC_3 (struct fsldma_chan*,int *) ;
 int FUNC_4 (int *,int *) ;
 size_t FUNC_5 (size_t,size_t) ;
 int VAR_2 ;
 int FUNC_6 (struct fsldma_chan*,int *,size_t) ;
 int FUNC_7 (struct fsldma_chan*,int *,size_t) ;
 int FUNC_8 (struct fsldma_chan*,int *,int ) ;
 int FUNC_9 (struct fsldma_chan*,int *,size_t) ;
 int FUNC_10 (struct fsldma_chan*,struct fsl_desc_sw*) ;
 struct fsldma_chan* FUNC_11 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_12(struct dma_chan *VAR_3,
 dma_addr_t VAR_4, dma_addr_t VAR_5,
 size_t VAR_6, unsigned long VAR_7)
{
 struct fsldma_chan *VAR_8;
 struct fsl_desc_sw *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11;
 size_t VAR_12;

 if (!VAR_3)
  return ((void*)0);

 if (!VAR_6)
  return ((void*)0);

 VAR_8 = FUNC_11(VAR_3);

 do {


  VAR_11 = FUNC_2(VAR_8);
  if (!VAR_11) {
   FUNC_1(VAR_8, "%s\n", VAR_2);
   goto fail;
  }

  VAR_12 = FUNC_5(VAR_6, (size_t)VAR_1);

  FUNC_6(VAR_8, &VAR_11->hw, VAR_12);
  FUNC_9(VAR_8, &VAR_11->hw, VAR_5);
  FUNC_7(VAR_8, &VAR_11->hw, VAR_4);

  if (!VAR_9)
   VAR_9 = VAR_11;
  else
   FUNC_8(VAR_8, &VAR_10->hw, VAR_11->async_tx.phys);

  VAR_11->async_tx.cookie = 0;
  FUNC_0(&VAR_11->async_tx);

  VAR_10 = VAR_11;
  VAR_6 -= VAR_12;
  VAR_5 += VAR_12;
  VAR_4 += VAR_12;


  FUNC_4(&VAR_11->node, &VAR_9->tx_list);
 } while (VAR_6);

 VAR_11->async_tx.flags = VAR_7;
 VAR_11->async_tx.cookie = -VAR_0;


 FUNC_10(VAR_8, VAR_11);

 return &VAR_9->async_tx;

fail:
 if (!VAR_9)
  return ((void*)0);

 FUNC_3(VAR_8, &VAR_9->tx_list);
 return ((void*)0);
}
