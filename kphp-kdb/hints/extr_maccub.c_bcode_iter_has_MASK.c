
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int * ptr; } ;
typedef TYPE_1__ bcode_iterator ;


 int FUNC_0 (TYPE_1__*,int) ;

int FUNC_1 (bcode_iterator *VAR_0, int VAR_1) {
  if (VAR_0->ptr == ((void*)0)) {
    return 0;
  }

  int VAR_2 = VAR_0->len;

  int VAR_3 = 0, VAR_4 = VAR_2, VAR_5;
  while (VAR_3 + 1 < VAR_4) {
    VAR_5 = (VAR_3 + VAR_4) / 2;
    if (FUNC_0 (VAR_0, VAR_5) >= VAR_1) {
      VAR_3 = VAR_5;
    } else {
      VAR_4 = VAR_5;
    }
  }

  return FUNC_0 (VAR_0, VAR_3) == VAR_1;
}
