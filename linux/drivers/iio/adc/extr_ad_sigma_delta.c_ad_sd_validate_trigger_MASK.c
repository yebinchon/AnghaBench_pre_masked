
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct ad_sigma_delta {struct iio_trigger* trig; } ;


 int VAR_0 ;
 struct ad_sigma_delta* FUNC_0 (struct iio_dev*) ;

int FUNC_1(struct iio_dev *VAR_1, struct iio_trigger *VAR_2)
{
 struct ad_sigma_delta *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->trig != VAR_2)
  return -VAR_0;

 return 0;
}
