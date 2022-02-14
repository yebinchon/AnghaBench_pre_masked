
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; int* v; scalar_t__* s; scalar_t__ f; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_3 ;

void FUNC_2 (int VAR_4, int VAR_5) {
  FUNC_0 (0 <= VAR_4 && VAR_4 < VAR_1);
  int VAR_6 = (VAR_2[VAR_4].f ? VAR_2[VAR_4].i : 0);

  do {
    if (VAR_2[VAR_4].s[VAR_6] && VAR_5 >= VAR_2[VAR_4].v[VAR_6]) {
      FUNC_1 (VAR_2[VAR_4].s[VAR_6], VAR_3);
    }
    if (++VAR_6 == VAR_0) {
      VAR_6 = 0;
    }
  } while (VAR_2[VAR_4].i != VAR_6);
}
