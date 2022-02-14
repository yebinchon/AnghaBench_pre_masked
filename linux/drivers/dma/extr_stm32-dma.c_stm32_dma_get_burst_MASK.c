
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct stm32_dma_chan*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct stm32_dma_chan *VAR_5, u32 VAR_6)
{
 switch (VAR_6) {
 case 0:
 case 1:
  return VAR_4;
 case 4:
  return VAR_2;
 case 8:
  return VAR_3;
 case 16:
  return VAR_1;
 default:
  FUNC_1(FUNC_0(VAR_5), "Dma burst size not supported\n");
  return -VAR_0;
 }
}
