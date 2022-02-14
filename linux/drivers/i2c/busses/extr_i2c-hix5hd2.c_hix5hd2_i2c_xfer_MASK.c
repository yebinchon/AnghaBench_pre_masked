
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct hix5hd2_i2c_priv {int dev; } ;


 int FUNC_0 (struct hix5hd2_i2c_priv*,struct i2c_msg*,int) ;
 struct hix5hd2_i2c_priv* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_0,
       struct i2c_msg *VAR_1, int VAR_2)
{
 struct hix5hd2_i2c_priv *VAR_3 = FUNC_1(VAR_0);
 int VAR_4, VAR_5, VAR_6;

 FUNC_2(VAR_3->dev);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_1++) {
  VAR_6 = (VAR_4 == VAR_2 - 1);
  VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_6);
  if (VAR_5 < 0)
   goto out;
 }

 VAR_5 = VAR_2;

out:
 FUNC_3(VAR_3->dev);
 FUNC_4(VAR_3->dev);
 return VAR_5;
}
