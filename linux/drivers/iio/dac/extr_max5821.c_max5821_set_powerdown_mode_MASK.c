
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max5821_data {unsigned int* powerdown_mode; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;


 struct max5821_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_0,
          const struct iio_chan_spec *VAR_1,
          unsigned int VAR_2)
{
 struct max5821_data *VAR_3 = FUNC_0(VAR_0);

 VAR_3->powerdown_mode[VAR_1->channel] = VAR_2;

 return 0;
}
