
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct afe4403_data {scalar_t__ irq; int dev; int regulator; int trig; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct afe4403_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ) ;
 struct iio_dev* FUNC_6 (struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_6(VAR_0);
 struct afe4403_data *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 FUNC_1(VAR_1);

 FUNC_4(VAR_1);

 if (VAR_2->irq > 0)
  FUNC_3(VAR_2->trig);

 VAR_3 = FUNC_5(VAR_2->regulator);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "Unable to disable regulator\n");
  return VAR_3;
 }

 return 0;
}
