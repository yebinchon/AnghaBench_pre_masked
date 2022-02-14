
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii902x {int bridge; int i2cmux; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 struct sii902x* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)

{
 struct sii902x *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->i2cmux);
 FUNC_0(&VAR_1->bridge);

 return 0;
}
