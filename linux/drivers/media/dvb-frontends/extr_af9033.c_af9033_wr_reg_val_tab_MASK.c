
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct reg_val {int reg; int val; } ;
struct i2c_client {int dev; } ;
struct af9033_dev {int regmap; struct i2c_client* client; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_3(struct af9033_dev *VAR_2,
     const struct reg_val *VAR_3, int VAR_4)
{
 struct i2c_client *VAR_5 = VAR_2->client;

 int VAR_6, VAR_7, VAR_8;
 u8 VAR_9[1 + 212];

 FUNC_0(&VAR_5->dev, "tab_len=%d\n", VAR_4);

 if (VAR_4 > sizeof(VAR_9)) {
  FUNC_1(&VAR_5->dev, "tab len %d is too big\n", VAR_4);
  return -VAR_0;
 }

 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_9[VAR_8] = VAR_3[VAR_7].val;

  if (VAR_7 == VAR_4 - 1 || VAR_3[VAR_7].reg != VAR_3[VAR_7 + 1].reg - 1) {
   VAR_6 = FUNC_2(VAR_2->regmap, VAR_3[VAR_7].reg - VAR_8,
      VAR_9, VAR_8 + 1);
   if (VAR_6)
    goto err;

   VAR_8 = 0;
  } else {
   VAR_8++;
  }
 }

 return 0;
err:
 FUNC_0(&VAR_5->dev, "failed=%d\n", VAR_6);
 return VAR_6;
}
