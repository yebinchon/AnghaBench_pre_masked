
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_adc_data {int dummy; } ;


 int FUNC_0 (struct sc27xx_adc_data*,int,int,int) ;
 int FUNC_1 (struct sc27xx_adc_data*,int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct sc27xx_adc_data *VAR_0,
         int VAR_1, int VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_5);
 if (VAR_4)
  return VAR_4;

 *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5);
 return 0;
}
