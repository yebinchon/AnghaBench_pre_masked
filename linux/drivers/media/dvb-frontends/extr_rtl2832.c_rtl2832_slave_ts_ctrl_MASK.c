
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl2832_dev {int slave_ts; int regmap; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 struct rtl2832_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (struct rtl2832_dev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2, bool VAR_3)
{
 struct rtl2832_dev *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 FUNC_0(&VAR_2->dev, "enable=%d\n", VAR_3);

 if (VAR_3) {
  VAR_5 = FUNC_3(VAR_4, VAR_1, 0x0);
  if (VAR_5)
   goto err;
  VAR_5 = FUNC_2(VAR_4->regmap, 0x10c, "\x5f\xff", 2);
  if (VAR_5)
   goto err;
  VAR_5 = FUNC_3(VAR_4, VAR_0, 0x1);
  if (VAR_5)
   goto err;
  VAR_5 = FUNC_2(VAR_4->regmap, 0x0bc, "\x18", 1);
  if (VAR_5)
   goto err;
  VAR_5 = FUNC_2(VAR_4->regmap, 0x192, "\x7f\xf7\xff", 3);
  if (VAR_5)
   goto err;
 } else {
  VAR_5 = FUNC_2(VAR_4->regmap, 0x192, "\x00\x0f\xff", 3);
  if (VAR_5)
   goto err;
  VAR_5 = FUNC_2(VAR_4->regmap, 0x0bc, "\x08", 1);
  if (VAR_5)
   goto err;
  VAR_5 = FUNC_3(VAR_4, VAR_0, 0x0);
  if (VAR_5)
   goto err;
  VAR_5 = FUNC_2(VAR_4->regmap, 0x10c, "\x00\x00", 2);
  if (VAR_5)
   goto err;
  VAR_5 = FUNC_3(VAR_4, VAR_1, 0x1);
  if (VAR_5)
   goto err;
 }

 VAR_4->slave_ts = VAR_3;

 return 0;
err:
 FUNC_0(&VAR_2->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
