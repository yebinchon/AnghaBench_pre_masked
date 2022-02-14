
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vadc_prescale_ratio {int dummy; } ;
struct adc5_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int*) ;
 int FUNC_2 (int ,struct vadc_prescale_ratio const*,struct adc5_data const*,int) ;

__attribute__((used)) static int FUNC_3(
    const struct vadc_prescale_ratio *VAR_1,
    const struct adc5_data *VAR_2,
    u16 VAR_3, int *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3,
    VAR_1, VAR_2, 1000);


 return FUNC_1(VAR_0,
     FUNC_0(VAR_0),
     VAR_5, VAR_4);
}
