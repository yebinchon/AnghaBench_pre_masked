
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_adc_priv {int vdda_uv; int vdd_uv; scalar_t__ booster; scalar_t__ vdd; scalar_t__ syscfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct stm32_adc_priv *VAR_2)
{
 if (VAR_2->vdda_uv < 2700000) {
  if (VAR_2->syscfg && VAR_2->vdd_uv > 2700000) {
   FUNC_0(VAR_2->syscfg, VAR_1,
         VAR_0);
   FUNC_1(VAR_2->vdd);
   return;
  }
  if (VAR_2->booster)
   FUNC_1(VAR_2->booster);
 }
}
