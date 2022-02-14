
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_adc {int clk; int sclk; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ needs_sclk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct exynos_adc *VAR_0)
{
 if (VAR_0->data->needs_sclk)
  FUNC_0(VAR_0->sclk);
 FUNC_0(VAR_0->clk);
}
