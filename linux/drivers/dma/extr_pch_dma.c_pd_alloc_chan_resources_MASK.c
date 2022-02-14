
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_dma_desc {int desc_node; } ;
struct pch_dma_chan {int descs_allocated; int lock; int free_list; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct dma_chan*) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 struct pch_dma_desc* FUNC_8 (struct dma_chan*,int ) ;
 int FUNC_9 (struct dma_chan*,int) ;
 int FUNC_10 (struct pch_dma_chan*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_3 ;
 struct pch_dma_chan* FUNC_13 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_14(struct dma_chan *VAR_4)
{
 struct pch_dma_chan *VAR_5 = FUNC_13(VAR_4);
 struct pch_dma_desc *VAR_6;
 FUNC_0(VAR_3);
 int VAR_7;

 if (!FUNC_10(VAR_5)) {
  FUNC_2(FUNC_1(VAR_4), "DMA channel not idle ?\n");
  return -VAR_0;
 }

 if (!FUNC_6(&VAR_5->free_list))
  return VAR_5->descs_allocated;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = FUNC_8(VAR_4, VAR_1);

  if (!VAR_6) {
   FUNC_3(FUNC_1(VAR_4),
    "Only allocated %d initial descriptors\n", VAR_7);
   break;
  }

  FUNC_5(&VAR_6->desc_node, &VAR_3);
 }

 FUNC_11(&VAR_5->lock);
 FUNC_7(&VAR_3, &VAR_5->free_list);
 VAR_5->descs_allocated = VAR_7;
 FUNC_4(VAR_4);
 FUNC_12(&VAR_5->lock);

 FUNC_9(VAR_4, 1);

 return VAR_5->descs_allocated;
}
