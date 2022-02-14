
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgdma_device {int sw_desq; int lock; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct msgdma_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct msgdma_device* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_0)
{
 struct msgdma_device *VAR_1 = FUNC_4(VAR_0);
 unsigned long VAR_2;

 FUNC_2(&VAR_1->lock, VAR_2);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_0(VAR_1->sw_desq);
}
