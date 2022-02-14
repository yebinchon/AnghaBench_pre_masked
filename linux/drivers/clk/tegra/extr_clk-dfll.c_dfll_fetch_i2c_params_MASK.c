
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dfll {int i2c_reg; int dev; int vdd_reg; int i2c_slave_addr; int i2c_fs_rate; } ;
struct regmap {int dummy; } ;
struct i2c_client {int addr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct tegra_dfll*,char*,int *) ;
 struct device* FUNC_2 (struct regmap*) ;
 int FUNC_3 (int ,int*,int*) ;
 struct regmap* FUNC_4 (int ) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct tegra_dfll *VAR_1)
{
 struct regmap *VAR_2;
 struct device *VAR_3;
 struct i2c_client *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_1, "nvidia,i2c-fs-rate", &VAR_1->i2c_fs_rate))
  return -VAR_0;

 VAR_2 = FUNC_4(VAR_1->vdd_reg);
 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_5(VAR_3);

 VAR_1->i2c_slave_addr = VAR_4->addr;

 VAR_7 = FUNC_3(VAR_1->vdd_reg,
         &VAR_5,
         &VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_1->dev,
   "regulator unsuitable for DFLL I2C operation\n");
  return -VAR_0;
 }
 VAR_1->i2c_reg = VAR_5;

 return 0;
}
