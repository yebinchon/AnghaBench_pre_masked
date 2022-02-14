
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vadc_prescale_ratio {int dummy; } ;
struct adc5_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct vadc_prescale_ratio const*,struct adc5_data const*,int ) ;

__attribute__((used)) static int FUNC_1(
    const struct vadc_prescale_ratio *VAR_2,
    const struct adc5_data *VAR_3,
    u16 VAR_4, int *VAR_5)
{
 *VAR_5 = FUNC_0(VAR_4 * 100,
    VAR_2, VAR_3, VAR_1);
 *VAR_5 = VAR_0 - *VAR_5;

 return 0;
}
