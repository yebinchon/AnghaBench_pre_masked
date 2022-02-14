
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
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,char*,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static int FUNC_4 (struct gather_entry *VAR_9) {
  int VAR_10, VAR_11, VAR_12;
  gh_entry_t *VAR_13;
  FUNC_0 (VAR_2 < VAR_4);
  if (VAR_9->num <= 0 || VAR_9->res_read < 4 || !VAR_9->data) {
    FUNC_3 (4, "num = %d, res_read = %d, data = %p\n", VAR_9->num, VAR_9->res_read, VAR_9->data);
    return 0;
  }
  VAR_11 = VAR_10 = (VAR_9->res_read >> 2) - 1;
  VAR_12 = (VAR_6 & VAR_5) ? 2 : 1;

  VAR_10 /= VAR_12;
  VAR_11 = VAR_10 * VAR_12;

  if (VAR_8 >= 3) {
    FUNC_1 (VAR_7, "gather_heap_insert: %d elements (size %d)\n", VAR_10, (VAR_9->res_read >> 2) - 1);
  }
  if (VAR_10 <= 0) {
    return 0;
  }
  VAR_3 += VAR_10;

  VAR_13 = &VAR_1[VAR_2];
  VAR_13->remaining = VAR_10;
  VAR_13->cur = VAR_9->data;
  VAR_13->last = VAR_9->data + VAR_9->res_bytes / 4 + 1;
  FUNC_2 (VAR_13);

  int VAR_14 = ++VAR_2, VAR_15;
  unsigned long long VAR_16 = VAR_13->value64;
  while (VAR_14 > 1) {
    VAR_15 = (VAR_14 >> 1);
    if (VAR_0[VAR_15]->value64 <= VAR_16) { break; }
    VAR_0[VAR_14] = VAR_0[VAR_15];
    VAR_14 = VAR_15;
  }
  VAR_0[VAR_14] = VAR_13;

  return 1;
}
