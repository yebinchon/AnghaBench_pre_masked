
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {scalar_t__ max_speed_hz; int irq; int dev; } ;
struct adxl34x {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct adxl34x*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct adxl34x*) ;
 struct adxl34x* FUNC_2 (int *,int ,int,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (struct spi_device*,struct adxl34x*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_4)
{
 struct adxl34x *VAR_5;


 if (VAR_4->max_speed_hz > VAR_2) {
  FUNC_3(&VAR_4->dev, "SPI CLK %d Hz too fast\n", VAR_4->max_speed_hz);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(&VAR_4->dev, VAR_4->irq,
      VAR_4->max_speed_hz > VAR_1,
      &VAR_3);

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_4(VAR_4, VAR_5);

 return 0;
}
