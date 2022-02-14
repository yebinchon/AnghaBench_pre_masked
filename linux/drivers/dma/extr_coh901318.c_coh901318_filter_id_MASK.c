
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct TYPE_2__ {unsigned long id; } ;


 TYPE_1__* FUNC_0 (struct dma_chan*) ;

bool FUNC_1(struct dma_chan *VAR_0, void *VAR_1)
{
 unsigned long VAR_2 = (unsigned long) VAR_1;

 if (VAR_2 == FUNC_0(VAR_0)->id)
  return 1;

 return 0;
}
