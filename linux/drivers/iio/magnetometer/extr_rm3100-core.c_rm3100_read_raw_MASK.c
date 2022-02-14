
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rm3100_data {int scale; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct rm3100_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct rm3100_data*,int*,int*) ;
 int FUNC_4 (struct rm3100_data*,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
      const struct iio_chan_spec *VAR_3,
      int *VAR_4, int *VAR_5, long VAR_6)
{
 struct rm3100_data *VAR_7 = FUNC_2(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 130:
  VAR_8 = FUNC_0(VAR_2);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_4(VAR_7, VAR_3->scan_index, VAR_4);
  FUNC_1(VAR_2);

  return VAR_8;
 case 128:
  *VAR_4 = 0;
  *VAR_5 = VAR_7->scale;

  return VAR_1;
 case 129:
  return FUNC_3(VAR_7, VAR_4, VAR_5);
 default:
  return -VAR_0;
 }
}
