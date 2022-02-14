
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct ads8688_state {int reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct ads8688_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;
 struct iio_dev* FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_5(VAR_0);
 struct ads8688_state *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_3(VAR_1);

 if (!FUNC_0(VAR_2->reg))
  FUNC_4(VAR_2->reg);

 return 0;
}
