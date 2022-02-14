
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int remaining; } ;
typedef TYPE_1__ gh_entry_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2 (void) {
  if (!VAR_1) {
    return;
  }

  gh_entry_t *VAR_2 = VAR_0[1];
  if (!VAR_2->remaining) {
    VAR_2 = VAR_0[VAR_1--];
    if (!VAR_1) {
      return;
    }
  } else {
    FUNC_1 (VAR_2);
  }

  int VAR_3 = 1;
  while (1) {
    int VAR_4 = VAR_3 * 2;
    if (VAR_4 > VAR_1) {
      break;
    }
    if (VAR_4 < VAR_1 && FUNC_0 (VAR_0[VAR_4 + 1], VAR_0[VAR_4])) {
      VAR_4++;
    }
    if (!FUNC_0 (VAR_0[VAR_4], VAR_2)) {
      break;
    }
    VAR_0[VAR_3] = VAR_0[VAR_4];
    VAR_3 = VAR_4;
  }
  VAR_0[VAR_3] = VAR_2;
}
