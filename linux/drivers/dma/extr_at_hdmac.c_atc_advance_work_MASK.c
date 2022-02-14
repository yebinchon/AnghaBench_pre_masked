
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at_dma_chan {int active_list; int chan_common; } ;


 int FUNC_0 (struct at_dma_chan*,int ) ;
 scalar_t__ FUNC_1 (struct at_dma_chan*) ;
 int FUNC_2 (struct at_dma_chan*) ;
 int FUNC_3 (struct at_dma_chan*,int ) ;
 int FUNC_4 (struct at_dma_chan*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct at_dma_chan *VAR_0)
{
 FUNC_6(FUNC_5(&VAR_0->chan_common), "advance_work\n");

 if (FUNC_1(VAR_0))
  return;

 if (FUNC_7(&VAR_0->active_list) ||
     FUNC_8(&VAR_0->active_list)) {
  FUNC_2(VAR_0);
 } else {
  FUNC_0(VAR_0, FUNC_4(VAR_0));

  FUNC_3(VAR_0, FUNC_4(VAR_0));
 }
}
