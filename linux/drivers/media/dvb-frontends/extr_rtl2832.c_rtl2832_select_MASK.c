
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl2832_dev {int regmap; int i2c_gate_work; struct i2c_client* client; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 struct rtl2832_dev* FUNC_2 (struct i2c_mux_core*) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct rtl2832_dev *VAR_2 = FUNC_2(VAR_0);
 struct i2c_client *VAR_3 = VAR_2->client;
 int VAR_4;


 FUNC_0(&VAR_2->i2c_gate_work);


 VAR_4 = FUNC_3(VAR_2->regmap, 0x101, 0x08, 0x08);
 if (VAR_4)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_3->dev, "failed=%d\n", VAR_4);
 return VAR_4;
}
