
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_alg {int dummy; } ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dn_alg*) ;
 int FUNC_1 (struct dn_alg*) ;

int
FUNC_2(module_t VAR_3, int VAR_4, void *VAR_5)
{
 struct dn_alg *VAR_6 = VAR_5;

 if (VAR_4 == VAR_1)
  return FUNC_0(VAR_6);
 else if (VAR_4 == VAR_2)
  return FUNC_1(VAR_6);
 else
  return VAR_0;
}
