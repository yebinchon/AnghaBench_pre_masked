
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int core_time_unit; int avg_num; int clk_pre_div; } ;
struct imx7d_adc {TYPE_1__ adc_feature; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct imx7d_adc *VAR_2)
{
 VAR_2->adc_feature.clk_pre_div = VAR_0;
 VAR_2->adc_feature.avg_num = VAR_1;
 VAR_2->adc_feature.core_time_unit = 1;
}
