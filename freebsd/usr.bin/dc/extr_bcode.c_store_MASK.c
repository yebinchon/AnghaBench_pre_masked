
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct TYPE_2__ {int * reg; } ;


 TYPE_1__ VAR_0 ;
 struct value* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct value*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct value *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1();
 if (VAR_2 >= 0) {
  VAR_1 = FUNC_0();
  if (VAR_1 == ((void*)0)) {
   return;
  }
  FUNC_2(&VAR_0.reg[VAR_2], VAR_1);
 }
}
