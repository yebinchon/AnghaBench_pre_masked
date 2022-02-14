
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 struct iio_dev* FUNC_0 (struct iio_trigger*) ;
 int FUNC_1 (struct iio_dev*,int) ;

int FUNC_2(struct iio_trigger *VAR_0, bool VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, VAR_1);
}
