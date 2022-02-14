
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dps310_data {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dps310_data*) ;
 int FUNC_1 (struct dps310_data*) ;
 int FUNC_2 (struct dps310_data*) ;
 int FUNC_3 (struct dps310_data*) ;

__attribute__((used)) static int FUNC_4(struct dps310_data *VAR_3, int *VAR_4, int *VAR_5,
    long VAR_6)
{
 int VAR_7;

 switch (VAR_6) {
 case 128:
  VAR_7 = FUNC_2(VAR_3);
  if (VAR_7 < 0)
   return VAR_7;

  *VAR_4 = VAR_7;
  return VAR_2;

 case 129:
  VAR_7 = FUNC_3(VAR_3);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_0(VAR_3);
  if (VAR_7 < 0)
   return VAR_7;

  *VAR_4 = VAR_7;
  *VAR_5 = 1000;
  return VAR_1;

 case 130:
  VAR_7 = FUNC_1(VAR_3);
  if (VAR_7 < 0)
   return VAR_7;

  *VAR_4 = VAR_7;
  return VAR_2;

 default:
  return -VAR_0;
 }
}
