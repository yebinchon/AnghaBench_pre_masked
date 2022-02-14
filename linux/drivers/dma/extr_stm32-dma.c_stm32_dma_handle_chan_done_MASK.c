
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_dma_chan {scalar_t__ next_sg; int busy; TYPE_1__* desc; } ;
struct TYPE_5__ {int node; } ;
struct TYPE_4__ {scalar_t__ num_sgs; TYPE_2__ vdesc; scalar_t__ cyclic; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct stm32_dma_chan*) ;
 int FUNC_2 (struct stm32_dma_chan*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct stm32_dma_chan *VAR_0)
{
 if (VAR_0->desc) {
  if (VAR_0->desc->cyclic) {
   FUNC_4(&VAR_0->desc->vdesc);
   VAR_0->next_sg++;
   FUNC_1(VAR_0);
  } else {
   VAR_0->busy = 0;
   if (VAR_0->next_sg == VAR_0->desc->num_sgs) {
    FUNC_0(&VAR_0->desc->vdesc.node);
    FUNC_3(&VAR_0->desc->vdesc);
    VAR_0->desc = ((void*)0);
   }
   FUNC_2(VAR_0);
  }
 }
}
