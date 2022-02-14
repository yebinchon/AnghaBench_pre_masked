
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl2830_dev {int regmap; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,...) ;
 struct rtl2830_dev* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct i2c_mux_core*) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_2(VAR_0);
 struct rtl2830_dev *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_0(&VAR_2->dev, "\n");



 VAR_4 = FUNC_3(VAR_3->regmap, 0x101, 0x08, 0x08);
 if (VAR_4)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_2->dev, "failed=%d\n", VAR_4);
 return VAR_4;
}
