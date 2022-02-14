
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shdma_chan {scalar_t__ pm_state; int chan_lock; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct shdma_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct shdma_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_4(struct dma_chan *VAR_2)
{
 struct shdma_chan *VAR_3 = FUNC_3(VAR_2);

 FUNC_1(&VAR_3->chan_lock);
 if (VAR_3->pm_state == VAR_0)
  FUNC_0(VAR_3);
 else
  VAR_3->pm_state = VAR_1;
 FUNC_2(&VAR_3->chan_lock);
}
