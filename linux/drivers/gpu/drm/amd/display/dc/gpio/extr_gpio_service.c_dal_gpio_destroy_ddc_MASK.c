
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddc {int pin_clock; int pin_data; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ddc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ddc*) ;

void FUNC_4(
 struct ddc **VAR_0)
{
 if (!VAR_0 || !*VAR_0) {
  FUNC_0();
  return;
 }

 FUNC_1(*VAR_0);
 FUNC_2(&(*VAR_0)->pin_data);
 FUNC_2(&(*VAR_0)->pin_clock);
 FUNC_3(*VAR_0);

 *VAR_0 = ((void*)0);
}
