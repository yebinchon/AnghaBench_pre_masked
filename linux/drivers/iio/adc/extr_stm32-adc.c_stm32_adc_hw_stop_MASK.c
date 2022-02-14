
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_adc {scalar_t__ clk; TYPE_1__* cfg; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* unprepare ) (struct stm32_adc*) ;} ;


 int FUNC_0 (scalar_t__) ;
 struct stm32_adc* FUNC_1 (struct device*) ;
 int FUNC_2 (struct stm32_adc*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct stm32_adc *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->cfg->unprepare)
  VAR_1->cfg->unprepare(VAR_1);

 if (VAR_1->clk)
  FUNC_0(VAR_1->clk);

 return 0;
}
