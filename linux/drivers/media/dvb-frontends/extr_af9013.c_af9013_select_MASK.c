
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_mux_core {int dummy; } ;
struct i2c_client {int dev; } ;
struct af9013_state {scalar_t__ ts_mode; int regmap; struct i2c_client* client; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 struct af9013_state* FUNC_1 (struct i2c_mux_core*) ;
 int FUNC_2 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_mux_core *VAR_1, u32 VAR_2)
{
 struct af9013_state *VAR_3 = FUNC_1(VAR_1);
 struct i2c_client *VAR_4 = VAR_3->client;
 int VAR_5;

 FUNC_0(&VAR_4->dev, "\n");

 if (VAR_3->ts_mode == VAR_0)
  VAR_5 = FUNC_2(VAR_3->regmap, 0x1d417, 0x08, 0x08);
 else
  VAR_5 = FUNC_2(VAR_3->regmap, 0x1d607, 0x04, 0x04);
 if (VAR_5)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_4->dev, "failed %d\n", VAR_5);
 return VAR_5;
}
