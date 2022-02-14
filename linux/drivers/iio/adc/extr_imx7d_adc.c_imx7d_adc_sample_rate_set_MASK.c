
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx7d_adc_feature {size_t clk_pre_div; int core_time_unit; } ;
struct imx7d_adc_analogue_core_clk {int reg_config; int pre_div; } ;
struct imx7d_adc {scalar_t__ regs; int pre_div_num; struct imx7d_adc_feature adc_feature; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct imx7d_adc_analogue_core_clk* VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct imx7d_adc *VAR_4)
{
 struct imx7d_adc_feature *VAR_5 = &VAR_4->adc_feature;
 struct imx7d_adc_analogue_core_clk VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9 = 0;





 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  VAR_8 =
   FUNC_0(VAR_4->regs + VAR_7 * VAR_0);
  VAR_8 &= ~VAR_1;
  FUNC_1(VAR_8,
         VAR_4->regs + VAR_7 * VAR_0);
 }

 VAR_6 = VAR_3[VAR_5->clk_pre_div];
 VAR_9 |= VAR_6.reg_config;
 VAR_4->pre_div_num = VAR_6.pre_div;

 VAR_9 |= VAR_5->core_time_unit;
 FUNC_1(VAR_9, VAR_4->regs + VAR_2);
}
