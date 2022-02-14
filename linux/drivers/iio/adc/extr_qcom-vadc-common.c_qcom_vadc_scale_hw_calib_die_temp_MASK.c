
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vadc_prescale_ratio {int dummy; } ;
struct adc5_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct vadc_prescale_ratio const*,struct adc5_data const*,int) ;

__attribute__((used)) static int FUNC_1(
    const struct vadc_prescale_ratio *VAR_1,
    const struct adc5_data *VAR_2,
    u16 VAR_3, int *VAR_4)
{
 *VAR_4 = FUNC_0(VAR_3,
    VAR_1, VAR_2, 2);
 *VAR_4 -= VAR_0;

 return 0;
}
