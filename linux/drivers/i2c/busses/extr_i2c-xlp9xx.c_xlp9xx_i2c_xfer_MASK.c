
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp9xx_i2c_dev {int dummy; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 struct xlp9xx_i2c_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct xlp9xx_i2c_dev*) ;
 int FUNC_2 (struct xlp9xx_i2c_dev*) ;
 int FUNC_3 (struct xlp9xx_i2c_dev*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_0, struct i2c_msg *VAR_1,
      int VAR_2)
{
 int VAR_3, VAR_4;
 struct xlp9xx_i2c_dev *VAR_5 = FUNC_0(VAR_0);

 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4) {
  FUNC_2(VAR_5);
  VAR_4 = FUNC_1(VAR_5);
  if (VAR_4)
   return VAR_4;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_3(VAR_5, &VAR_1[VAR_3], VAR_3 == VAR_2 - 1);
  if (VAR_4 != 0)
   return VAR_4;
 }

 return VAR_2;
}
