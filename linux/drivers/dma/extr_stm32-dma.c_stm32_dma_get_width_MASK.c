
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dma_chan {int dummy; } ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct stm32_dma_chan*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct stm32_dma_chan *VAR_4,
          enum dma_slave_buswidth VAR_5)
{
 switch (VAR_5) {
 case 130:
  return VAR_1;
 case 129:
  return VAR_2;
 case 128:
  return VAR_3;
 default:
  FUNC_1(FUNC_0(VAR_4), "Dma bus width not supported\n");
  return -VAR_0;
 }
}
