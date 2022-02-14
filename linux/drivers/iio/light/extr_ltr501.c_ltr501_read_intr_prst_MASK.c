
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltr501_data {int reg_ps_prst; int reg_als_prst; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct ltr501_data*,int*) ;
 int FUNC_1 (struct ltr501_data*,int*) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int FUNC_3(struct ltr501_data *VAR_2,
     enum iio_chan_type VAR_3,
     int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 switch (VAR_3) {
 case 129:
  VAR_5 = FUNC_2(VAR_2->reg_als_prst, &VAR_7);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_2, &VAR_6);

  if (VAR_5 < 0)
   return VAR_5;
  *VAR_4 = VAR_6 * VAR_7;
  return VAR_1;
 case 128:
  VAR_5 = FUNC_2(VAR_2->reg_ps_prst, &VAR_7);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_1(VAR_2, &VAR_6);

  if (VAR_5 < 0)
   return VAR_5;

  *VAR_4 = VAR_6 * VAR_7;
  return VAR_1;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
