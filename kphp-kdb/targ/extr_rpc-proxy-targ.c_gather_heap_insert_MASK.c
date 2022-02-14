
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int remaining; int* cur; unsigned long long value64; } ;
typedef TYPE_1__ gh_entry_t ;


 TYPE_1__** VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*,int,...) ;

__attribute__((used)) static int FUNC_2 (int *VAR_8, int VAR_9) {
  if (VAR_9 < 16) {
    FUNC_1 (2, "Bad result: bytes = %d\n", VAR_9);
    return -1;
  }
  if (*(VAR_8) == VAR_5) {
    return 0;
  }
  if (*(VAR_8) == VAR_6) {
    VAR_8 ++;
    VAR_9 -= 4;
  }
  if (*(VAR_8 ++) != VAR_7) {
    FUNC_1 (2, "Bad result: data = %d\n", *(VAR_8 - 1));
    return -1;
  }
  gh_entry_t *VAR_10 = &VAR_1[VAR_2];
  VAR_4 += *(VAR_8 ++);
  VAR_10->remaining = *(VAR_8 ++);
  int VAR_11 = (VAR_3 & 8) ? 1 : 2;
  if (VAR_10->remaining * VAR_11 * 4 + 12 != VAR_9) {
    FUNC_1 (2, "Bad result: size = %d, H->remaining = %d, bytes = %d\n", VAR_11, VAR_10->remaining, VAR_9);
    return -1;
  }
  FUNC_1 (4, "gather_heap_insert: %d elements (size %d)\n", VAR_10->remaining, VAR_9 - 12);
  if (!VAR_10->remaining) {
    return 0;
  }

  VAR_10->cur = VAR_8;
  FUNC_0 (VAR_10);

  int VAR_12 = ++VAR_2, VAR_13;
  unsigned long long VAR_14 = VAR_10->value64;
  while (VAR_12 > 1) {
    VAR_13 = (VAR_12 >> 1);
    if (VAR_0[VAR_13]->value64 <= VAR_14) { break; }
    VAR_0[VAR_12] = VAR_0[VAR_13];
    VAR_12 = VAR_13;
  }
  VAR_0[VAR_12] = VAR_10;

  return 1;
}
