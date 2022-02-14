
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltr501_data {int als_contr; int ps_contr; int ps_period; int als_period; int lock_als; int regmap; struct ltr501_chip_info* chip_info; } ;
struct ltr501_chip_info {int als_gain_mask; int als_gain_shift; int ps_gain_tbl_size; int ps_gain; int als_gain_tbl_size; int als_gain; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct ltr501_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct ltr501_data*,int*,int*) ;
 int FUNC_4 (struct ltr501_data*,int,int) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (struct ltr501_data*,int*,int*) ;
 int FUNC_7 (struct ltr501_data*,int,int) ;
 int FUNC_8 (struct ltr501_data*,int) ;
 int FUNC_9 (struct ltr501_data*,int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int) ;

__attribute__((used)) static int FUNC_13(struct iio_dev *VAR_5,
       struct iio_chan_spec const *VAR_6,
       int VAR_7, int VAR_8, long VAR_9)
{
 struct ltr501_data *VAR_10 = FUNC_2(VAR_5);
 int VAR_11, VAR_12, VAR_13, VAR_14;
 struct ltr501_chip_info *VAR_15 = VAR_10->chip_info;

 VAR_12 = FUNC_0(VAR_5);
 if (VAR_12)
  return VAR_12;

 switch (VAR_9) {
 case 130:
  switch (VAR_6->type) {
  case 129:
   VAR_11 = FUNC_5(VAR_15->als_gain,
        VAR_15->als_gain_tbl_size,
        VAR_7, VAR_8);
   if (VAR_11 < 0) {
    VAR_12 = -VAR_0;
    break;
   }

   VAR_10->als_contr &= ~VAR_15->als_gain_mask;
   VAR_10->als_contr |= VAR_11 << VAR_15->als_gain_shift;

   VAR_12 = FUNC_12(VAR_10->regmap, VAR_1,
        VAR_10->als_contr);
   break;
  case 128:
   VAR_11 = FUNC_5(VAR_15->ps_gain,
        VAR_15->ps_gain_tbl_size,
        VAR_7, VAR_8);
   if (VAR_11 < 0) {
    VAR_12 = -VAR_0;
    break;
   }
   VAR_10->ps_contr &= ~VAR_2;
   VAR_10->ps_contr |= VAR_11 << VAR_3;

   VAR_12 = FUNC_12(VAR_10->regmap, VAR_4,
        VAR_10->ps_contr);
   break;
  default:
   VAR_12 = -VAR_0;
   break;
  }
  break;

 case 132:
  switch (VAR_6->type) {
  case 129:
   if (VAR_7 != 0) {
    VAR_12 = -VAR_0;
    break;
   }
   FUNC_10(&VAR_10->lock_als);
   VAR_12 = FUNC_8(VAR_10, VAR_8);
   FUNC_11(&VAR_10->lock_als);
   break;
  default:
   VAR_12 = -VAR_0;
   break;
  }
  break;

 case 131:
  switch (VAR_6->type) {
  case 129:
   VAR_12 = FUNC_3(VAR_10, &VAR_13,
       &VAR_14);
   if (VAR_12 < 0)
    break;

   VAR_12 = FUNC_4(VAR_10, VAR_7, VAR_8);
   if (VAR_12 < 0)
    break;


   VAR_12 = FUNC_9(VAR_10, VAR_6->type,
           0, VAR_10->als_period);

   if (VAR_12 < 0)
    VAR_12 = FUNC_4(VAR_10, VAR_13,
         VAR_14);
   break;
  case 128:
   VAR_12 = FUNC_6(VAR_10, &VAR_13,
             &VAR_14);
   if (VAR_12 < 0)
    break;

   VAR_12 = FUNC_7(VAR_10, VAR_7, VAR_8);
   if (VAR_12 < 0)
    break;


   VAR_12 = FUNC_9(VAR_10, VAR_6->type,
           0, VAR_10->ps_period);

   if (VAR_12 < 0)
    VAR_12 = FUNC_7(VAR_10, VAR_13,
        VAR_14);
   break;
  default:
   VAR_12 = -VAR_0;
   break;
  }
  break;

 default:
  VAR_12 = -VAR_0;
  break;
 }

 FUNC_1(VAR_5);
 return VAR_12;
}
