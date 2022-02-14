
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int ,struct i2c_msg*,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_0,
          struct i2c_msg *VAR_1, int VAR_2)
{
 return FUNC_1(FUNC_0(VAR_0), VAR_1, VAR_2, 1);
}
