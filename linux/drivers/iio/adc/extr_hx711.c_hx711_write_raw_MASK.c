
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct hx711_data {int gain_set; int gain_chan_a; int lock; } ;


 int VAR_0 ;

 int FUNC_0 (int) ;
 int FUNC_1 (struct hx711_data*) ;
 struct hx711_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
    struct iio_chan_spec const *VAR_2,
    int VAR_3,
    int VAR_4,
    long VAR_5)
{
 struct hx711_data *VAR_6 = FUNC_2(VAR_1);
 int VAR_7;
 int VAR_8;

 switch (VAR_5) {
 case 128:




  if (VAR_3 != 0)
   return -VAR_0;

  FUNC_3(&VAR_6->lock);

  VAR_8 = FUNC_0(VAR_4);
  if (VAR_8 < 0) {
   FUNC_4(&VAR_6->lock);
   return VAR_8;
  }

  if (VAR_8 != VAR_6->gain_set) {
   VAR_6->gain_set = VAR_8;
   if (VAR_8 != 32)
    VAR_6->gain_chan_a = VAR_8;

   VAR_7 = FUNC_1(VAR_6);
   if (VAR_7 < 0) {
    FUNC_4(&VAR_6->lock);
    return VAR_7;
   }
  }

  FUNC_4(&VAR_6->lock);
  return 0;
 default:
  return -VAR_0;
 }

 return 0;
}
