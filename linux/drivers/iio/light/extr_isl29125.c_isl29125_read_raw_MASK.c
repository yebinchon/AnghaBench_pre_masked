
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29125_data {int conf1; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct isl29125_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct isl29125_data*,int ) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_6,
      struct iio_chan_spec const *VAR_7,
      int *VAR_8, int *VAR_9, long VAR_10)
{
 struct isl29125_data *VAR_11 = FUNC_2(VAR_6);
 int VAR_12;

 switch (VAR_10) {
 case 129:
  VAR_12 = FUNC_0(VAR_6);
  if (VAR_12)
   return VAR_12;
  VAR_12 = FUNC_3(VAR_11, VAR_7->scan_index);
  FUNC_1(VAR_6);
  if (VAR_12 < 0)
   return VAR_12;
  *VAR_8 = VAR_12;
  return VAR_1;
 case 128:
  *VAR_8 = 0;
  if (VAR_11->conf1 & VAR_3)
   *VAR_9 = VAR_5;
  else
   *VAR_9 = VAR_4;
  return VAR_2;
 }
 return -VAR_0;
}
