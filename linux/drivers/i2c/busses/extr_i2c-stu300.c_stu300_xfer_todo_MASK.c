
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_1, struct i2c_msg *VAR_2, int VAR_3)
{

 FUNC_0(1, "%s: atomic transfers not implemented\n", FUNC_1(&VAR_1->dev));
 return -VAR_0;
}
