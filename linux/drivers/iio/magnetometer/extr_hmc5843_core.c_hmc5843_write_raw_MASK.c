
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct hmc5843_data {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct hmc5843_data*,int,int) ;
 int FUNC_1 (struct hmc5843_data*,int,int) ;
 int FUNC_2 (struct hmc5843_data*,int) ;
 int FUNC_3 (struct hmc5843_data*,int) ;
 struct hmc5843_data* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
        struct iio_chan_spec const *VAR_2,
        int VAR_3, int VAR_4, long VAR_5)
{
 struct hmc5843_data *VAR_6 = FUNC_4(VAR_1);
 int VAR_7, VAR_8;

 switch (VAR_5) {
 case 129:
  VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4);
  if (VAR_7 < 0)
   return -VAR_0;

  return FUNC_3(VAR_6, VAR_7);
 case 128:
  VAR_8 = FUNC_1(VAR_6, VAR_3, VAR_4);
  if (VAR_8 < 0)
   return -VAR_0;

  return FUNC_2(VAR_6, VAR_8);
 default:
  return -VAR_0;
 }
}
