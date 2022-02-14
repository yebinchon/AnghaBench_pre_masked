
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_mdma_device {scalar_t__ nr_requests; int ddev; } ;
struct stm32_mdma_chan_config {scalar_t__ request; scalar_t__ priority_level; scalar_t__ transfer_config; scalar_t__ mask_addr; scalar_t__ mask_data; } ;
struct stm32_mdma_chan {struct stm32_mdma_chan_config chan_config; } ;
struct of_phandle_args {int args_count; scalar_t__* args; } ;
struct of_dma {struct stm32_mdma_device* of_dma_data; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct dma_chan* FUNC_1 (int *) ;
 int FUNC_2 (struct stm32_mdma_device*) ;
 struct stm32_mdma_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static struct dma_chan *FUNC_4(struct of_phandle_args *VAR_1,
         struct of_dma *VAR_2)
{
 struct stm32_mdma_device *VAR_3 = VAR_2->of_dma_data;
 struct stm32_mdma_chan *VAR_4;
 struct dma_chan *VAR_5;
 struct stm32_mdma_chan_config VAR_6;

 if (VAR_1->args_count < 5) {
  FUNC_0(FUNC_2(VAR_3), "Bad number of args\n");
  return ((void*)0);
 }

 VAR_6.request = VAR_1->args[0];
 VAR_6.priority_level = VAR_1->args[1];
 VAR_6.transfer_config = VAR_1->args[2];
 VAR_6.mask_addr = VAR_1->args[3];
 VAR_6.mask_data = VAR_1->args[4];

 if (VAR_6.request >= VAR_3->nr_requests) {
  FUNC_0(FUNC_2(VAR_3), "Bad request line\n");
  return ((void*)0);
 }

 if (VAR_6.priority_level > VAR_0) {
  FUNC_0(FUNC_2(VAR_3), "Priority level not supported\n");
  return ((void*)0);
 }

 VAR_5 = FUNC_1(&VAR_3->ddev);
 if (!VAR_5) {
  FUNC_0(FUNC_2(VAR_3), "No more channels available\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_3(VAR_5);
 VAR_4->chan_config = VAR_6;

 return VAR_5;
}
