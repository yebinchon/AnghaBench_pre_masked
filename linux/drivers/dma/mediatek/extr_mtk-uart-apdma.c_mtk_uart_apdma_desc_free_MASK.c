
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dma_chan* chan; } ;
struct virt_dma_desc {TYPE_1__ tx; } ;
struct mtk_chan {int desc; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ) ;
 struct mtk_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_2(struct virt_dma_desc *VAR_0)
{
 struct dma_chan *VAR_1 = VAR_0->tx.chan;
 struct mtk_chan *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->desc);
}
