
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {scalar_t__ max_speed_hz; int irq; int dev; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 struct regmap* FUNC_4 (struct spi_device*,int *) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_5)
{
 struct regmap *VAR_6;


 if (VAR_5->max_speed_hz > VAR_3) {
  FUNC_3(&VAR_5->dev, "SPI CLK %d Hz?\n", VAR_5->max_speed_hz);
  return -VAR_2;
 }

 VAR_6 = FUNC_4(VAR_5, &VAR_4);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 return FUNC_2(&VAR_5->dev, VAR_6, VAR_5->irq, VAR_1, VAR_0);
}
