
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_payloads {int payloads; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct i2c_payloads*) ;

__attribute__((used)) static void FUNC_2(struct i2c_payloads **VAR_0)
{
 if (!VAR_0 || !*VAR_0)
  return;
 FUNC_0(&(*VAR_0)->payloads);
 FUNC_1(*VAR_0);
 *VAR_0 = ((void*)0);

}
