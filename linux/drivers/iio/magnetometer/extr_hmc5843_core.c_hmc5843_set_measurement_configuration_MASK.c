
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct hmc5843_data {int dummy; } ;


 int FUNC_0 (struct hmc5843_data*,unsigned int) ;
 struct hmc5843_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static
int FUNC_2(struct iio_dev *VAR_0,
       const struct iio_chan_spec *VAR_1,
       unsigned int VAR_2)
{
 struct hmc5843_data *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_2);
}
