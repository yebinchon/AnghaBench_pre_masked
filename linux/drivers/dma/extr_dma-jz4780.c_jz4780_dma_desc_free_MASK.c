
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct virt_dma_desc {TYPE_1__ tx; } ;
struct jz4780_dma_desc {int desc_phys; int desc; } ;
struct jz4780_dma_chan {int desc_pool; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct jz4780_dma_desc*) ;
 struct jz4780_dma_chan* FUNC_2 (int ) ;
 struct jz4780_dma_desc* FUNC_3 (struct virt_dma_desc*) ;

__attribute__((used)) static void FUNC_4(struct virt_dma_desc *VAR_0)
{
 struct jz4780_dma_desc *VAR_1 = FUNC_3(VAR_0);
 struct jz4780_dma_chan *VAR_2 = FUNC_2(VAR_0->tx.chan);

 FUNC_0(VAR_2->desc_pool, VAR_1->desc, VAR_1->desc_phys);
 FUNC_1(VAR_1);
}
