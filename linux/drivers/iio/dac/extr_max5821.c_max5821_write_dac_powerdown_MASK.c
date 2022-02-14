
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max5821_data {int* powerdown; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
typedef int ssize_t ;


 struct max5821_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct max5821_data*,struct iio_chan_spec const*) ;
 int FUNC_2 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct iio_dev *VAR_0,
        uintptr_t VAR_1,
        const struct iio_chan_spec *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct max5821_data *VAR_5 = FUNC_0(VAR_0);
 bool VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_5->powerdown[VAR_2->channel] = VAR_6;

 VAR_7 = FUNC_1(VAR_5, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 return VAR_4;
}
