
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_vchan {int vc; int node; } ;
struct sun6i_dma_dev {int lock; } ;
struct dma_chan {int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct sun6i_dma_dev* FUNC_3 (int ) ;
 struct sun6i_vchan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct dma_chan *VAR_0)
{
 struct sun6i_dma_dev *VAR_1 = FUNC_3(VAR_0->device);
 struct sun6i_vchan *VAR_2 = FUNC_4(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 FUNC_0(&VAR_2->node);
 FUNC_2(&VAR_1->lock, VAR_3);

 FUNC_5(&VAR_2->vc);
}
