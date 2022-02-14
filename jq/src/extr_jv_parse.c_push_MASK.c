
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {int stackpos; int stacklen; int * stack; } ;
typedef int jv ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct jv_parser* VAR_0, jv VAR_1) {
  FUNC_0(VAR_0->stackpos <= VAR_0->stacklen);
  if (VAR_0->stackpos == VAR_0->stacklen) {
    VAR_0->stacklen = VAR_0->stacklen * 2 + 10;
    VAR_0->stack = FUNC_1(VAR_0->stack, VAR_0->stacklen * sizeof(jv));
  }
  FUNC_0(VAR_0->stackpos < VAR_0->stacklen);
  VAR_0->stack[VAR_0->stackpos++] = VAR_1;
}
