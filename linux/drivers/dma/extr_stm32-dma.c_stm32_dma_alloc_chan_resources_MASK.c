
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct stm32_dma_device {TYPE_1__ ddev; } ;
struct stm32_dma_chan {int config_init; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct stm32_dma_chan*) ;
 struct stm32_dma_device* FUNC_3 (struct stm32_dma_chan*) ;
 struct stm32_dma_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_0)
{
 struct stm32_dma_chan *VAR_1 = FUNC_4(VAR_0);
 struct stm32_dma_device *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_1->config_init = 0;

 VAR_3 = FUNC_0(VAR_2->ddev.dev);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0)
  FUNC_1(VAR_2->ddev.dev);

 return VAR_3;
}
