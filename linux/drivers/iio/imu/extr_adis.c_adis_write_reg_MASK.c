
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_transfer {unsigned int* tx_buf; int bits_per_word; int len; int cs_change; int delay_usecs; int cs_change_delay_unit; int cs_change_delay; } ;
struct spi_message {int dummy; } ;
struct adis {unsigned int* tx; unsigned int current_page; int txrx_lock; TYPE_2__* spi; TYPE_1__* data; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int write_delay; int cs_change_delay; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 int FUNC_6 (TYPE_2__*,struct spi_message*) ;

int FUNC_7(struct adis *VAR_4, unsigned int VAR_5,
 unsigned int VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8 = VAR_5 / VAR_0;
 int VAR_9, VAR_10;
 struct spi_message VAR_11;
 struct spi_transfer VAR_12[] = {
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
   .delay_usecs = VAR_4->data->write_delay,
   .cs_change_delay = VAR_4->data->cs_change_delay,
   .cs_change_delay_unit = VAR_3,
  }, {
   .tx_buf = VAR_4->tx + 4,
   .bits_per_word = 8,
   .len = 2,
   .cs_change = 1,
   .delay_usecs = VAR_4->data->write_delay,
   .cs_change_delay = VAR_4->data->cs_change_delay,
   .cs_change_delay_unit = VAR_3,
  }, {
   .tx_buf = VAR_4->tx + 6,
   .bits_per_word = 8,
   .len = 2,
   .delay_usecs = VAR_4->data->write_delay,
  }, {
   .tx_buf = VAR_4->tx + 8,
   .bits_per_word = 8,
   .len = 2,
   .delay_usecs = VAR_4->data->write_delay,
  },
 };

 FUNC_2(&VAR_4->txrx_lock);

 FUNC_5(&VAR_11);

 if (VAR_4->current_page != VAR_8) {
  VAR_4->tx[0] = FUNC_0(VAR_1);
  VAR_4->tx[1] = VAR_8;
  FUNC_4(&VAR_12[0], &VAR_11);
 }

 switch (VAR_7) {
 case 4:
  VAR_4->tx[8] = FUNC_0(VAR_5 + 3);
  VAR_4->tx[9] = (VAR_6 >> 24) & 0xff;
  VAR_4->tx[6] = FUNC_0(VAR_5 + 2);
  VAR_4->tx[7] = (VAR_6 >> 16) & 0xff;

 case 2:
  VAR_4->tx[4] = FUNC_0(VAR_5 + 1);
  VAR_4->tx[5] = (VAR_6 >> 8) & 0xff;

 case 1:
  VAR_4->tx[2] = FUNC_0(VAR_5);
  VAR_4->tx[3] = VAR_6 & 0xff;
  break;
 default:
  VAR_9 = -VAR_2;
  goto out_unlock;
 }

 VAR_12[VAR_7].cs_change = 0;

 for (VAR_10 = 1; VAR_10 <= VAR_7; VAR_10++)
  FUNC_4(&VAR_12[VAR_10], &VAR_11);

 VAR_9 = FUNC_6(VAR_4->spi, &VAR_11);
 if (VAR_9) {
  FUNC_1(&VAR_4->spi->dev, "Failed to write register 0x%02X: %d\n",
    VAR_5, VAR_9);
 } else {
  VAR_4->current_page = VAR_8;
 }

out_unlock:
 FUNC_3(&VAR_4->txrx_lock);

 return VAR_9;
}
