
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt330x_state {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct lgdt330x_state* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct lgdt330x_state*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct lgdt330x_state *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");

 FUNC_2(VAR_1);

 return 0;
}
