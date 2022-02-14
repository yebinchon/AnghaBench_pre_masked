
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_stack {size_t top; int * x; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1 (struct forth_stack *VAR_0, int VAR_1) {
  VAR_0->top++;
  FUNC_0 (&VAR_0->x[VAR_0->top], VAR_1);
}
