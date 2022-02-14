
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_transfer {unsigned int* tx_buf; int bits_per_word; int len; int cs_change; int delay_usecs; int rx_buf; int cs_change_delay_unit; int cs_change_delay; } ;
struct spi_message {int dummy; } ;
struct adis {unsigned int* tx; unsigned int current_page; int txrx_lock; int rx; TYPE_2__* spi; TYPE_1__* data; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int read_delay; int cs_change_delay; int write_delay; } ;


 unsigned int VAR_0 ;
 void* FUNC_0 (unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,unsigned int,int) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_8 (struct spi_message*) ;
 int FUNC_9 (TYPE_2__*,struct spi_message*) ;

int FUNC_10(struct adis *VAR_4, unsigned int VAR_5,
 unsigned int *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8 = VAR_5 / VAR_0;
 struct spi_message VAR_9;
 int VAR_10;
 struct spi_transfer VAR_11[] = {
  {
   .tx_buf = VAR_4->tx,
   .bits_per_word = 8,
   .len = 2,
   .cs_change = 1,
   .delay_usecs = VAR_4->data->write_delay,
   .cs_change_delay = VAR_4->data->cs_change_delay,
   .cs_change_delay_unit = VAR_3,
  }, {
   .tx_buf = VAR_4->tx + 2,
   .bits_per_word = 8,
   .len = 2,
   .cs_change = 1,
   .delay_usecs = VAR_4->data->read_delay,
   .cs_change_delay = VAR_4->data->cs_change_delay,
   .cs_change_delay_unit = VAR_3,
  }, {
   .tx_buf = VAR_4->tx + 4,
   .rx_buf = VAR_4->rx,
   .bits_per_word = 8,
   .len = 2,
   .cs_change = 1,
   .delay_usecs = VAR_4->data->read_delay,
   .cs_change_delay = VAR_4->data->cs_change_delay,
   .cs_change_delay_unit = VAR_3,
  }, {
   .rx_buf = VAR_4->rx + 2,
   .bits_per_word = 8,
   .len = 2,
   .delay_usecs = VAR_4->data->read_delay,
  },
 };

 FUNC_5(&VAR_4->txrx_lock);
 FUNC_8(&VAR_9);

 if (VAR_4->current_page != VAR_8) {
  VAR_4->tx[0] = FUNC_1(VAR_1);
  VAR_4->tx[1] = VAR_8;
  FUNC_7(&VAR_11[0], &VAR_9);
 }

 switch (VAR_7) {
 case 4:
  VAR_4->tx[2] = FUNC_0(VAR_5 + 2);
  VAR_4->tx[3] = 0;
  FUNC_7(&VAR_11[1], &VAR_9);

 case 2:
  VAR_4->tx[4] = FUNC_0(VAR_5);
  VAR_4->tx[5] = 0;
  FUNC_7(&VAR_11[2], &VAR_9);
  FUNC_7(&VAR_11[3], &VAR_9);
  break;
 default:
  VAR_10 = -VAR_2;
  goto out_unlock;
 }

 VAR_10 = FUNC_9(VAR_4->spi, &VAR_9);
 if (VAR_10) {
  FUNC_2(&VAR_4->spi->dev, "Failed to read register 0x%02X: %d\n",
    VAR_5, VAR_10);
  goto out_unlock;
 } else {
  VAR_4->current_page = VAR_8;
 }

 switch (VAR_7) {
 case 4:
  *VAR_6 = FUNC_4(VAR_4->rx);
  break;
 case 2:
  *VAR_6 = FUNC_3(VAR_4->rx + 2);
  break;
 }

out_unlock:
 FUNC_6(&VAR_4->txrx_lock);

 return VAR_10;
}
