
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl330_dmac {unsigned int num_peripherals; TYPE_1__* peripherals; } ;
struct of_phandle_args {int args_count; unsigned int* args; } ;
struct of_dma {struct pl330_dmac* of_dma_data; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int chan; } ;


 struct dma_chan* FUNC_0 (int *) ;

__attribute__((used)) static struct dma_chan *FUNC_1(struct of_phandle_args *VAR_0,
      struct of_dma *VAR_1)
{
 int VAR_2 = VAR_0->args_count;
 struct pl330_dmac *VAR_3 = VAR_1->of_dma_data;
 unsigned int VAR_4;

 if (!VAR_3)
  return ((void*)0);

 if (VAR_2 != 1)
  return ((void*)0);

 VAR_4 = VAR_0->args[0];
 if (VAR_4 >= VAR_3->num_peripherals)
  return ((void*)0);

 return FUNC_0(&VAR_3->peripherals[VAR_4].chan);
}
