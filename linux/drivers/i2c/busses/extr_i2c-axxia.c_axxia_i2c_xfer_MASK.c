
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct axxia_i2c_dev {scalar_t__ msg_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i2c_msg*,int) ;
 int FUNC_1 (struct axxia_i2c_dev*,struct i2c_msg*,int) ;
 int FUNC_2 (struct axxia_i2c_dev*,struct i2c_msg*) ;
 struct axxia_i2c_dev* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (struct axxia_i2c_dev*,int ) ;

__attribute__((used)) static int
FUNC_5(struct i2c_adapter *VAR_2, struct i2c_msg VAR_3[], int VAR_4)
{
 struct axxia_i2c_dev *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;
 int VAR_7 = 0;

 VAR_5->msg_err = 0;

 if (FUNC_0(VAR_3, VAR_4)) {
  VAR_7 = FUNC_2(VAR_5, VAR_3);
  return VAR_7 ? : VAR_1;
 }

 FUNC_4(VAR_5, VAR_0);

 for (VAR_6 = 0; VAR_7 == 0 && VAR_6 < VAR_4; ++VAR_6)
  VAR_7 = FUNC_1(VAR_5, &VAR_3[VAR_6], VAR_6 == (VAR_4 - 1));

 return VAR_7 ? : VAR_6;
}
