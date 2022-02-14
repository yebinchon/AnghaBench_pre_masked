
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_dma_device {int dummy; } ;
struct stm32_dma_chan {int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct stm32_dma_chan*) ;
 int FUNC_7 (int ,char*,int ) ;
 struct stm32_dma_device* FUNC_8 (struct stm32_dma_chan*) ;
 int FUNC_9 (struct stm32_dma_device*,int ) ;

__attribute__((used)) static void FUNC_10(struct stm32_dma_chan *VAR_0)
{
 struct stm32_dma_device *VAR_1 = FUNC_8(VAR_0);
 u32 VAR_2 = FUNC_9(VAR_1, FUNC_0(VAR_0->id));
 u32 VAR_3 = FUNC_9(VAR_1, FUNC_4(VAR_0->id));
 u32 VAR_4 = FUNC_9(VAR_1, FUNC_5(VAR_0->id));
 u32 VAR_5 = FUNC_9(VAR_1, FUNC_2(VAR_0->id));
 u32 VAR_6 = FUNC_9(VAR_1, FUNC_3(VAR_0->id));
 u32 VAR_7 = FUNC_9(VAR_1, FUNC_1(VAR_0->id));

 FUNC_7(FUNC_6(VAR_0), "SCR:   0x%08x\n", VAR_2);
 FUNC_7(FUNC_6(VAR_0), "NDTR:  0x%08x\n", VAR_3);
 FUNC_7(FUNC_6(VAR_0), "SPAR:  0x%08x\n", VAR_4);
 FUNC_7(FUNC_6(VAR_0), "SM0AR: 0x%08x\n", VAR_5);
 FUNC_7(FUNC_6(VAR_0), "SM1AR: 0x%08x\n", VAR_6);
 FUNC_7(FUNC_6(VAR_0), "SFCR:  0x%08x\n", VAR_7);
}
