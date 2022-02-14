
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct ad7298_state {int reg; scalar_t__ ext_ref; } ;


 int FUNC_0 (struct iio_dev*) ;
 struct ad7298_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 struct iio_dev* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_4(VAR_0);
 struct ad7298_state *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 if (VAR_2->ext_ref)
  FUNC_3(VAR_2->reg);

 return 0;
}
