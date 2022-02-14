
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_trigger {int dummy; } ;
struct ad7766 {TYPE_1__* spi; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ad7766* FUNC_2 (struct iio_trigger*) ;

__attribute__((used)) static int FUNC_3(struct iio_trigger *VAR_0, bool VAR_1)
{
 struct ad7766 *VAR_2 = FUNC_2(VAR_0);

 if (VAR_1)
  FUNC_1(VAR_2->spi->irq);
 else
  FUNC_0(VAR_2->spi->irq);

 return 0;
}
