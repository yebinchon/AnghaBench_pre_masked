
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct gather_entry {int res_read; int num; int res_bytes; scalar_t__ data; } ;
struct TYPE_5__ {int remaining; unsigned long long value64; scalar_t__ last; scalar_t__ cur; } ;
typedef TYPE_1__ gh_entry_t ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3 (struct gather_entry *VAR_9) {
  int VAR_10, VAR_11, VAR_12;
  gh_entry_t *VAR_13;
  FUNC_0 (VAR_3 < VAR_6);
  if (VAR_9->res_read < 4 || !VAR_9->data) {
    if (VAR_8 >= 3) {
      FUNC_1 (VAR_7, "GE->num = %d, GE->res_read = %d, GE->data = %ld\n", VAR_9->num, VAR_9->res_read, VAR_9->data);
    }
    return 0;
  }
  VAR_11 = VAR_10 = (VAR_9->res_read >> 2);
  VAR_12 = (VAR_4 & VAR_0) ? 2 : 1;
  VAR_10 /= VAR_12;
  VAR_11 = VAR_10 * VAR_12;
  if (VAR_8 >= 3) {
    FUNC_1 (VAR_7, "gather_heap_insert: %d elements (size %d)\n", VAR_10, (VAR_9->res_read >> 2) - 1);
  }
  if (VAR_10 <= 0) {
    return 0;
  }
  VAR_5 += VAR_10;

  VAR_13 = &VAR_2[VAR_3];
  VAR_13->remaining = VAR_10;
  VAR_13->cur = VAR_9->data;
  VAR_13->last = VAR_9->data + VAR_9->res_bytes / 4 + 1;
  FUNC_2 (VAR_13);

  int VAR_14 = ++VAR_3, VAR_15;
  unsigned long long VAR_16 = VAR_13->value64;
  while (VAR_14 > 1) {
    VAR_15 = (VAR_14 >> 1);
    if (VAR_1[VAR_15]->value64 <= VAR_16) { break; }
    VAR_1[VAR_14] = VAR_1[VAR_15];
    VAR_14 = VAR_15;
  }
  VAR_1[VAR_14] = VAR_13;

  return 1;
}
