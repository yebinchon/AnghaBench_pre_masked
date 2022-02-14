
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct gather_entry {scalar_t__ num; int res_read; int res_bytes; scalar_t__ data; } ;
struct TYPE_5__ {int remaining; unsigned long long value64; scalar_t__ last; scalar_t__ cur; } ;
typedef TYPE_1__ gh_entry_t ;


 TYPE_1__** VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_3 (struct gather_entry *VAR_14) {
  int VAR_15, VAR_16, VAR_17;
  gh_entry_t *VAR_18;
  FUNC_0 (VAR_2 < VAR_6);
  if (VAR_14->num <= 0 || VAR_14->res_read < 8 || !VAR_14->data) {
    return 0;
  }
  VAR_16 = VAR_15 = (VAR_14->res_read >> 2) - 1;
  if (VAR_8 || VAR_7) {
    VAR_17 = (VAR_3 & VAR_10) ? 3 : 2;
  } else if (VAR_9) {
    VAR_17 = (VAR_3 & VAR_10) ? 2 : 1;
  } else if (VAR_5) {
    VAR_17 = 3;
  } else {
    FUNC_0 (0);
  }
  if (VAR_3 & VAR_11) { VAR_17 += 2; }
  VAR_15 /= VAR_17;
  VAR_16 = VAR_15 * VAR_17;
  if (VAR_13 >= 3) {
    FUNC_1 (VAR_12, "gather_heap_insert: %d elements (size %d)\n", VAR_15, (VAR_14->res_read >> 2) - 1);
  }
  if (VAR_15 <= 0) {
    return 0;
  }
  VAR_4 += VAR_15;

  VAR_18 = &VAR_1[VAR_2];
  VAR_18->remaining = VAR_15;
  VAR_18->cur = VAR_14->data;
  VAR_18->last = VAR_14->data + VAR_14->res_bytes / 4 + 1;
  FUNC_2 (VAR_18);

  int VAR_19 = ++VAR_2, VAR_20;
  unsigned long long VAR_21 = VAR_18->value64;
  while (VAR_19 > 1) {
    VAR_20 = (VAR_19 >> 1);
    if (VAR_0[VAR_20]->value64 <= VAR_21) { break; }
    VAR_0[VAR_19] = VAR_0[VAR_20];
    VAR_19 = VAR_20;
  }
  VAR_0[VAR_19] = VAR_18;

  return 1;
}
