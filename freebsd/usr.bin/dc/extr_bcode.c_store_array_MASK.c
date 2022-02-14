
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct value {int dummy; } ;
struct stack {int dummy; } ;
struct number {int number; } ;
struct TYPE_2__ {struct stack* reg; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (struct stack*,int ,struct value*) ;
 int FUNC_2 (struct number*) ;
 int FUNC_3 (struct number*) ;
 struct value* FUNC_4 () ;
 struct number* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct value*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(void)
{
 struct number *VAR_3;
 struct value *VAR_4;
 struct stack *VAR_5;
 u_long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_6();
 if (VAR_7 >= 0) {
  VAR_3 = FUNC_5();
  if (VAR_3 == ((void*)0))
   return;
  VAR_4 = FUNC_4();
  if (VAR_4 == ((void*)0)) {
   FUNC_2(VAR_3);
   return;
  }
  VAR_6 = FUNC_3(VAR_3);
  if (FUNC_0(VAR_3->number)) {
   FUNC_8("negative idx");
   FUNC_7(VAR_4);
  } else if (VAR_6 == VAR_1 || VAR_6 > VAR_0) {
   FUNC_8("idx too big");
   FUNC_7(VAR_4);
  } else {
   VAR_5 = &VAR_2.reg[VAR_7];
   FUNC_1(VAR_5, VAR_6, VAR_4);
  }
  FUNC_2(VAR_3);
 }
}
