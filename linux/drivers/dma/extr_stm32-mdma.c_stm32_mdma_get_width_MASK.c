
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_mdma_chan {int dummy; } ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;






 int VAR_0 ;
 int FUNC_0 (struct stm32_mdma_chan*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct stm32_mdma_chan *VAR_1,
    enum dma_slave_buswidth VAR_2)
{
 switch (VAR_2) {
 case 131:
 case 130:
 case 129:
 case 128:
  return FUNC_2(VAR_2) - 1;
 default:
  FUNC_1(FUNC_0(VAR_1), "Dma bus width %i not supported\n",
   VAR_2);
  return -VAR_0;
 }
}
