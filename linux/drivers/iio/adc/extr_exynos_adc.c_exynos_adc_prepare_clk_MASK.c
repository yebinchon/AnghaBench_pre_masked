
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_adc {int dev; int clk; int sclk; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ needs_sclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct exynos_adc *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed preparing adc clock: %d\n", VAR_1);
  return VAR_1;
 }

 if (VAR_0->data->needs_sclk) {
  VAR_1 = FUNC_0(VAR_0->sclk);
  if (VAR_1) {
   FUNC_1(VAR_0->clk);
   FUNC_2(VAR_0->dev,
    "failed preparing sclk_adc clock: %d\n", VAR_1);
   return VAR_1;
  }
 }

 return 0;
}
