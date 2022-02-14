
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max5487_data {int kohms; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct max5487_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5,
       int *VAR_6, int *VAR_7, long VAR_8)
{
 struct max5487_data *VAR_9 = FUNC_0(VAR_4);

 if (VAR_8 != VAR_1)
  return -VAR_0;

 *VAR_6 = 1000 * VAR_9->kohms;
 *VAR_7 = VAR_3;

 return VAR_2;
}
