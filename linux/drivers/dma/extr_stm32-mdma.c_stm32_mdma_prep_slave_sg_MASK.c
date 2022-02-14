
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stm32_mdma_desc {int cyclic; int count; TYPE_2__* node; int vdesc; } ;
struct stm32_mdma_chan {int desc_pool; int vchan; TYPE_1__* desc; } ;
struct scatterlist {int dummy; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
struct TYPE_4__ {int hwdesc_phys; int hwdesc; } ;
struct TYPE_3__ {scalar_t__ cyclic; } ;


 int FUNC_0 (struct stm32_mdma_chan*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct stm32_mdma_desc*) ;
 struct stm32_mdma_desc* FUNC_4 (struct stm32_mdma_chan*,int ) ;
 int FUNC_5 (struct stm32_mdma_chan*,struct stm32_mdma_desc*,struct scatterlist*,int ,int) ;
 struct stm32_mdma_chan* FUNC_6 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_7 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_8(struct dma_chan *VAR_0, struct scatterlist *VAR_1,
    u32 VAR_2, enum dma_transfer_direction VAR_3,
    unsigned long VAR_4, void *VAR_5)
{
 struct stm32_mdma_chan *VAR_6 = FUNC_6(VAR_0);
 struct stm32_mdma_desc *VAR_7;
 int VAR_8, VAR_9;






 if (VAR_6->desc && VAR_6->desc->cyclic) {
  FUNC_1(FUNC_0(VAR_6),
   "Request not allowed when dma in cyclic mode\n");
  return ((void*)0);
 }

 VAR_7 = FUNC_4(VAR_6, VAR_2);
 if (!VAR_7)
  return ((void*)0);

 VAR_9 = FUNC_5(VAR_6, VAR_7, VAR_1, VAR_2, VAR_3);
 if (VAR_9 < 0)
  goto xfer_setup_err;

 VAR_7->cyclic = 0;

 return FUNC_7(&VAR_6->vchan, &VAR_7->vdesc, VAR_4);

xfer_setup_err:
 for (VAR_8 = 0; VAR_8 < VAR_7->count; VAR_8++)
  FUNC_2(VAR_6->desc_pool, VAR_7->node[VAR_8].hwdesc,
         VAR_7->node[VAR_8].hwdesc_phys);
 FUNC_3(VAR_7);
 return ((void*)0);
}
