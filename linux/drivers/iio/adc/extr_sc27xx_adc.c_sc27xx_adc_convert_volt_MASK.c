
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sc27xx_adc_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct sc27xx_adc_data*,int,int,int*,int*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct sc27xx_adc_data *VAR_2, int VAR_3,
       int VAR_4, int VAR_5)
{
 u32 VAR_6, VAR_7;
 u32 VAR_8;
 switch (VAR_3) {
 case 5:
  return FUNC_0(&VAR_0, VAR_5);

 case 1:
  return FUNC_0(&VAR_1, VAR_5);

 default:
  VAR_8 = FUNC_0(&VAR_1, VAR_5);
  break;
 }

 FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6, &VAR_7);

 return (VAR_8 * VAR_7 + VAR_6 / 2) / VAR_6;
}
