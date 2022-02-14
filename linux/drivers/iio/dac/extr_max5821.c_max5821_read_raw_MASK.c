
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max5821_data {int vref_mv; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;


 int VAR_1 ;
 struct max5821_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int *VAR_4, int *VAR_5, long VAR_6)
{
 struct max5821_data *VAR_7 = FUNC_0(VAR_2);

 switch (VAR_6) {
 case 129:
  return FUNC_1(VAR_2, VAR_4, VAR_3->channel);
 case 128:
  *VAR_4 = VAR_7->vref_mv;
  *VAR_5 = 10;
  return VAR_1;
 default:
  return -VAR_0;
 }
}
