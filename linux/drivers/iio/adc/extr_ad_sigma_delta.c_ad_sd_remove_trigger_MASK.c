
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct ad_sigma_delta {int trig; TYPE_1__* spi; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ,struct ad_sigma_delta*) ;
 struct ad_sigma_delta* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct iio_dev *VAR_0)
{
 struct ad_sigma_delta *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1->trig);
 FUNC_0(VAR_1->spi->irq, VAR_1);
 FUNC_2(VAR_1->trig);
}
