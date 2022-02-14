
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_type {int flags; int params_num; unsigned long long params_types; } ;


 int FUNC_0 (int) ;

void FUNC_1 (struct tl_type *VAR_0, int VAR_1) {
  FUNC_0 (VAR_0->flags & 4);
  FUNC_0 (VAR_0->params_num <= 64);
  if (VAR_1) {
    VAR_0->params_types |= (1ull << (VAR_0->params_num ++));
  } else {
    VAR_0->params_num ++;
  }
}
