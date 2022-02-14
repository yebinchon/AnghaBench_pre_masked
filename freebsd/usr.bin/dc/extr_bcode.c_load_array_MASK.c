
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct value {scalar_t__ type; } ;
struct stack {int dummy; } ;
struct number {int number; } ;
struct TYPE_2__ {struct stack* reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int ) ;
 struct value* FUNC_3 (struct stack*,int ) ;
 int FUNC_4 (struct number*) ;
 int FUNC_5 (struct number*) ;
 struct number* FUNC_6 () ;
 struct number* FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct number*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct value*,struct value*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(void)
{
 struct number *VAR_4, *VAR_5;
 struct stack *VAR_6;
 struct value *VAR_7;
 struct value VAR_8;
 u_long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_10();
 if (VAR_10 >= 0) {
  VAR_4 = FUNC_7();
  if (VAR_4 == ((void*)0))
   return;
  VAR_9 = FUNC_5(VAR_4);
  if (FUNC_0(VAR_4->number))
   FUNC_12("negative idx");
  else if (VAR_9 == VAR_2 || VAR_9 > VAR_1)
   FUNC_12("idx too big");
  else {
   VAR_6 = &VAR_3.reg[VAR_10];
   VAR_7 = FUNC_3(VAR_6, VAR_9);
   if (VAR_7 == ((void*)0) || VAR_7->type == VAR_0) {
    VAR_5 = FUNC_6();
    FUNC_2(FUNC_1(VAR_5->number));
    FUNC_9(VAR_5);
   }
   else
    FUNC_8(FUNC_11(VAR_7, &VAR_8));
  }
  FUNC_4(VAR_4);
 }
}
