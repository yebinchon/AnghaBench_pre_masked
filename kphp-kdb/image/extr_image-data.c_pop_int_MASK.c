
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct forth_stack {int top; TYPE_1__* x; } ;
struct TYPE_2__ {int a; } ;


 int FUNC_0 (struct forth_stack*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int *,int) ;

__attribute__((used)) static int FUNC_2 (struct forth_stack *VAR_1, int *VAR_2, char *VAR_3) {
  if (!FUNC_0 (VAR_1, VAR_0, VAR_3)) {
    return 0;
  }
  FUNC_1 (VAR_2, &VAR_1->x[VAR_1->top--].a, 4);
  return 1;
}
