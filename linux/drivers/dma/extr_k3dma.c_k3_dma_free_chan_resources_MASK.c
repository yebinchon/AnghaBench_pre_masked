
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k3_dma_dev {int lock; } ;
struct k3_dma_chan {scalar_t__ ccfg; int vc; int node; } ;
struct dma_chan {int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct k3_dma_chan* FUNC_3 (struct dma_chan*) ;
 struct k3_dma_dev* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct dma_chan *VAR_0)
{
 struct k3_dma_chan *VAR_1 = FUNC_3(VAR_0);
 struct k3_dma_dev *VAR_2 = FUNC_4(VAR_0->device);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 FUNC_0(&VAR_1->node);
 FUNC_2(&VAR_2->lock, VAR_3);

 FUNC_5(&VAR_1->vc);
 VAR_1->ccfg = 0;
}
