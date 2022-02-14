
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl2832_dev {int regmap; int muxc; int i2c_gate_work; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct rtl2832_dev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rtl2832_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct rtl2832_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_0->dev, "\n");

 FUNC_0(&VAR_1->i2c_gate_work);

 FUNC_3(VAR_1->muxc);

 FUNC_5(VAR_1->regmap);

 FUNC_4(VAR_1);

 return 0;
}
