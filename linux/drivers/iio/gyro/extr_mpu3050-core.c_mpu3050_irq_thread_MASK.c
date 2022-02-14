
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu3050 {int dev; int map; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct mpu3050* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct iio_trigger *VAR_6 = VAR_5;
 struct iio_dev *VAR_7 = FUNC_2(VAR_6);
 struct mpu3050 *VAR_8 = FUNC_1(VAR_7);
 unsigned int VAR_9;
 int VAR_10;


 VAR_10 = FUNC_4(VAR_8->map, VAR_2, &VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_8->dev, "error reading IRQ status\n");
  return VAR_0;
 }
 if (!(VAR_9 & VAR_3))
  return VAR_1;

 FUNC_3(VAR_5);

 return VAR_0;
}
