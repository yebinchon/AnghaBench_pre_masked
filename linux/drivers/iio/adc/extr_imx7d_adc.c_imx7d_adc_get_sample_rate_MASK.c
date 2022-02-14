
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int core_time_unit; } ;
struct imx7d_adc {int pre_div_num; TYPE_1__ adc_feature; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct imx7d_adc *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3 = VAR_1->adc_feature.core_time_unit;
 u32 VAR_4;

 VAR_2 = VAR_0 / VAR_1->pre_div_num;
 VAR_4 = (VAR_3 + 1) * 6;

 return VAR_2 / VAR_4;
}
