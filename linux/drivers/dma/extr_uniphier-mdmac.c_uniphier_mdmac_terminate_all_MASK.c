
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_dma_chan {int lock; } ;
struct uniphier_mdmac_chan {TYPE_1__* md; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int vd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct uniphier_mdmac_chan* FUNC_3 (struct virt_dma_chan*) ;
 struct virt_dma_chan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (struct uniphier_mdmac_chan*) ;
 int FUNC_6 (struct virt_dma_chan*,int *) ;
 int FUNC_7 (struct virt_dma_chan*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct dma_chan *VAR_1)
{
 struct virt_dma_chan *VAR_2 = FUNC_4(VAR_1);
 struct uniphier_mdmac_chan *VAR_3 = FUNC_3(VAR_2);
 unsigned long VAR_4;
 int VAR_5 = 0;
 FUNC_0(VAR_0);

 FUNC_1(&VAR_2->lock, VAR_4);

 if (VAR_3->md) {
  FUNC_8(&VAR_3->md->vd);
  VAR_3->md = ((void*)0);
  VAR_5 = FUNC_5(VAR_3);
 }
 FUNC_7(VAR_2, &VAR_0);

 FUNC_2(&VAR_2->lock, VAR_4);

 FUNC_6(VAR_2, &VAR_0);

 return VAR_5;
}
