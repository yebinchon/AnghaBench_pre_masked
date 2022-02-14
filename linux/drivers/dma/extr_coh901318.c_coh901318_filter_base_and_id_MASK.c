
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_chan {int * device; } ;
struct coh901318_filter_args {scalar_t__ ch_nr; TYPE_1__* base; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_3__ {int dma_slave; } ;


 TYPE_2__* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_1(struct dma_chan *VAR_0, void *VAR_1)
{
 struct coh901318_filter_args *VAR_2 = VAR_1;

 if (&VAR_2->base->dma_slave == VAR_0->device &&
     VAR_2->ch_nr == FUNC_0(VAR_0)->id)
  return 1;

 return 0;
}
