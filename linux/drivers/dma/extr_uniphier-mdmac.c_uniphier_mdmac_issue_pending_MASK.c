
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_chan {int lock; } ;
struct uniphier_mdmac_chan {int md; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct uniphier_mdmac_chan* FUNC_2 (struct virt_dma_chan*) ;
 struct virt_dma_chan* FUNC_3 (struct dma_chan*) ;
 int FUNC_4 (struct uniphier_mdmac_chan*) ;
 scalar_t__ FUNC_5 (struct virt_dma_chan*) ;

__attribute__((used)) static void FUNC_6(struct dma_chan *VAR_0)
{
 struct virt_dma_chan *VAR_1 = FUNC_3(VAR_0);
 struct uniphier_mdmac_chan *VAR_2 = FUNC_2(VAR_1);
 unsigned long VAR_3;

 FUNC_0(&VAR_1->lock, VAR_3);

 if (FUNC_5(VAR_1) && !VAR_2->md)
  FUNC_4(VAR_2);

 FUNC_1(&VAR_1->lock, VAR_3);
}
