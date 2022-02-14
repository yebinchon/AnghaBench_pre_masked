
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct iio_poll_func {int timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct bma220_data {int* tx_buf; int lock; int buffer; struct spi_device* spi_device; } ;
typedef int irqreturn_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bma220_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct spi_device*,int*,int,int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 int VAR_6;
 struct iio_poll_func *VAR_7 = VAR_5;
 struct iio_dev *VAR_8 = VAR_7->indio_dev;
 struct bma220_data *VAR_9 = FUNC_1(VAR_8);
 struct spi_device *VAR_10 = VAR_9->spi_device;

 FUNC_4(&VAR_9->lock);
 VAR_9->tx_buf[0] = VAR_1 | VAR_0;
 VAR_6 = FUNC_6(VAR_10, VAR_9->tx_buf, 1, VAR_9->buffer,
      FUNC_0(VAR_3) - 1);
 if (VAR_6 < 0)
  goto err;

 FUNC_2(VAR_8, VAR_9->buffer,
        VAR_7->timestamp);
err:
 FUNC_5(&VAR_9->lock);
 FUNC_3(VAR_8->trig);

 return VAR_2;
}
