
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {int name; } ;
struct spi_device {int irq; int dev; } ;
struct regmap {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,char*,int) ;
 struct regmap* FUNC_3 (struct spi_device*,int *) ;
 int FUNC_4 (int *,struct regmap*,int ,int ) ;
 int VAR_0 ;
 struct spi_device_id* FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_1)
{
 const struct spi_device_id *VAR_2 = FUNC_5(VAR_1);
 struct regmap *VAR_3;

 VAR_3 = FUNC_3(VAR_1, &VAR_0);
 if (FUNC_0(VAR_3)) {
  FUNC_2(&VAR_1->dev, "Failed to register spi regmap: %ld\n",
   FUNC_1(VAR_3));
  return FUNC_1(VAR_3);
 }

 return FUNC_4(&VAR_1->dev, VAR_3, VAR_1->irq, VAR_2->name);
}
