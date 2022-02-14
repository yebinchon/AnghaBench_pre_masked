
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {int name; } ;
struct spi_device {int dev; } ;
struct regmap {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,char*,int) ;
 struct regmap* FUNC_4 (struct spi_device*,int *) ;
 struct spi_device_id* FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_1)
{
 struct regmap *VAR_2;
 const struct spi_device_id *VAR_3 = FUNC_5(VAR_1);

 VAR_2 = FUNC_4(VAR_1, &VAR_0);
 if (FUNC_0(VAR_2)) {
  FUNC_3(&VAR_1->dev, "Failed to register spi regmap %d\n",
   (int)FUNC_1(VAR_2));
  return FUNC_1(VAR_2);
 }
 return FUNC_2(&VAR_1->dev, VAR_2, VAR_3->name, 1);
}
