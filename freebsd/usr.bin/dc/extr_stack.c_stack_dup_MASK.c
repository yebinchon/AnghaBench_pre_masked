
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct stack {int dummy; } ;


 int FUNC_0 (struct value*,struct value*) ;
 int FUNC_1 (struct stack*,int ) ;
 struct value* FUNC_2 (struct stack*) ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct stack *VAR_0)
{
 struct value *VAR_1;
 struct value VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 == ((void*)0)) {
  FUNC_3("stack empty");
  return;
 }
 FUNC_1(VAR_0, FUNC_0(VAR_1, &VAR_2));
}
