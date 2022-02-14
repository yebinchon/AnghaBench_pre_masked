
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cur; int remaining; scalar_t__ last; int value; int x; TYPE_3__* cur_chunk; } ;
typedef TYPE_1__ gh_entry_t ;
struct TYPE_6__ {scalar_t__ data; struct TYPE_6__* next; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2 (void) {
  gh_entry_t *VAR_5;
  int VAR_6 = (VAR_3 & VAR_4 ? 3 : 2);
  if (!VAR_2) { return; }
  VAR_5 = VAR_1[1];
  VAR_5->cur += VAR_6;
  if (!--VAR_5->remaining) {
    VAR_5 = VAR_1[VAR_2--];
    if (!VAR_2) { return; }
  } else {
    if (VAR_5->cur >= VAR_5->last) {
      VAR_5->cur_chunk = VAR_5->cur_chunk->next;
      FUNC_0 (VAR_5->cur_chunk);
      VAR_5->cur = VAR_5->cur_chunk->data;
      int VAR_7 = VAR_5->remaining * VAR_6;
      if (VAR_7 > VAR_0) { VAR_7 = VAR_0; }
      VAR_5->last = VAR_5->cur + VAR_7;
    }
    FUNC_1 (VAR_5);
  }
  int VAR_8 = 1, VAR_9, VAR_10 = VAR_5->value, VAR_11 = VAR_5->x;
  while (1) {
    VAR_9 = VAR_8*2;
    if (VAR_9 > VAR_2) { break; }
    if (VAR_9 < VAR_2 && (VAR_1[VAR_9+1]->value < VAR_1[VAR_9]->value || (VAR_1[VAR_9+1]->value == VAR_1[VAR_9]->value && VAR_1[VAR_9+1]->x < VAR_1[VAR_9]->x))) { VAR_9++; }
    if (VAR_10 < VAR_1[VAR_9]->value || (VAR_10 == VAR_1[VAR_9]->value && VAR_11 <= VAR_1[VAR_9]->x)) { break; }
    VAR_1[VAR_8] = VAR_1[VAR_9];
    VAR_8 = VAR_9;
  }
  VAR_1[VAR_8] = VAR_5;
}
