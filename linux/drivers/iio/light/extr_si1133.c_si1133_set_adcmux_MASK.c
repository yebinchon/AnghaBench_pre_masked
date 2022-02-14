
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct si1133_data {size_t* adc_config; } ;


 int VAR_0 ;
 int FUNC_0 (struct si1133_data*,size_t,int ,int ,size_t) ;

__attribute__((used)) static int FUNC_1(struct si1133_data *VAR_1, u8 VAR_2, u8 VAR_3)
{
 if ((VAR_3 & VAR_1->adc_config[VAR_2]) == VAR_3)
  return 0;

 return FUNC_0(VAR_1, VAR_2, VAR_0, 0, VAR_3);
}
