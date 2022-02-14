
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xilinx_dma_device {int nr_channels; TYPE_1__** chan; } ;
struct of_phandle_args {int* args; } ;
struct of_dma {struct xilinx_dma_device* of_dma_data; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int common; } ;


 struct dma_chan* FUNC_0 (int *) ;

__attribute__((used)) static struct dma_chan *FUNC_1(struct of_phandle_args *VAR_0,
      struct of_dma *VAR_1)
{
 struct xilinx_dma_device *VAR_2 = VAR_1->of_dma_data;
 int VAR_3 = VAR_0->args[0];

 if (VAR_3 >= VAR_2->nr_channels || !VAR_2->chan[VAR_3])
  return ((void*)0);

 return FUNC_0(&VAR_2->chan[VAR_3]->common);
}
