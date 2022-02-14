
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int remaining; int* cur; } ;
typedef TYPE_1__ gh_entry_t ;


 TYPE_1__** VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char*,int,...) ;

__attribute__((used)) static int FUNC_3 (int *VAR_5, int VAR_6) {
  if (VAR_6 < 12) {
    FUNC_2 (2, "Bad result: bytes = %d\n", VAR_6);
    return -1;
  }
  if (*VAR_5++ != VAR_4) {
    FUNC_2 (2, "Bad result: data = %08x\n", VAR_5[-1]);
    return -1;
  }
  gh_entry_t *VAR_7 = &VAR_1[VAR_2];
  VAR_3 += *VAR_5++;
  VAR_7->remaining = *VAR_5++;
  if (VAR_7->remaining * 4 * 4 + 12 != VAR_6) {
    FUNC_2 (2, "Bad result: H->remaining = %d, bytes = %d\n", VAR_7->remaining, VAR_6);
    return -1;
  }
  FUNC_2 (4, "gather_heap_insert: %d elements (size %d)\n", VAR_7->remaining, VAR_6 - 12);
  if (!VAR_7->remaining) {
    return 0;
  }

  VAR_7->cur = VAR_5;
  FUNC_1 (VAR_7);

  int VAR_8 = ++VAR_2, VAR_9;
  while (VAR_8 > 1) {
    VAR_9 = (VAR_8 >> 1);
    if (FUNC_0 (VAR_0[VAR_9], VAR_7)) {
      break;
    }
    VAR_0[VAR_8] = VAR_0[VAR_9];
    VAR_8 = VAR_9;
  }
  VAR_0[VAR_8] = VAR_7;

  return 1;
}
