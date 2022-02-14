
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct reg_val_mask {int reg; unsigned int val; unsigned int mask; } ;
struct i2c_client {int dev; } ;
struct cxd2820r_priv {struct regmap** regmap; struct i2c_client** client; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct regmap*,unsigned int,unsigned int) ;
 int FUNC_2 (struct regmap*,unsigned int,unsigned int,unsigned int) ;

int FUNC_3(struct cxd2820r_priv *VAR_0,
     const struct reg_val_mask *VAR_1, int VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0->client[0];
 int VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
 struct regmap *VAR_9;

 FUNC_0(&VAR_3->dev, "tab_len=%d\n", VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if ((VAR_1[VAR_5].reg >> 16) & 0x1)
   VAR_9 = VAR_0->regmap[1];
  else
   VAR_9 = VAR_0->regmap[0];

  VAR_6 = (VAR_1[VAR_5].reg >> 0) & 0xffff;
  VAR_8 = VAR_1[VAR_5].val;
  VAR_7 = VAR_1[VAR_5].mask;

  if (VAR_7 == 0xff)
   VAR_4 = FUNC_1(VAR_9, VAR_6, VAR_8);
  else
   VAR_4 = FUNC_2(VAR_9, VAR_6, VAR_7, VAR_8);
  if (VAR_4)
   goto error;
 }

 return 0;
error:
 FUNC_0(&VAR_3->dev, "failed=%d\n", VAR_4);
 return VAR_4;
}
