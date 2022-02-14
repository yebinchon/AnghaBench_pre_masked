
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ minr; scalar_t__ maxr; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0 () {
  int VAR_2 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
    if (VAR_0[VAR_2].minr > VAR_0[VAR_2].maxr) {
      return 1;
    }
  }
  return 0;
}
