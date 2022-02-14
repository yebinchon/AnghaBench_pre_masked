
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cap_mask; } ;
struct sdma_engine {TYPE_1__ dma_device; } ;
struct of_phandle_args {int args_count; int * args; } ;
struct of_dma {int of_node; struct sdma_engine* of_dma_data; } ;
struct imx_dma_data {scalar_t__ dma_request2; int priority; int peripheral_type; int dma_request; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;


 struct dma_chan* FUNC_0 (int *,int ,struct imx_dma_data*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct dma_chan *FUNC_1(struct of_phandle_args *VAR_1,
       struct of_dma *VAR_2)
{
 struct sdma_engine *VAR_3 = VAR_2->of_dma_data;
 dma_cap_mask_t VAR_4 = VAR_3->dma_device.cap_mask;
 struct imx_dma_data VAR_5;

 if (VAR_1->args_count != 3)
  return ((void*)0);

 VAR_5.dma_request = VAR_1->args[0];
 VAR_5.peripheral_type = VAR_1->args[1];
 VAR_5.priority = VAR_1->args[2];







 VAR_5.dma_request2 = 0;

 return FUNC_0(&VAR_4, VAR_0, &VAR_5,
         VAR_2->of_node);
}
