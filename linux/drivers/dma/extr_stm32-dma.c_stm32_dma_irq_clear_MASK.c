
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_dma_device {int dummy; } ;
struct stm32_dma_chan {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct stm32_dma_device* FUNC_0 (struct stm32_dma_chan*) ;
 int FUNC_1 (struct stm32_dma_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct stm32_dma_chan *VAR_3, u32 VAR_4)
{
 struct stm32_dma_device *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;
 VAR_4 &= VAR_2;
 VAR_6 = VAR_4 << (((VAR_3->id & 2) << 3) | ((VAR_3->id & 1) * 6));

 if (VAR_3->id & 4)
  FUNC_1(VAR_5, VAR_0, VAR_6);
 else
  FUNC_1(VAR_5, VAR_1, VAR_6);
}
