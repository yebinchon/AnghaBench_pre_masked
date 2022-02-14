
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct si1133_data {int* adc_sens; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct si1133_data*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct si1133_data *VAR_0, u8 VAR_1,
           int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_0->adc_sens[VAR_1] &= 0xF0;
 VAR_0->adc_sens[VAR_1] |= VAR_4;

 return FUNC_2(VAR_0, FUNC_0(0),
    VAR_0->adc_sens[VAR_1]);
}
