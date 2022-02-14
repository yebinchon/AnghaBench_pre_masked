
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct a8293_dev {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 struct a8293_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct a8293_dev*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct a8293_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");

 FUNC_2(VAR_1);
 return 0;
}
