
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {int name; int driver_data; } ;
struct spi_device {scalar_t__ max_speed_hz; int dev; } ;
struct regmap {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,int) ;
 struct regmap* FUNC_4 (struct spi_device*,int *) ;
 struct spi_device_id* FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_3)
{
 const struct spi_device_id *VAR_4 = FUNC_5(VAR_3);
 struct regmap *VAR_5;


 if (VAR_3->max_speed_hz > VAR_0) {
  FUNC_3(&VAR_3->dev, "SPI CLK, %d Hz exceeds 5 MHz\n",
   VAR_3->max_speed_hz);
  return -VAR_1;
 }

 VAR_5 = FUNC_4(VAR_3, &VAR_2);
 if (FUNC_0(VAR_5)) {
  FUNC_3(&VAR_3->dev, "Error initializing spi regmap: %ld\n",
   FUNC_1(VAR_5));
  return FUNC_1(VAR_5);
 }

 return FUNC_2(&VAR_3->dev, VAR_5, VAR_4->driver_data, VAR_4->name);
}
