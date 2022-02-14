
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_dma_chan {int active_list; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct pch_dma_chan*,int ) ;
 int FUNC_3 (struct pch_dma_chan*) ;
 int FUNC_4 (struct pch_dma_chan*,int ) ;
 int FUNC_5 (struct pch_dma_chan*) ;

__attribute__((used)) static void FUNC_6(struct pch_dma_chan *VAR_0)
{
 if (FUNC_0(&VAR_0->active_list) ||
  FUNC_1(&VAR_0->active_list)) {
  FUNC_3(VAR_0);
 } else {
  FUNC_2(VAR_0, FUNC_5(VAR_0));
  FUNC_4(VAR_0, FUNC_5(VAR_0));
 }
}
