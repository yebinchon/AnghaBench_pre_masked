
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* x; int i; size_t stack_top; TYPE_1__** stack_ptr; } ;
typedef TYPE_2__ chg_iterator ;
struct TYPE_4__ {int x; } ;


 int FUNC_0 (int ) ;

int FUNC_1 (chg_iterator *VAR_0) {
  if (VAR_0->x == ((void*)0)) {
    return 0;
  } else if (VAR_0->i == -1) {
    if (VAR_0->stack_top >= 0) {
      return VAR_0->stack_ptr[VAR_0->stack_top]->x;
    } else {
      return 0;
    }
  } else

  if ((long)VAR_0->x < 0) {
    if (VAR_0->i == 0) {
      return -(long)VAR_0->x;
    } else {
      return 0;
    }
  } else

  if (VAR_0->x) {
    if (VAR_0->i < VAR_0->x[0]) {
      return VAR_0->x[VAR_0->i + 1];
    } else {
      return 0;
    }
  }

  FUNC_0 (0);
  return 0;
}
