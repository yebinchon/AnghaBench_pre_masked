
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct si1133_data {size_t* adc_sens; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (struct si1133_data*,int ,size_t) ;

__attribute__((used)) static int FUNC_2(struct si1133_data *VAR_0, u8 VAR_1,
       u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, FUNC_0(VAR_1), VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_0->adc_sens[VAR_1] = VAR_2;

 return 0;
}
