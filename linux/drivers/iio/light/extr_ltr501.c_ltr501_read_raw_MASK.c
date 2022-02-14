
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ltr501_data {int als_contr; int ps_contr; TYPE_3__* chip_info; int lock_ps; int lock_als; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int address; } ;
typedef int __le16 ;
struct TYPE_6__ {int als_gain_mask; int als_gain_shift; TYPE_2__* ps_gain; TYPE_1__* als_gain; } ;
struct TYPE_5__ {int scale; int uscale; } ;
struct TYPE_4__ {int scale; int uscale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct ltr501_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ltr501_data*,int*,int*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct ltr501_data*,int*,int*) ;
 int FUNC_7 (struct ltr501_data*,int *) ;
 int FUNC_8 (struct ltr501_data*,int*,int*) ;
 int FUNC_9 (struct ltr501_data*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct iio_dev *VAR_7,
      struct iio_chan_spec const *VAR_8,
      int *VAR_9, int *VAR_10, long VAR_11)
{
 struct ltr501_data *VAR_12 = FUNC_2(VAR_7);
 __le16 VAR_13[2];
 int VAR_14, VAR_15;

 switch (VAR_11) {
 case 134:
  switch (VAR_8->type) {
  case 129:
   VAR_14 = FUNC_0(VAR_7);
   if (VAR_14)
    return VAR_14;

   FUNC_10(&VAR_12->lock_als);
   VAR_14 = FUNC_7(VAR_12, VAR_13);
   FUNC_11(&VAR_12->lock_als);
   FUNC_1(VAR_7);
   if (VAR_14 < 0)
    return VAR_14;
   *VAR_9 = FUNC_5(FUNC_3(VAR_13[1]),
          FUNC_3(VAR_13[0]));
   return VAR_1;
  default:
   return -VAR_0;
  }
 case 133:
  VAR_14 = FUNC_0(VAR_7);
  if (VAR_14)
   return VAR_14;

  switch (VAR_8->type) {
  case 130:
   FUNC_10(&VAR_12->lock_als);
   VAR_14 = FUNC_7(VAR_12, VAR_13);
   FUNC_11(&VAR_12->lock_als);
   if (VAR_14 < 0)
    break;
   *VAR_9 = FUNC_3(VAR_8->address == VAR_3 ?
        VAR_13[0] : VAR_13[1]);
   VAR_14 = VAR_1;
   break;
  case 128:
   FUNC_10(&VAR_12->lock_ps);
   VAR_14 = FUNC_9(VAR_12);
   FUNC_11(&VAR_12->lock_ps);
   if (VAR_14 < 0)
    break;
   *VAR_9 = VAR_14 & VAR_6;
   VAR_14 = VAR_1;
   break;
  default:
   VAR_14 = -VAR_0;
   break;
  }

  FUNC_1(VAR_7);
  return VAR_14;

 case 131:
  switch (VAR_8->type) {
  case 130:
   VAR_15 = (VAR_12->als_contr & VAR_12->chip_info->als_gain_mask)
        >> VAR_12->chip_info->als_gain_shift;
   *VAR_9 = VAR_12->chip_info->als_gain[VAR_15].scale;
   *VAR_10 = VAR_12->chip_info->als_gain[VAR_15].uscale;
   return VAR_2;
  case 128:
   VAR_15 = (VAR_12->ps_contr & VAR_4) >>
    VAR_5;
   *VAR_9 = VAR_12->chip_info->ps_gain[VAR_15].scale;
   *VAR_10 = VAR_12->chip_info->ps_gain[VAR_15].uscale;
   return VAR_2;
  default:
   return -VAR_0;
  }
 case 135:
  switch (VAR_8->type) {
  case 130:
   return FUNC_8(VAR_12, VAR_9, VAR_10);
  default:
   return -VAR_0;
  }
 case 132:
  switch (VAR_8->type) {
  case 130:
   return FUNC_4(VAR_12, VAR_9, VAR_10);
  case 128:
   return FUNC_6(VAR_12, VAR_9, VAR_10);
  default:
   return -VAR_0;
  }
 }
 return -VAR_0;
}
