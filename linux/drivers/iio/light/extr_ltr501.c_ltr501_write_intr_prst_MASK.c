
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltr501_data {unsigned long als_period; unsigned long ps_period; int lock_ps; int reg_ps_prst; int lock_als; int reg_als_prst; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;


 int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;


 int FUNC_1 (struct ltr501_data*,int*) ;
 int FUNC_2 (struct ltr501_data*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct ltr501_data *VAR_1,
      enum iio_chan_type VAR_2,
      int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8;

 if (VAR_3 < 0 || VAR_4 < 0)
  return -VAR_0;


 VAR_8 = ((VAR_3 * 1000000) + VAR_4);

 switch (VAR_2) {
 case 129:
  VAR_5 = FUNC_1(VAR_1, &VAR_6);
  if (VAR_5 < 0)
   return VAR_5;


  if (VAR_8 < VAR_6)
   return -VAR_0;

  VAR_7 = FUNC_0(VAR_8, VAR_6);
  if (VAR_7 < 0 || VAR_7 > 0x0f)
   return -VAR_0;

  FUNC_3(&VAR_1->lock_als);
  VAR_5 = FUNC_5(VAR_1->reg_als_prst, VAR_7);
  FUNC_4(&VAR_1->lock_als);
  if (VAR_5 >= 0)
   VAR_1->als_period = VAR_8;

  return VAR_5;
 case 128:
  VAR_5 = FUNC_2(VAR_1, &VAR_6);
  if (VAR_5 < 0)
   return VAR_5;


  if (VAR_8 < VAR_6)
   return -VAR_0;

  VAR_7 = FUNC_0(VAR_8, VAR_6);
  if (VAR_7 < 0 || VAR_7 > 0x0f)
   return -VAR_0;

  FUNC_3(&VAR_1->lock_ps);
  VAR_5 = FUNC_5(VAR_1->reg_ps_prst, VAR_7);
  FUNC_4(&VAR_1->lock_ps);
  if (VAR_5 >= 0)
   VAR_1->ps_period = VAR_8;

  return VAR_5;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
