
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct dps310_data {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct dps310_data*,int) ;
 int FUNC_1 (struct dps310_data*,int) ;
 int FUNC_2 (struct dps310_data*,int) ;
 int FUNC_3 (struct dps310_data*,int) ;
 struct dps310_data* FUNC_4 (struct iio_dev*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_2,
       struct iio_chan_spec const *VAR_3, int VAR_4,
       int VAR_5, long VAR_6)
{
 int VAR_7;
 struct dps310_data *VAR_8 = FUNC_4(VAR_2);

 if (FUNC_5(&VAR_8->lock))
  return -VAR_0;

 switch (VAR_6) {
 case 130:
  switch (VAR_3->type) {
  case 129:
   VAR_7 = FUNC_1(VAR_8, VAR_4);
   break;

  case 128:
   VAR_7 = FUNC_3(VAR_8, VAR_4);
   break;

  default:
   VAR_7 = -VAR_1;
   break;
  }
  break;

 case 131:
  switch (VAR_3->type) {
  case 129:
   VAR_7 = FUNC_0(VAR_8, VAR_4);
   break;

  case 128:
   VAR_7 = FUNC_2(VAR_8, VAR_4);
   break;

  default:
   VAR_7 = -VAR_1;
   break;
  }
  break;

 default:
  VAR_7 = -VAR_1;
  break;
 }

 FUNC_6(&VAR_8->lock);
 return VAR_7;
}
