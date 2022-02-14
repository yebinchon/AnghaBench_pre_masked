
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct regulator {int dummy; } ;
struct iio_dev {int dummy; } ;
struct ad8366_state {struct regulator* reg; } ;


 int FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct ad8366_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct regulator*) ;
 struct iio_dev* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_4(VAR_0);
 struct ad8366_state *VAR_2 = FUNC_2(VAR_1);
 struct regulator *VAR_3 = VAR_2->reg;

 FUNC_1(VAR_1);

 if (!FUNC_0(VAR_3))
  FUNC_3(VAR_3);

 return 0;
}
