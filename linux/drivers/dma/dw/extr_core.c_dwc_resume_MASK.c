
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_dma_chan {int lock; int flags; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dw_dma_chan*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 struct dw_dma_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_1)
{
 struct dw_dma_chan *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);

 if (FUNC_3(VAR_0, &VAR_2->flags))
  FUNC_0(VAR_2, 0);

 FUNC_2(&VAR_2->lock, VAR_3);

 return 0;
}
