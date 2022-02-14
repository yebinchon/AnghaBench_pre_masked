
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct bma180_data {int mutex; } ;


 int FUNC_0 (struct bma180_data*,unsigned int) ;
 struct bma180_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_0,
  const struct iio_chan_spec *VAR_1, unsigned int VAR_2)
{
 struct bma180_data *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 FUNC_2(&VAR_3->mutex);
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 FUNC_3(&VAR_3->mutex);

 return VAR_4;
}
