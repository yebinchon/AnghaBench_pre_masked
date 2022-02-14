
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gpio*) ;
 int FUNC_2 (struct gpio**) ;
 int FUNC_3 (struct gpio*) ;

void FUNC_4(
 struct gpio **VAR_0)
{
 if (!VAR_0 || !*VAR_0) {
  FUNC_0(0);
  return;
 }

 FUNC_1(*VAR_0);
 FUNC_2(VAR_0);
 FUNC_3(*VAR_0);

 *VAR_0 = ((void*)0);
}
