
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm {int dummy; } ;
struct dfsdm_priv {scalar_t__ clk; scalar_t__ aclk; } ;


 int FUNC_0 (scalar_t__) ;
 struct dfsdm_priv* FUNC_1 (struct stm32_dfsdm*) ;

__attribute__((used)) static void FUNC_2(struct stm32_dfsdm *VAR_0)
{
 struct dfsdm_priv *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->aclk)
  FUNC_0(VAR_1->aclk);
 FUNC_0(VAR_1->clk);
}
