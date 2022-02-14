
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {int name; int driver_data; } ;
struct spi_device {int max_speed_hz; int bits_per_word; int dev; int mode; } ;
struct regmap {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_0 ;
 struct regmap* FUNC_2 (struct spi_device*,int *) ;
 int FUNC_3 (int *,struct regmap*,int ,int ) ;
 int VAR_1 ;
 struct spi_device_id* FUNC_4 (struct spi_device*) ;
 int FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_2)
{
 int VAR_3;
 struct regmap *VAR_4;
 const struct spi_device_id *VAR_5 = FUNC_4(VAR_2);

 VAR_2->mode = VAR_0;
 VAR_2->max_speed_hz = 8000000;
 VAR_2->bits_per_word = 8;
 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_4 = FUNC_2(VAR_2, &VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_3(&VAR_2->dev,
   VAR_4,
   VAR_5->driver_data, VAR_5->name);
}
