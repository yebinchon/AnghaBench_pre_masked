
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct gpio_service {struct gpio_service** busyness; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 int FUNC_1 (struct gpio_service*) ;

void FUNC_2(
 struct gpio_service **VAR_1)
{
 if (!VAR_1 || !*VAR_1) {
  FUNC_0();
  return;
 }


 {
  uint32_t VAR_2 = 0;

  do {
   FUNC_1((*VAR_1)->busyness[VAR_2]);

   ++VAR_2;
  } while (VAR_2 < VAR_0);
 }

 FUNC_1(*VAR_1);

 *VAR_1 = ((void*)0);
}
