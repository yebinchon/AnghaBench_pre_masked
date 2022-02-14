
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel {int indio_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_channel*) ;

void FUNC_2(struct iio_channel *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->indio_dev);
 FUNC_1(VAR_0);
}
