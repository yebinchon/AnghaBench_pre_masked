
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm {int dummy; } ;
struct dfsdm_priv {int clk; int aclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct dfsdm_priv* FUNC_2 (struct stm32_dfsdm*) ;

__attribute__((used)) static int FUNC_3(struct stm32_dfsdm *VAR_0)
{
 struct dfsdm_priv *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk);
 if (VAR_2 || !VAR_1->aclk)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1->aclk);
 if (VAR_2)
  FUNC_0(VAR_1->clk);

 return VAR_2;
}
