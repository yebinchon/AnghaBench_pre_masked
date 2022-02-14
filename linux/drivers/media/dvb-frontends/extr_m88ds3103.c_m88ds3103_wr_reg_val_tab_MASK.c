
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct m88ds3103_reg_val {int reg; int val; } ;
struct m88ds3103_dev {int regmap; TYPE_1__* cfg; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int i2c_wr_max; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct m88ds3103_dev *VAR_1,
  const struct m88ds3103_reg_val *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = VAR_1->client;
 int VAR_5, VAR_6, VAR_7;
 u8 VAR_8[83];

 FUNC_0(&VAR_4->dev, "tab_len=%d\n", VAR_3);

 if (VAR_3 > 86) {
  VAR_5 = -VAR_0;
  goto err;
 }

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_3; VAR_6++, VAR_7++) {
  VAR_8[VAR_7] = VAR_2[VAR_6].val;

  if (VAR_6 == VAR_3 - 1 || VAR_2[VAR_6].reg != VAR_2[VAR_6 + 1].reg - 1 ||
    !((VAR_7 + 1) % (VAR_1->cfg->i2c_wr_max - 1))) {
   VAR_5 = FUNC_1(VAR_1->regmap, VAR_2[VAR_6].reg - VAR_7, VAR_8, VAR_7 + 1);
   if (VAR_5)
    goto err;

   VAR_7 = -1;
  }
 }

 return 0;
err:
 FUNC_0(&VAR_4->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
