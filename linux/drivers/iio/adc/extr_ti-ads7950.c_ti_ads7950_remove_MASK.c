
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ads7950_state {int slock; int reg; int chip; } ;
struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct iio_dev*) ;
 struct ti_ads7950_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct iio_dev* FUNC_6 (struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_6(VAR_0);
 struct ti_ads7950_state *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_2->chip);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 FUNC_5(VAR_2->reg);
 FUNC_4(&VAR_2->slock);

 return 0;
}
