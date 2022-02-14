
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {int args_count; scalar_t__* args; } ;
struct of_dma {int of_node; struct mmp_tdma_device* of_dma_data; } ;
struct mmp_tdma_filter_param {scalar_t__ chan_id; } ;
struct TYPE_2__ {int cap_mask; } ;
struct mmp_tdma_device {TYPE_1__ device; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;


 scalar_t__ VAR_0 ;
 struct dma_chan* FUNC_0 (int *,int ,struct mmp_tdma_filter_param*,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct dma_chan *FUNC_1(struct of_phandle_args *VAR_2,
          struct of_dma *VAR_3)
{
 struct mmp_tdma_device *VAR_4 = VAR_3->of_dma_data;
 dma_cap_mask_t VAR_5 = VAR_4->device.cap_mask;
 struct mmp_tdma_filter_param VAR_6;

 if (VAR_2->args_count != 1)
  return ((void*)0);

 VAR_6.chan_id = VAR_2->args[0];

 if (VAR_6.chan_id >= VAR_0)
  return ((void*)0);

 return FUNC_0(&VAR_5, VAR_1, &VAR_6,
         VAR_3->of_node);
}
