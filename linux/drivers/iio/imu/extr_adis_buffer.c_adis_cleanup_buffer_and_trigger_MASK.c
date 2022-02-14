
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct adis {int xfer; int buffer; TYPE_1__* spi; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (struct adis*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct adis *VAR_0,
 struct iio_dev *VAR_1)
{
 if (VAR_0->spi->irq)
  FUNC_0(VAR_0);
 FUNC_2(VAR_0->buffer);
 FUNC_2(VAR_0->xfer);
 FUNC_1(VAR_1);
}
