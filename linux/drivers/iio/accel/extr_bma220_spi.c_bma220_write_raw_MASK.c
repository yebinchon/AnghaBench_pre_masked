
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct bma220_data {int* tx_buf; int lock; TYPE_1__* spi_device; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int**) ;
 int VAR_0 ;
 int VAR_1 ;

 int** VAR_2 ;
 int FUNC_1 (int *,char*) ;
 struct bma220_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int*,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int VAR_5, int VAR_6, long VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10 = -1;
 struct bma220_data *VAR_11 = FUNC_2(VAR_3);

 switch (VAR_7) {
 case 128:
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++)
   if (VAR_5 == VAR_2[VAR_8][0] &&
       VAR_6 == VAR_2[VAR_8][1]) {
    VAR_10 = VAR_8;
    break;
   }
  if (VAR_10 < 0)
   return -VAR_1;

  FUNC_3(&VAR_11->lock);
  VAR_11->tx_buf[0] = VAR_0;
  VAR_11->tx_buf[1] = VAR_10;
  VAR_9 = FUNC_5(VAR_11->spi_device, VAR_11->tx_buf,
    sizeof(VAR_11->tx_buf));
  if (VAR_9 < 0)
   FUNC_1(&VAR_11->spi_device->dev,
    "failed to set measurement range\n");
  FUNC_4(&VAR_11->lock);

  return 0;
 }

 return -VAR_1;
}
