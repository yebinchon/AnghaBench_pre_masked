
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {int args_count; scalar_t__* args; } ;
struct of_dma {int of_node; struct mxs_dma_engine* of_dma_data; } ;
struct mxs_dma_filter_param {scalar_t__ chan_id; } ;
struct TYPE_2__ {int cap_mask; } ;
struct mxs_dma_engine {scalar_t__ nr_channels; TYPE_1__ dma_device; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;


 struct dma_chan* FUNC_0 (int *,int ,struct mxs_dma_filter_param*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct dma_chan *FUNC_1(struct of_phandle_args *VAR_1,
          struct of_dma *VAR_2)
{
 struct mxs_dma_engine *VAR_3 = VAR_2->of_dma_data;
 dma_cap_mask_t VAR_4 = VAR_3->dma_device.cap_mask;
 struct mxs_dma_filter_param VAR_5;

 if (VAR_1->args_count != 1)
  return ((void*)0);

 VAR_5.chan_id = VAR_1->args[0];

 if (VAR_5.chan_id >= VAR_3->nr_channels)
  return ((void*)0);

 return FUNC_0(&VAR_4, VAR_0, &VAR_5,
         VAR_2->of_node);
}
