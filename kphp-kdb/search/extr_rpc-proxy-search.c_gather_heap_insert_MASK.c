
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; int remaining; int* cur; unsigned long long value64; } ;
typedef TYPE_1__ gh_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*,int,...) ;

__attribute__((used)) static int FUNC_2 (int *VAR_9, int VAR_10) {
  if (VAR_10 < 16) {
    FUNC_1 (2, "Bad result: bytes = %d\n", VAR_10);
    return -1;
  }
  if (*(VAR_9 ++) != VAR_8) {
    FUNC_1 (2, "Bad result: data = %d\n", *(VAR_9 - 1));
    return -1;
  }
  gh_entry_t *VAR_11 = &VAR_3[VAR_4];
  VAR_11->n = *(VAR_9 ++);
  if (VAR_11->n < 1 || VAR_11->n > 2) {
    FUNC_1 (2, "Bad result: H->n = %d\n", VAR_11->n);
    return -1;
  }
  VAR_7 += *(VAR_9 ++);
  VAR_11->remaining = *(VAR_9 ++);
  int VAR_12 = VAR_11->n + ((VAR_5 & VAR_1) ? 1 : 0) + ((VAR_5 & VAR_0) ? 2 : 0);
  if (VAR_11->remaining * VAR_12 * 4 + 16 != VAR_10) {
    FUNC_1 (2, "Bad result: size = %d, H->remaining = %d, bytes = %d\n", VAR_12, VAR_11->remaining, VAR_10);
    return -1;
  }
  if (VAR_6 < VAR_11->n) {
    VAR_6 = VAR_11->n;
  }
  FUNC_1 (4, "gather_heap_insert: %d elements (size %d)\n", VAR_11->remaining, VAR_10 - 16);
  if (!VAR_11->remaining) {
    return 0;
  }

  VAR_11->cur = VAR_9;
  FUNC_0 (VAR_11);

  int VAR_13 = ++VAR_4, VAR_14;
  unsigned long long VAR_15 = VAR_11->value64;
  while (VAR_13 > 1) {
    VAR_14 = (VAR_13 >> 1);
    if (VAR_2[VAR_14]->value64 <= VAR_15) { break; }
    VAR_2[VAR_13] = VAR_2[VAR_14];
    VAR_13 = VAR_14;
  }
  VAR_2[VAR_13] = VAR_11;

  return 1;
}
