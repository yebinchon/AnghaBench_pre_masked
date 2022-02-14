
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max5432_data {int ohm; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct max5432_data* FUNC_0 (struct iio_dev*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_6,
   struct iio_chan_spec const *VAR_7,
   int *VAR_8, int *VAR_9, long VAR_10)
{
 struct max5432_data *VAR_11 = FUNC_0(VAR_6);

 if (VAR_10 != VAR_2)
  return -VAR_0;

 if (FUNC_1(VAR_11->ohm > VAR_4))
  return -VAR_1;

 *VAR_8 = VAR_11->ohm;
 *VAR_9 = VAR_5;

 return VAR_3;
}
