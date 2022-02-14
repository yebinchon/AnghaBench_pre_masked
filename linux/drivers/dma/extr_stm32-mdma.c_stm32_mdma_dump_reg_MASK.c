
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_mdma_device {int dummy; } ;
struct stm32_mdma_chan {int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct stm32_mdma_chan*) ;
 int FUNC_11 (int ,char*,int ) ;
 struct stm32_mdma_device* FUNC_12 (struct stm32_mdma_chan*) ;
 int FUNC_13 (struct stm32_mdma_device*,int ) ;

__attribute__((used)) static void FUNC_14(struct stm32_mdma_chan *VAR_0)
{
 struct stm32_mdma_device *VAR_1 = FUNC_12(VAR_0);

 FUNC_11(FUNC_10(VAR_0), "CCR:     0x%08x\n",
  FUNC_13(VAR_1, FUNC_2(VAR_0->id)));
 FUNC_11(FUNC_10(VAR_0), "CTCR:    0x%08x\n",
  FUNC_13(VAR_1, FUNC_9(VAR_0->id)));
 FUNC_11(FUNC_10(VAR_0), "CBNDTR:  0x%08x\n",
  FUNC_13(VAR_1, FUNC_0(VAR_0->id)));
 FUNC_11(FUNC_10(VAR_0), "CSAR:    0x%08x\n",
  FUNC_13(VAR_1, FUNC_7(VAR_0->id)));
 FUNC_11(FUNC_10(VAR_0), "CDAR:    0x%08x\n",
  FUNC_13(VAR_1, FUNC_3(VAR_0->id)));
 FUNC_11(FUNC_10(VAR_0), "CBRUR:   0x%08x\n",
  FUNC_13(VAR_1, FUNC_1(VAR_0->id)));
 FUNC_11(FUNC_10(VAR_0), "CLAR:    0x%08x\n",
  FUNC_13(VAR_1, FUNC_4(VAR_0->id)));
 FUNC_11(FUNC_10(VAR_0), "CTBR:    0x%08x\n",
  FUNC_13(VAR_1, FUNC_8(VAR_0->id)));
 FUNC_11(FUNC_10(VAR_0), "CMAR:    0x%08x\n",
  FUNC_13(VAR_1, FUNC_5(VAR_0->id)));
 FUNC_11(FUNC_10(VAR_0), "CMDR:    0x%08x\n",
  FUNC_13(VAR_1, FUNC_6(VAR_0->id)));
}
