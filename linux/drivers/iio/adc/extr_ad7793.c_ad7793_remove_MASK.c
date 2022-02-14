
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ad7793_platform_data* platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct iio_dev {int dummy; } ;
struct ad7793_state {int reg; } ;
struct ad7793_platform_data {scalar_t__ refsel; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct ad7793_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 struct iio_dev* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_1)
{
 const struct ad7793_platform_data *VAR_2 = VAR_1->dev.platform_data;
 struct iio_dev *VAR_3 = FUNC_4(VAR_1);
 struct ad7793_state *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_3);
 FUNC_0(VAR_3);

 if (VAR_2->refsel != VAR_0)
  FUNC_3(VAR_4->reg);

 return 0;
}
