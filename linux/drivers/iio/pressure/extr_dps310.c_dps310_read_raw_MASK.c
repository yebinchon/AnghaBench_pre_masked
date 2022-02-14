
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct dps310_data {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct dps310_data*,int*,int*,long) ;
 int FUNC_1 (struct dps310_data*,int*,int*,long) ;
 struct dps310_data* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
      struct iio_chan_spec const *VAR_2,
      int *VAR_3, int *VAR_4, long VAR_5)
{
 struct dps310_data *VAR_6 = FUNC_2(VAR_1);

 switch (VAR_2->type) {
 case 129:
  return FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5);

 case 128:
  return FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5);

 default:
  return -VAR_0;
 }
}
