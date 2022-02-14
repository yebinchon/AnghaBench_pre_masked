
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_dma_ring {int cfgsize; int size; int desc_vaddr; int desc_paddr; int buf_num; int owner; int id; scalar_t__ num; TYPE_1__* pdma; } ;
struct xgene_dma_chan {int dev; TYPE_1__* pdma; } ;
typedef enum xgene_dma_ring_cfgsize { ____Placeholder_xgene_dma_ring_cfgsize } xgene_dma_ring_cfgsize ;
struct TYPE_2__ {int ring_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct xgene_dma_chan*,char*) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (struct xgene_dma_chan*,int) ;
 int FUNC_4 (struct xgene_dma_ring*) ;
 int FUNC_5 (struct xgene_dma_ring*) ;

__attribute__((used)) static int FUNC_6(struct xgene_dma_chan *VAR_2,
         struct xgene_dma_ring *VAR_3,
         enum xgene_dma_ring_cfgsize VAR_4)
{
 int VAR_5;


 VAR_3->pdma = VAR_2->pdma;
 VAR_3->cfgsize = VAR_4;
 VAR_3->num = VAR_2->pdma->ring_num++;
 VAR_3->id = FUNC_0(VAR_3->owner, VAR_3->buf_num);

 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5 <= 0)
  return VAR_5;
 VAR_3->size = VAR_5;


 VAR_3->desc_vaddr = FUNC_2(VAR_2->dev, VAR_3->size,
           &VAR_3->desc_paddr, VAR_1);
 if (!VAR_3->desc_vaddr) {
  FUNC_1(VAR_2, "Failed to allocate ring desc\n");
  return -VAR_0;
 }


 FUNC_4(VAR_3);
 FUNC_5(VAR_3);

 return 0;
}
