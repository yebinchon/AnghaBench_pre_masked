
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_ring {int slots; int desc_vaddr; int num; int id; int dst_ring_num; scalar_t__ buf_num; int owner; } ;
struct xgene_dma_chan {int max_outstanding; scalar_t__ id; struct xgene_dma_ring tx_ring; struct xgene_dma_ring rx_ring; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct xgene_dma_chan*,char*,int ,int ,int ) ;
 int FUNC_2 (struct xgene_dma_chan*,struct xgene_dma_ring*,int ) ;
 int FUNC_3 (struct xgene_dma_ring*) ;

__attribute__((used)) static int FUNC_4(struct xgene_dma_chan *VAR_5)
{
 struct xgene_dma_ring *VAR_6 = &VAR_5->rx_ring;
 struct xgene_dma_ring *VAR_7 = &VAR_5->tx_ring;
 int VAR_8;


 VAR_6->owner = VAR_3;
 VAR_6->buf_num = VAR_1 + VAR_5->id;

 VAR_8 = FUNC_2(VAR_5, VAR_6,
     VAR_2);
 if (VAR_8)
  return VAR_8;

 FUNC_1(VAR_5, "Rx ring id 0x%X num %d desc 0x%p\n",
   VAR_6->id, VAR_6->num, VAR_6->desc_vaddr);


 VAR_7->owner = VAR_4;
 VAR_7->buf_num = VAR_0 + VAR_5->id;

 VAR_8 = FUNC_2(VAR_5, VAR_7,
     VAR_2);
 if (VAR_8) {
  FUNC_3(VAR_6);
  return VAR_8;
 }

 VAR_7->dst_ring_num = FUNC_0(VAR_6->num);

 FUNC_1(VAR_5,
   "Tx ring id 0x%X num %d desc 0x%p\n",
   VAR_7->id, VAR_7->num, VAR_7->desc_vaddr);


 VAR_5->max_outstanding = VAR_7->slots;

 return VAR_8;
}
