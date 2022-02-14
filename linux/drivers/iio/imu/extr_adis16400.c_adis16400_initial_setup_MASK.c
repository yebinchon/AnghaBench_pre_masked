
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct iio_dev {int name; int dev; } ;
struct TYPE_7__ {TYPE_2__* spi; } ;
struct adis16400_state {TYPE_3__ adis; TYPE_1__* variant; } ;
struct TYPE_6__ {void* max_speed_hz; int irq; int chip_select; int mode; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,unsigned int*) ;
 int FUNC_2 (int *,char*,int ,unsigned int,int ,int ) ;
 int FUNC_3 (int *,char*,unsigned int,unsigned int) ;
 struct adis16400_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_9)
{
 struct adis16400_state *VAR_10 = FUNC_4(VAR_9);
 uint16_t VAR_11, VAR_12;
 unsigned int VAR_13;
 int VAR_14;


 if (VAR_10->variant->flags & VAR_1)
  VAR_10->adis.spi->max_speed_hz = VAR_6;
 else
  VAR_10->adis.spi->max_speed_hz = VAR_5;
 VAR_10->adis.spi->mode = VAR_8;
 FUNC_5(VAR_10->adis.spi);

 VAR_14 = FUNC_0(&VAR_10->adis);
 if (VAR_14)
  return VAR_14;

 if (VAR_10->variant->flags & VAR_0) {
  VAR_14 = FUNC_1(&VAR_10->adis,
      VAR_2, &VAR_11);
  if (VAR_14)
   goto err_ret;

  VAR_14 = FUNC_6(VAR_9->name, "adis%u\n", &VAR_13);
  if (VAR_14 != 1) {
   VAR_14 = -VAR_7;
   goto err_ret;
  }

  if (VAR_11 != VAR_13)
   FUNC_3(&VAR_9->dev, "Device ID(%u) and product ID(%u) do not match.",
     VAR_13, VAR_11);

  FUNC_2(&VAR_9->dev, "%s: prod_id 0x%04x at CS%d (irq %d)\n",
   VAR_9->name, VAR_11,
   VAR_10->adis.spi->chip_select, VAR_10->adis.spi->irq);
 }

 if (VAR_10->variant->flags & VAR_1) {
  VAR_14 = FUNC_1(&VAR_10->adis, VAR_3, &VAR_12);
  if (VAR_14)
   goto err_ret;

  if ((VAR_12 & VAR_4) < 0x0A) {
   VAR_10->adis.spi->max_speed_hz = VAR_5;
   FUNC_5(VAR_10->adis.spi);
  }
 }

err_ret:
 return VAR_14;
}
