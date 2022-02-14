
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct ad_sigma_delta {int irq_dis; int keep_cs_asserted; int bus_locked; TYPE_1__* spi; int completion; } ;
struct TYPE_2__ {int master; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ad_sigma_delta*,int ) ;
 int FUNC_1 (int ) ;
 struct ad_sigma_delta* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_2)
{
 struct ad_sigma_delta *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(&VAR_3->completion);
 FUNC_5(&VAR_3->completion, VAR_1);

 if (!VAR_3->irq_dis) {
  FUNC_1(VAR_3->spi->irq);
  VAR_3->irq_dis = 1;
 }

 VAR_3->keep_cs_asserted = 0;
 FUNC_0(VAR_3, VAR_0);

 VAR_3->bus_locked = 0;
 return FUNC_4(VAR_3->spi->master);
}
