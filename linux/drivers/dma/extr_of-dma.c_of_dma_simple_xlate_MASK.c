
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int args_count; int np; int * args; } ;
struct of_dma_filter_info {int filter_fn; int dma_cap; } ;
struct of_dma {struct of_dma_filter_info* of_dma_data; } ;
struct dma_chan {int dummy; } ;


 struct dma_chan* FUNC_0 (int *,int ,int *,int ) ;

struct dma_chan *FUNC_1(struct of_phandle_args *VAR_0,
      struct of_dma *VAR_1)
{
 int VAR_2 = VAR_0->args_count;
 struct of_dma_filter_info *VAR_3 = VAR_1->of_dma_data;

 if (!VAR_3 || !VAR_3->filter_fn)
  return ((void*)0);

 if (VAR_2 != 1)
  return ((void*)0);

 return FUNC_0(&VAR_3->dma_cap, VAR_3->filter_fn,
         &VAR_0->args[0], VAR_0->np);
}
