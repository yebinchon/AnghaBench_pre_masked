
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc90522_state {int tuner_i2c; } ;
struct i2c_client {int dummy; } ;


 struct tc90522_state* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct tc90522_state*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct tc90522_state *VAR_1;

 VAR_1 = FUNC_0(FUNC_2(VAR_0));
 FUNC_1(&VAR_1->tuner_i2c);
 FUNC_3(VAR_1);
 return 0;
}
