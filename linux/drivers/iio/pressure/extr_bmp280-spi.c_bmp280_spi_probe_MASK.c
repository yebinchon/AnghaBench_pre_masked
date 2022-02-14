
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {int driver_data; int name; } ;
struct spi_device {int bits_per_word; int irq; int dev; } ;
struct regmap_config {int dummy; } ;
struct regmap {int dummy; } ;





 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap_config VAR_1 ;
 int FUNC_2 (int *,struct regmap*,int,int ,int ) ;
 int VAR_2 ;
 struct regmap_config VAR_3 ;
 int FUNC_3 (int *,char*) ;
 struct regmap* FUNC_4 (int *,int *,int *,struct regmap_config const*) ;
 struct spi_device_id* FUNC_5 (struct spi_device*) ;
 int FUNC_6 (struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_4)
{
 const struct spi_device_id *VAR_5 = FUNC_5(VAR_4);
 struct regmap *VAR_6;
 const struct regmap_config *VAR_7;
 int VAR_8;

 VAR_4->bits_per_word = 8;
 VAR_8 = FUNC_6(VAR_4);
 if (VAR_8 < 0) {
  FUNC_3(&VAR_4->dev, "spi_setup failed!\n");
  return VAR_8;
 }

 switch (VAR_5->driver_data) {
 case 129:
  VAR_7 = &VAR_1;
  break;
 case 128:
 case 130:
  VAR_7 = &VAR_3;
  break;
 default:
  return -VAR_0;
 }

 VAR_6 = FUNC_4(&VAR_4->dev,
      &VAR_2,
      &VAR_4->dev,
      VAR_7);
 if (FUNC_0(VAR_6)) {
  FUNC_3(&VAR_4->dev, "failed to allocate register map\n");
  return FUNC_1(VAR_6);
 }

 return FUNC_2(&VAR_4->dev,
       VAR_6,
       VAR_5->driver_data,
       VAR_5->name,
       VAR_4->irq);
}
