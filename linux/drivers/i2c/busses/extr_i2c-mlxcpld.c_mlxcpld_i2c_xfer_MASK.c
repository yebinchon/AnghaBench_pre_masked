
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxcpld_i2c_priv {int lock; int dev; } ;
struct i2c_msg {scalar_t__ len; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct mlxcpld_i2c_priv* FUNC_1 (struct i2c_adapter*) ;
 scalar_t__ FUNC_2 (struct mlxcpld_i2c_priv*) ;
 int FUNC_3 (struct mlxcpld_i2c_priv*,struct i2c_msg*,int) ;
 int FUNC_4 (struct mlxcpld_i2c_priv*) ;
 int FUNC_5 (struct mlxcpld_i2c_priv*,struct i2c_msg*,int,int ) ;
 scalar_t__ FUNC_6 (struct mlxcpld_i2c_priv*) ;
 int FUNC_7 (struct mlxcpld_i2c_priv*) ;
 int FUNC_8 (struct mlxcpld_i2c_priv*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_adapter *VAR_1, struct i2c_msg *VAR_2,
       int VAR_3)
{
 struct mlxcpld_i2c_priv *VAR_4 = FUNC_1(VAR_1);
 u8 VAR_5 = 0;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_2, VAR_3);
 if (VAR_7) {
  FUNC_0(VAR_4->dev, "Incorrect message\n");
  return VAR_7;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6)
  VAR_5 += VAR_2[VAR_6].len;


 if (FUNC_6(VAR_4)) {
  FUNC_0(VAR_4->dev, "LPCI2C bridge is busy\n");
  FUNC_4(VAR_4);
  if (FUNC_2(VAR_4)) {
   FUNC_0(VAR_4->dev, "LPCI2C bridge is busy after reset\n");
   return -VAR_0;
  }
 }

 FUNC_5(VAR_4, VAR_2, VAR_3, VAR_5);

 FUNC_9(&VAR_4->lock);


 FUNC_8(VAR_4);


 VAR_7 = FUNC_7(VAR_4);

 FUNC_10(&VAR_4->lock);

 return VAR_7 < 0 ? VAR_7 : VAR_3;
}
