
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* dev; } ;
struct stm32_dma_device {struct stm32_dma_chan* chan; TYPE_1__ ddev; } ;
struct TYPE_4__ {int chan; } ;
struct stm32_dma_chan {TYPE_2__ vchan; } ;
struct stm32_dma_cfg {size_t channel_id; size_t request_line; size_t stream_config; size_t features; } ;
struct of_phandle_args {int args_count; size_t* args; } ;
struct of_dma {struct stm32_dma_device* of_dma_data; } ;
struct dma_chan {int dummy; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct dma_chan* FUNC_1 (int *) ;
 int FUNC_2 (struct stm32_dma_chan*,struct stm32_dma_cfg*) ;

__attribute__((used)) static struct dma_chan *FUNC_3(struct of_phandle_args *VAR_2,
        struct of_dma *VAR_3)
{
 struct stm32_dma_device *VAR_4 = VAR_3->of_dma_data;
 struct device *VAR_5 = VAR_4->ddev.dev;
 struct stm32_dma_cfg VAR_6;
 struct stm32_dma_chan *VAR_7;
 struct dma_chan *VAR_8;

 if (VAR_2->args_count < 4) {
  FUNC_0(VAR_5, "Bad number of cells\n");
  return ((void*)0);
 }

 VAR_6.channel_id = VAR_2->args[0];
 VAR_6.request_line = VAR_2->args[1];
 VAR_6.stream_config = VAR_2->args[2];
 VAR_6.features = VAR_2->args[3];

 if (VAR_6.channel_id >= VAR_0 ||
     VAR_6.request_line >= VAR_1) {
  FUNC_0(VAR_5, "Bad channel and/or request id\n");
  return ((void*)0);
 }

 VAR_7 = &VAR_4->chan[VAR_6.channel_id];

 VAR_8 = FUNC_1(&VAR_7->vchan.chan);
 if (!VAR_8) {
  FUNC_0(VAR_5, "No more channels available\n");
  return ((void*)0);
 }

 FUNC_2(VAR_7, &VAR_6);

 return VAR_8;
}
