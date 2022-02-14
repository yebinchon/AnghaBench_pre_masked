
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3642_platform_data {int tx_pin; } ;
struct lm3642_chip_data {int dev; int regmap; struct lm3642_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct lm3642_chip_data *VAR_2)
{
 int VAR_3;
 struct lm3642_platform_data *VAR_4 = VAR_2->pdata;


 VAR_3 = FUNC_1(VAR_2->regmap, VAR_1, VAR_0,
     VAR_4->tx_pin);
 if (VAR_3 < 0)
  FUNC_0(VAR_2->dev, "Failed to update REG_ENABLE Register\n");
 return VAR_3;
}
