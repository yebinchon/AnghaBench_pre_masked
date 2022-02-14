
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {int name; } ;
struct spi_device {int bits_per_word; int dev; } ;
struct regmap {int dummy; } ;
struct bme680_spi_bus_context {int current_page; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,char*,...) ;
 struct bme680_spi_bus_context* FUNC_4 (int *,int,int ) ;
 struct regmap* FUNC_5 (int *,int *,struct bme680_spi_bus_context*,int *) ;
 struct spi_device_id* FUNC_6 (struct spi_device*) ;
 int FUNC_7 (struct spi_device*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_4)
{
 const struct spi_device_id *VAR_5 = FUNC_6(VAR_4);
 struct bme680_spi_bus_context *VAR_6;
 struct regmap *VAR_7;
 int VAR_8;

 VAR_4->bits_per_word = 8;
 VAR_8 = FUNC_7(VAR_4);
 if (VAR_8 < 0) {
  FUNC_3(&VAR_4->dev, "spi_setup failed!\n");
  return VAR_8;
 }

 VAR_6 = FUNC_4(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->spi = VAR_4;
 VAR_6->current_page = 0xff;

 VAR_7 = FUNC_5(&VAR_4->dev, &VAR_2,
      VAR_6, &VAR_3);
 if (FUNC_0(VAR_7)) {
  FUNC_3(&VAR_4->dev, "Failed to register spi regmap %d\n",
    (int)FUNC_1(VAR_7));
  return FUNC_1(VAR_7);
 }

 return FUNC_2(&VAR_4->dev, VAR_7, VAR_5->name);
}
