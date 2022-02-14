
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct ad5449 {int vref_reg; TYPE_1__* chip_info; } ;
struct TYPE_2__ {int num_channels; } ;


 int FUNC_0 (struct iio_dev*) ;
 struct ad5449* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ) ;
 struct iio_dev* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_3(VAR_0);
 struct ad5449 *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);

 FUNC_2(VAR_2->chip_info->num_channels, VAR_2->vref_reg);

 return 0;
}
