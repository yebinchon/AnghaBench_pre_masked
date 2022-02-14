
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max517_data {int* vref_mv; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;


 int VAR_0 ;

 int VAR_1 ;
 struct max517_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int *VAR_4,
      int *VAR_5,
      long VAR_6)
{
 struct max517_data *VAR_7 = FUNC_0(VAR_2);

 switch (VAR_6) {
 case 128:

  *VAR_4 = VAR_7->vref_mv[VAR_3->channel];
  *VAR_5 = 8;
  return VAR_1;
 default:
  break;
 }
 return -VAR_0;
}
