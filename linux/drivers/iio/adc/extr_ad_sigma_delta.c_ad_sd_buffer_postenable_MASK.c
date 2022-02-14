
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {TYPE_1__* channels; int masklength; int active_scan_mask; } ;
struct ad_sigma_delta {int bus_locked; int keep_cs_asserted; int irq_dis; TYPE_2__* spi; } ;
struct TYPE_4__ {int master; int irq; } ;
struct TYPE_3__ {int address; } ;


 int VAR_0 ;
 int FUNC_0 (struct ad_sigma_delta*,int ) ;
 int FUNC_1 (struct ad_sigma_delta*,int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ,int ) ;
 struct ad_sigma_delta* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_1)
{
 struct ad_sigma_delta *VAR_2 = FUNC_4(VAR_1);
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = FUNC_3(VAR_1->active_scan_mask,
     VAR_1->masklength);
 VAR_4 = FUNC_0(VAR_2,
  VAR_1->channels[VAR_3].address);
 if (VAR_4)
  return VAR_4;

 FUNC_6(VAR_2->spi->master);
 VAR_2->bus_locked = 1;
 VAR_2->keep_cs_asserted = 1;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (VAR_4)
  goto err_unlock;

 VAR_2->irq_dis = 0;
 FUNC_2(VAR_2->spi->irq);

 return 0;

err_unlock:
 FUNC_7(VAR_2->spi->master);

 return VAR_4;
}
