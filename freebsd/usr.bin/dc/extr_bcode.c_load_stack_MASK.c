
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct stack {int dummy; } ;
struct TYPE_2__ {struct stack* reg; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct value*) ;
 int FUNC_1 () ;
 struct value* FUNC_2 (struct stack*) ;
 scalar_t__ FUNC_3 (struct stack*) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct stack *VAR_1;
 struct value *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1();
 if (VAR_3 >= 0) {
  VAR_1 = &VAR_0.reg[VAR_3];
  VAR_2 = ((void*)0);
  if (FUNC_3(VAR_1) > 0) {
   VAR_2 = FUNC_2(VAR_1);
  }
  if (VAR_2 != ((void*)0))
   FUNC_0(VAR_2);
  else
   FUNC_4("stack register '%c' (0%o) is empty",
       VAR_3, VAR_3);
 }
}
