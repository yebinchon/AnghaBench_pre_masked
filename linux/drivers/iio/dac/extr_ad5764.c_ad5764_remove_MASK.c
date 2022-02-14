
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct ad5764_state {int vref_reg; TYPE_1__* chip_info; } ;
struct TYPE_2__ {scalar_t__ int_vref; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct ad5764_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ) ;
 struct iio_dev* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_4(VAR_0);
 struct ad5764_state *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);

 if (VAR_2->chip_info->int_vref == 0)
  FUNC_3(FUNC_0(VAR_2->vref_reg), VAR_2->vref_reg);

 return 0;
}
