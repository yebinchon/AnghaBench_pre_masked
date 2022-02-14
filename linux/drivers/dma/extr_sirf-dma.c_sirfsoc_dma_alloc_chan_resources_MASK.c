
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx_submit; int flags; } ;
struct sirfsoc_dma_desc {int node; TYPE_2__ desc; } ;
struct sirfsoc_dma_chan {int lock; int free; } ;
struct TYPE_3__ {int dev; } ;
struct sirfsoc_dma {TYPE_1__ dma; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_2__*,struct dma_chan*) ;
 struct sirfsoc_dma* FUNC_3 (struct dma_chan*) ;
 struct sirfsoc_dma_chan* FUNC_4 (struct dma_chan*) ;
 struct sirfsoc_dma_desc* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct dma_chan *VAR_6)
{
 struct sirfsoc_dma *VAR_7 = FUNC_3(VAR_6);
 struct sirfsoc_dma_chan *VAR_8 = FUNC_4(VAR_6);
 struct sirfsoc_dma_desc *VAR_9;
 unsigned long VAR_10;
 FUNC_0(VAR_4);
 int VAR_11;

 FUNC_8(VAR_7->dma.dev);


 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_2);
  if (!VAR_9) {
   FUNC_1(VAR_7->dma.dev, "Memory allocation error. "
    "Allocated only %u descriptors\n", VAR_11);
   break;
  }

  FUNC_2(&VAR_9->desc, VAR_6);
  VAR_9->desc.flags = VAR_0;
  VAR_9->desc.tx_submit = VAR_5;

  FUNC_6(&VAR_9->node, &VAR_4);
 }


 if (VAR_11 == 0)
  return -VAR_1;

 FUNC_9(&VAR_8->lock, VAR_10);

 FUNC_7(&VAR_4, &VAR_8->free);
 FUNC_10(&VAR_8->lock, VAR_10);

 return VAR_11;
}
