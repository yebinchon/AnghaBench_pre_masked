
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct si2168_cmd {int dummy; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (struct si2168_cmd*,char*,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct i2c_client* FUNC_2 (struct i2c_mux_core*) ;
 int FUNC_3 (struct i2c_client*,struct si2168_cmd*) ;

__attribute__((used)) static int FUNC_4(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;
 struct si2168_cmd VAR_4;


 FUNC_0(&VAR_4, "\xc0\x0d\x00", 3, 0);
 VAR_3 = FUNC_3(VAR_2, &VAR_4);
 if (VAR_3)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_2->dev, "failed=%d\n", VAR_3);
 return VAR_3;
}
