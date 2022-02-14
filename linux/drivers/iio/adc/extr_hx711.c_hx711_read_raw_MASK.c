
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct hx711_data {int lock; int gain_set; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hx711_data*,int ) ;
 struct hx711_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
    const struct iio_chan_spec *VAR_4,
    int *VAR_5, int *VAR_6, long VAR_7)
{
 struct hx711_data *VAR_8 = FUNC_2(VAR_3);

 switch (VAR_7) {
 case 129:
  FUNC_3(&VAR_8->lock);

  *VAR_5 = FUNC_1(VAR_8, VAR_4->channel);

  FUNC_4(&VAR_8->lock);

  if (*VAR_5 < 0)
   return *VAR_5;
  return VAR_1;
 case 128:
  *VAR_5 = 0;
  FUNC_3(&VAR_8->lock);

  *VAR_6 = FUNC_0(VAR_8->gain_set);

  FUNC_4(&VAR_8->lock);

  return VAR_2;
 default:
  return -VAR_0;
 }
}
