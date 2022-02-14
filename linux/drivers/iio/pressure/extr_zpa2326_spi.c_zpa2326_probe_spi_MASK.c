
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int bits_per_word; int irq; int dev; int max_speed_hz; int mode; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;
 struct regmap* FUNC_3 (struct spi_device*,int *) ;
 int FUNC_4 (int ,unsigned int) ;
 TYPE_1__* FUNC_5 (struct spi_device*) ;
 int FUNC_6 (struct spi_device*) ;
 int FUNC_7 (int *,int ,int ,int ,struct regmap*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_3)
{
 struct regmap *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_3, &VAR_2);
 if (FUNC_0(VAR_4)) {
  FUNC_2(&VAR_3->dev, "failed to init registers map");
  return FUNC_1(VAR_4);
 }







 VAR_3->mode = VAR_0;
 VAR_3->max_speed_hz = FUNC_4(VAR_3->max_speed_hz, 1000000U);
 VAR_3->bits_per_word = 8;
 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_7(&VAR_3->dev, FUNC_5(VAR_3)->name,
        VAR_3->irq, VAR_1, VAR_4);
}
