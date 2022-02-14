
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dps310_data {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct dps310_data*) ;
 int FUNC_1 (struct dps310_data*) ;
 int FUNC_2 (struct dps310_data*) ;
 int FUNC_3 (struct dps310_data*) ;

__attribute__((used)) static int FUNC_4(struct dps310_data *VAR_2, int *VAR_3, int *VAR_4,
       long VAR_5)
{
 int VAR_6;

 switch (VAR_5) {
 case 128:
  VAR_6 = FUNC_2(VAR_2);
  if (VAR_6 < 0)
   return VAR_6;

  *VAR_3 = VAR_6;
  return VAR_1;

 case 129:
  VAR_6 = FUNC_3(VAR_2);
  if (VAR_6)
   return VAR_6;

  VAR_6 = FUNC_0(VAR_2);
  if (VAR_6 < 0)
   return VAR_6;

  *VAR_3 = VAR_6;
  return VAR_1;

 case 130:
  VAR_6 = FUNC_1(VAR_2);
  if (VAR_6 < 0)
   return VAR_6;

  *VAR_3 = VAR_6;
  return VAR_1;

 default:
  return -VAR_0;
 }
}
