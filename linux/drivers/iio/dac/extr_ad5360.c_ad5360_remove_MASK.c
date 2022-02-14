
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct iio_dev {int channels; } ;
struct ad5360_state {int vref_reg; TYPE_1__* chip_info; } ;
struct TYPE_2__ {int num_vrefs; } ;


 int FUNC_0 (struct iio_dev*) ;
 struct ad5360_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct iio_dev* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_4(VAR_0);
 struct ad5360_state *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);

 FUNC_2(VAR_1->channels);

 FUNC_3(VAR_2->chip_info->num_vrefs, VAR_2->vref_reg);

 return 0;
}
