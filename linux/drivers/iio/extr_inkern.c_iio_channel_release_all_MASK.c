
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel {scalar_t__ indio_dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct iio_channel*) ;

void FUNC_2(struct iio_channel *VAR_0)
{
 struct iio_channel *VAR_1 = &VAR_0[0];

 while (VAR_1->indio_dev) {
  FUNC_0(VAR_1->indio_dev);
  VAR_1++;
 }
 FUNC_1(VAR_0);
}
