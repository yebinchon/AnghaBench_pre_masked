
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv090x_state {int frontend; } ;
struct i2c_client {int dummy; } ;


 struct stv090x_state* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct stv090x_state *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->frontend);
 return 0;
}
