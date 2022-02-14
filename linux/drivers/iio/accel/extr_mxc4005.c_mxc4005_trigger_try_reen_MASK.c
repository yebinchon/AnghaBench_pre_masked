
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxc4005_data {int dready_trig; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 struct mxc4005_data* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (struct iio_trigger*) ;
 int FUNC_2 (struct mxc4005_data*) ;

__attribute__((used)) static int FUNC_3(struct iio_trigger *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);
 struct mxc4005_data *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2->dready_trig)
  return 0;

 return FUNC_2(VAR_2);
}
