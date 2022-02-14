
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct spi_transfer {int bits_per_word; int len; int cs_change; int * rx_buf; int * tx_buf; } ;
struct iio_dev {int dummy; } ;
struct adxrs450_state {int buf_lock; int rx; TYPE_1__* us; int tx; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_transfer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int) ;
 struct adxrs450_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_2,
        u8 VAR_3,
        u16 *VAR_4)
{
 struct adxrs450_state *VAR_5 = FUNC_5(VAR_2);
 u32 VAR_6;
 int VAR_7;
 struct spi_transfer VAR_8[] = {
  {
   .tx_buf = &VAR_5->tx,
   .bits_per_word = 8,
   .len = sizeof(VAR_5->tx),
   .cs_change = 1,
  }, {
   .rx_buf = &VAR_5->rx,
   .bits_per_word = 8,
   .len = sizeof(VAR_5->rx),
  },
 };

 FUNC_6(&VAR_5->buf_lock);
 VAR_6 = VAR_1 | (VAR_3 << 17);

 if (!(FUNC_4(VAR_6) & 1))
  VAR_6 |= VAR_0;

 VAR_5->tx = FUNC_2(VAR_6);
 VAR_7 = FUNC_8(VAR_5->us, VAR_8, FUNC_0(VAR_8));
 if (VAR_7) {
  FUNC_3(&VAR_5->us->dev, "problem while reading 16 bit register 0x%02x\n",
    VAR_3);
  goto error_ret;
 }

 *VAR_4 = (FUNC_1(VAR_5->rx) >> 5) & 0xFFFF;

error_ret:
 FUNC_7(&VAR_5->buf_lock);
 return VAR_7;
}
