
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct news_id {int dummy; } ;
struct TYPE_4__ {int cur; scalar_t__ last; struct news_id id; int remaining; } ;
typedef TYPE_1__ gh_entry_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct news_id,struct news_id) ;

__attribute__((used)) static void FUNC_3 (void) {
  gh_entry_t *VAR_2;
  int VAR_3 = 6;
  if (!VAR_1) { return; }
  VAR_2 = VAR_0[1];
  VAR_2->cur += VAR_3;
  if (!--VAR_2->remaining) {
    VAR_2 = VAR_0[VAR_1--];
    if (!VAR_1) { return; }
  } else {
    if (VAR_2->cur >= VAR_2->last) {
      FUNC_0 (0);
    }
    FUNC_1 (VAR_2);
  }
  int VAR_4 = 1, VAR_5;
  struct news_id VAR_6 = VAR_2->id;
  while (1) {
    VAR_5 = VAR_4*2;
    if (VAR_5 > VAR_1) { break; }
    if (VAR_5 < VAR_1 && FUNC_2 (VAR_0[VAR_5 + 1]->id, VAR_0[VAR_5]->id) < 0) {VAR_5 ++; }
    if (FUNC_2 (VAR_6, VAR_0[VAR_5]->id) <= 0) { break; }
    VAR_0[VAR_4] = VAR_0[VAR_5];
    VAR_4 = VAR_5;
  }
  VAR_0[VAR_4] = VAR_2;
}
