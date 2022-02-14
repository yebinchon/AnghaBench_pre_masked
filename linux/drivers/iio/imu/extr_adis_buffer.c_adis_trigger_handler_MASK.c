
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iio_poll_func {int timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct adis {scalar_t__ current_page; int buffer; int txrx_lock; TYPE_1__* data; TYPE_2__* spi; int msg; scalar_t__* tx; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ has_paging; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 struct adis* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,scalar_t__*,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_3, void *VAR_4)
{
 struct iio_poll_func *VAR_5 = VAR_4;
 struct iio_dev *VAR_6 = VAR_5->indio_dev;
 struct adis *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 if (!VAR_7->buffer)
  return -VAR_1;

 if (VAR_7->data->has_paging) {
  FUNC_5(&VAR_7->txrx_lock);
  if (VAR_7->current_page != 0) {
   VAR_7->tx[0] = FUNC_0(VAR_0);
   VAR_7->tx[1] = 0;
   FUNC_8(VAR_7->spi, VAR_7->tx, 2);
  }
 }

 VAR_8 = FUNC_7(VAR_7->spi, &VAR_7->msg);
 if (VAR_8)
  FUNC_1(&VAR_7->spi->dev, "Failed to read data: %d", VAR_8);


 if (VAR_7->data->has_paging) {
  VAR_7->current_page = 0;
  FUNC_6(&VAR_7->txrx_lock);
 }

 FUNC_3(VAR_6, VAR_7->buffer,
  VAR_5->timestamp);

 FUNC_4(VAR_6->trig);

 return VAR_2;
}
