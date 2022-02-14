
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct jz4780_dma_chan {TYPE_1__ vchan; int desc; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct jz4780_dma_chan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct jz4780_dma_chan* FUNC_3 (struct dma_chan*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_0)
{
 struct jz4780_dma_chan *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 FUNC_1(&VAR_1->vchan.lock, VAR_2);

 if (FUNC_4(&VAR_1->vchan) && !VAR_1->desc)
  FUNC_0(VAR_1);

 FUNC_2(&VAR_1->vchan.lock, VAR_2);
}
