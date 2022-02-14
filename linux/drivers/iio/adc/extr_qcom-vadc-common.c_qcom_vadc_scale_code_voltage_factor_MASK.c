
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vadc_prescale_ratio {int den; unsigned int num; } ;
struct adc5_data {int full_scale_code_volt; } ;
typedef int s64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(u16 VAR_1,
    const struct vadc_prescale_ratio *VAR_2,
    const struct adc5_data *VAR_3,
    unsigned int VAR_4)
{
 s64 VAR_5, VAR_6, VAR_7 = 1875;







 if (VAR_1 > VAR_0)
  VAR_1 = 0;


 VAR_5 = (s64) VAR_1 * VAR_7 * 1000;
 VAR_5 = FUNC_0(VAR_5, VAR_3->full_scale_code_volt);
 if (VAR_5 > 0) {
  VAR_5 *= VAR_2->den;
  VAR_6 = VAR_2->num * VAR_4;
  VAR_5 = FUNC_0(VAR_5, VAR_6);
 } else {
  VAR_5 = 0;
 }

 return (int) VAR_5;
}
