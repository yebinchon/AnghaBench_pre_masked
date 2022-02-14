
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gather_entry {scalar_t__ num; int res_read; TYPE_1__* first; } ;
struct TYPE_7__ {int remaining; int cur; int last; int value; int x; TYPE_1__* cur_chunk; } ;
typedef TYPE_2__ gh_entry_t ;
struct TYPE_6__ {int data; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2 (struct gather_entry *VAR_8) {
  int VAR_9, VAR_10, VAR_11;
  gh_entry_t *VAR_12;
  FUNC_0 (VAR_3 < VAR_6);
  if (VAR_8->num <= 0 || VAR_8->res_read < 8 || !VAR_8->first) {
    return 0;
  }
  VAR_10 = VAR_9 = (VAR_8->res_read >> 2) - 1;
  VAR_11 = (VAR_4 & VAR_7) ? 3 : 2;
  VAR_9 /= VAR_11;
  VAR_10 = VAR_9 * VAR_11;
  if (VAR_9 <= 0) {
    return 0;
  }
  VAR_5 += VAR_9;

  VAR_12 = &VAR_2[VAR_3];
  VAR_12->remaining = VAR_9;
  VAR_12->cur_chunk = VAR_8->first;
  VAR_12->cur = VAR_12->cur_chunk->data;
  VAR_12->last = VAR_12->cur + (VAR_10 < VAR_0 ? VAR_10 : VAR_0);
  FUNC_1 (VAR_12);

  int VAR_13 = VAR_12->value, VAR_14 = VAR_12->x, VAR_15 = ++VAR_3, VAR_16;
  while (VAR_15 > 1) {
    VAR_16 = (VAR_15 >> 1);
    if (VAR_1[VAR_16]->value < VAR_13 || (VAR_1[VAR_16]->value == VAR_13 && VAR_1[VAR_16]->x <= VAR_14)) { break; }
    VAR_1[VAR_15] = VAR_1[VAR_16];
    VAR_15 = VAR_16;
  }
  VAR_1[VAR_15] = VAR_12;

  return 1;
}
