
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct adis_data {scalar_t__ has_paging; } ;
struct adis {int current_page; struct adis_data const* data; struct spi_device* spi; int txrx_lock; } ;


 int FUNC_0 (struct adis*,int) ;
 int FUNC_1 (struct iio_dev*,struct adis*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct adis *VAR_0, struct iio_dev *VAR_1,
 struct spi_device *VAR_2, const struct adis_data *VAR_3)
{
 FUNC_2(&VAR_0->txrx_lock);
 VAR_0->spi = VAR_2;
 VAR_0->data = VAR_3;
 FUNC_1(VAR_1, VAR_0);

 if (VAR_3->has_paging) {

  VAR_0->current_page = -1;
 } else {

  VAR_0->current_page = 0;
 }

 return FUNC_0(VAR_0, 0);
}
