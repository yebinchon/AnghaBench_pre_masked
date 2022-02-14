
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct TYPE_6__ {int realbits; int shift; } ;
struct iio_chan_spec {TYPE_3__ scan_type; int address; } ;
struct ad_sigma_delta {int bus_locked; int keep_cs_asserted; int irq_dis; TYPE_2__* spi; TYPE_1__* info; int completion; } ;
struct TYPE_5__ {int master; int irq; } ;
struct TYPE_4__ {unsigned int data_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ad_sigma_delta*,unsigned int,int ,unsigned int*) ;
 int FUNC_2 (struct ad_sigma_delta*,unsigned int) ;
 int FUNC_3 (struct ad_sigma_delta*,int ) ;
 int FUNC_4 (struct ad_sigma_delta*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct iio_dev*) ;
 struct ad_sigma_delta* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int ) ;

int FUNC_15(struct iio_dev *VAR_7,
 const struct iio_chan_spec *VAR_8, int *VAR_9)
{
 struct ad_sigma_delta *VAR_10 = FUNC_8(VAR_7);
 unsigned int VAR_11, VAR_12;
 unsigned int VAR_13;
 int VAR_14 = 0;

 if (FUNC_7(VAR_7))
  return -VAR_3;

 FUNC_9(&VAR_7->mlock);
 FUNC_3(VAR_10, VAR_8->address);

 FUNC_12(VAR_10->spi->master);
 VAR_10->bus_locked = 1;
 VAR_10->keep_cs_asserted = 1;
 FUNC_11(&VAR_10->completion);

 FUNC_4(VAR_10, VAR_1);

 VAR_10->irq_dis = 0;
 FUNC_6(VAR_10->spi->irq);
 VAR_14 = FUNC_14(
   &VAR_10->completion, VAR_5);

 if (VAR_14 == 0)
  VAR_14 = -VAR_4;
 if (VAR_14 < 0)
  goto out;

 if (VAR_10->info->data_reg != 0)
  VAR_13 = VAR_10->info->data_reg;
 else
  VAR_13 = VAR_2;

 VAR_14 = FUNC_1(VAR_10, VAR_13,
  FUNC_0(VAR_8->scan_type.realbits + VAR_8->scan_type.shift, 8),
  &VAR_12);

out:
 if (!VAR_10->irq_dis) {
  FUNC_5(VAR_10->spi->irq);
  VAR_10->irq_dis = 1;
 }

 VAR_10->keep_cs_asserted = 0;
 FUNC_4(VAR_10, VAR_0);
 VAR_10->bus_locked = 0;
 FUNC_13(VAR_10->spi->master);
 FUNC_10(&VAR_7->mlock);

 if (VAR_14)
  return VAR_14;

 VAR_11 = VAR_12 >> VAR_8->scan_type.shift;
 VAR_11 &= (1 << VAR_8->scan_type.realbits) - 1;
 *VAR_9 = VAR_11;

 VAR_14 = FUNC_2(VAR_10, VAR_12);
 if (VAR_14)
  return VAR_14;

 return VAR_6;
}
