
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_chan {int lock; int desc_issued; int desc_submitted; int desc_allocated; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct virt_dma_chan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (struct virt_dma_chan*,int *) ;

__attribute__((used)) static void FUNC_6(struct dma_chan *VAR_1)
{
 struct virt_dma_chan *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3;
 FUNC_0(VAR_0);





 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_1(&VAR_2->desc_allocated, &VAR_0);
 FUNC_1(&VAR_2->desc_submitted, &VAR_0);
 FUNC_1(&VAR_2->desc_issued, &VAR_0);
 FUNC_3(&VAR_2->lock, VAR_3);


 FUNC_5(VAR_2, &VAR_0);
}
