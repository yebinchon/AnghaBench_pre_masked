
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct of_phandle_args {int args_count; int* args; } ;
struct of_dma {int of_node; struct jz4780_dma_dev* of_dma_data; } ;
struct jz4780_dma_filter_data {int transfer_type; int channel; } ;
struct TYPE_6__ {int dev; int cap_mask; } ;
struct jz4780_dma_dev {int chan_reserved; TYPE_4__* chan; TYPE_2__ dma_device; TYPE_1__* soc_data; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;
struct TYPE_7__ {int chan; } ;
struct TYPE_8__ {int transfer_type; TYPE_3__ vchan; } ;
struct TYPE_5__ {int nb_channels; } ;


 int FUNC_0 (int) ;
 struct dma_chan* FUNC_1 (int *,int ,struct jz4780_dma_filter_data*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct dma_chan* FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static struct dma_chan *FUNC_4(struct of_phandle_args *VAR_1,
 struct of_dma *VAR_2)
{
 struct jz4780_dma_dev *VAR_3 = VAR_2->of_dma_data;
 dma_cap_mask_t VAR_4 = VAR_3->dma_device.cap_mask;
 struct jz4780_dma_filter_data VAR_5;

 if (VAR_1->args_count != 2)
  return ((void*)0);

 VAR_5.transfer_type = VAR_1->args[0];
 VAR_5.channel = VAR_1->args[1];

 if (VAR_5.channel > -1) {
  if (VAR_5.channel >= VAR_3->soc_data->nb_channels) {
   FUNC_2(VAR_3->dma_device.dev,
    "device requested non-existent channel %u\n",
    VAR_5.channel);
   return ((void*)0);
  }


  if (!(VAR_3->chan_reserved & FUNC_0(VAR_5.channel))) {
   FUNC_2(VAR_3->dma_device.dev,
    "device requested unreserved channel %u\n",
    VAR_5.channel);
   return ((void*)0);
  }

  VAR_3->chan[VAR_5.channel].transfer_type = VAR_5.transfer_type;

  return FUNC_3(
   &VAR_3->chan[VAR_5.channel].vchan.chan);
 } else {
  return FUNC_1(&VAR_4, VAR_0, &VAR_5,
          VAR_2->of_node);
 }
}
