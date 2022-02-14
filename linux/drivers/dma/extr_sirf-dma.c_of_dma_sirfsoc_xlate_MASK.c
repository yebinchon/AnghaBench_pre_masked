
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sirfsoc_dma {TYPE_1__* channels; } ;
struct of_phandle_args {unsigned int* args; } ;
struct of_dma {struct sirfsoc_dma* of_dma_data; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int chan; } ;


 unsigned int VAR_0 ;
 struct dma_chan* FUNC_0 (int *) ;

__attribute__((used)) static struct dma_chan *FUNC_1(struct of_phandle_args *VAR_1,
 struct of_dma *VAR_2)
{
 struct sirfsoc_dma *VAR_3 = VAR_2->of_dma_data;
 unsigned int VAR_4 = VAR_1->args[0];

 if (VAR_4 >= VAR_0)
  return ((void*)0);

 return FUNC_0(&VAR_3->channels[VAR_4].chan);
}
