
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {int driver_data; } ;
struct spi_device {int irq; int dev; } ;
struct regmap {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,char*,int) ;
 struct regmap* FUNC_3 (struct spi_device*,int *) ;
 struct spi_device_id* FUNC_4 (struct spi_device*) ;
 int FUNC_5 (int *,int ,int,struct regmap*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_1)
{
 const struct spi_device_id *VAR_2 = FUNC_4(VAR_1);
 int VAR_3 = VAR_2->driver_data;
 struct regmap *VAR_4;

 VAR_4 = FUNC_3(VAR_1, &VAR_0);
 if (FUNC_0(VAR_4)) {
  FUNC_2(&VAR_1->dev, "Failed to register spi regmap %d\n",
   (int)FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }

 return FUNC_5(&VAR_1->dev, VAR_1->irq, VAR_3, VAR_4);
}
