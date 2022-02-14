
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int tx_submit; } ;
struct imxdma_desc {int node; int status; TYPE_1__ desc; } ;
struct imxdma_channel {scalar_t__ descs_allocated; int ld_free; int dma_request; } ;
struct imx_dma_data {int dma_request; } ;
struct dma_chan {struct imx_dma_data* private; } ;
struct dma_async_tx_descriptor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,struct dma_chan*) ;
 int VAR_5 ;
 struct imxdma_desc* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 struct imxdma_channel* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_6)
{
 struct imxdma_channel *VAR_7 = FUNC_4(VAR_6);
 struct imx_dma_data *VAR_8 = VAR_6->private;

 if (VAR_8 != ((void*)0))
  VAR_7->dma_request = VAR_8->dma_request;

 while (VAR_7->descs_allocated < VAR_4) {
  struct imxdma_desc *VAR_9;

  VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_3);
  if (!VAR_9)
   break;
  FUNC_3(&VAR_9->desc, 0, sizeof(struct dma_async_tx_descriptor));
  FUNC_0(&VAR_9->desc, VAR_6);
  VAR_9->desc.tx_submit = VAR_5;

  VAR_9->desc.flags = VAR_1;
  VAR_9->status = VAR_0;

  FUNC_2(&VAR_9->node, &VAR_7->ld_free);
  VAR_7->descs_allocated++;
 }

 if (!VAR_7->descs_allocated)
  return -VAR_2;

 return VAR_7->descs_allocated;
}
