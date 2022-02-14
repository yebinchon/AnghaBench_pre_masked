
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct ad_sigma_delta_info {int dummy; } ;
struct ad_sigma_delta {struct ad_sigma_delta_info const* info; struct spi_device* spi; } ;


 int FUNC_0 (struct iio_dev*,struct ad_sigma_delta*) ;

int FUNC_1(struct ad_sigma_delta *VAR_0, struct iio_dev *VAR_1,
 struct spi_device *VAR_2, const struct ad_sigma_delta_info *VAR_3)
{
 VAR_0->spi = VAR_2;
 VAR_0->info = VAR_3;
 FUNC_0(VAR_1, VAR_0);

 return 0;
}
