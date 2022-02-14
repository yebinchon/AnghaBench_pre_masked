
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {int args_count; int * args; } ;
struct of_dma {struct imxdma_engine* of_dma_data; } ;
struct imxdma_filter_data {int request; struct imxdma_engine* imxdma; } ;
struct TYPE_2__ {int cap_mask; } ;
struct imxdma_engine {TYPE_1__ dma_device; } ;
struct dma_chan {int dummy; } ;


 struct dma_chan* FUNC_0 (int ,int ,struct imxdma_filter_data*) ;
 int VAR_0 ;

__attribute__((used)) static struct dma_chan *FUNC_1(struct of_phandle_args *VAR_1,
      struct of_dma *VAR_2)
{
 int VAR_3 = VAR_1->args_count;
 struct imxdma_engine *VAR_4 = VAR_2->of_dma_data;
 struct imxdma_filter_data VAR_5 = {
  .imxdma = VAR_4,
 };

 if (VAR_3 != 1)
  return ((void*)0);

 VAR_5.request = VAR_1->args[0];

 return FUNC_0(VAR_4->dma_device.cap_mask,
     VAR_0, &VAR_5);
}
