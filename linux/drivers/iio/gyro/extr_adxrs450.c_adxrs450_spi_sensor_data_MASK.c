
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int bits_per_word; int len; int cs_change; int * rx_buf; int * tx_buf; } ;
struct iio_dev {int dummy; } ;
struct adxrs450_state {int buf_lock; int rx; TYPE_1__* us; int tx; } ;
typedef int s16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_transfer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 struct adxrs450_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_1, s16 *VAR_2)
{
 struct adxrs450_state *VAR_3 = FUNC_4(VAR_1);
 int VAR_4;
 struct spi_transfer VAR_5[] = {
  {
   .tx_buf = &VAR_3->tx,
   .bits_per_word = 8,
   .len = sizeof(VAR_3->tx),
   .cs_change = 1,
  }, {
   .rx_buf = &VAR_3->rx,
   .bits_per_word = 8,
   .len = sizeof(VAR_3->rx),
  },
 };

 FUNC_5(&VAR_3->buf_lock);
 VAR_3->tx = FUNC_2(VAR_0);

 VAR_4 = FUNC_7(VAR_3->us, VAR_5, FUNC_0(VAR_5));
 if (VAR_4) {
  FUNC_3(&VAR_3->us->dev, "Problem while reading sensor data\n");
  goto error_ret;
 }

 *VAR_2 = (FUNC_1(VAR_3->rx) >> 10) & 0xFFFF;

error_ret:
 FUNC_6(&VAR_3->buf_lock);
 return VAR_4;
}
