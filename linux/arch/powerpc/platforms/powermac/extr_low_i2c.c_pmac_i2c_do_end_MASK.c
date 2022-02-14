
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmf_function {int dummy; } ;
struct pmac_i2c_pf_inst {int bus; } ;


 int FUNC_0 (struct pmac_i2c_pf_inst*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pmf_function *VAR_0, void *VAR_1)
{
 struct pmac_i2c_pf_inst *VAR_2 = VAR_1;

 if (VAR_2 == ((void*)0))
  return;
 FUNC_1(VAR_2->bus);
 FUNC_0(VAR_2);
}
