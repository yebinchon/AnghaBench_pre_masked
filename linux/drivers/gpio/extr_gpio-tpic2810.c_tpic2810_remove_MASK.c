
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpic2810 {int chip; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 struct tpic2810* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct tpic2810 *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->chip);

 return 0;
}
