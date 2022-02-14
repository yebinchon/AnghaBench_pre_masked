
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cur; scalar_t__ last; unsigned long long value64; int remaining; } ;
typedef TYPE_1__ gh_entry_t ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2 (void) {
  gh_entry_t *VAR_4;
  int VAR_5 = (VAR_3 & VAR_0) ? 2 : 1;
  if (!VAR_2) { return; }
  VAR_4 = VAR_1[1];
  VAR_4->cur += VAR_5;
  if (!--VAR_4->remaining) {
    VAR_4 = VAR_1[VAR_2--];
    if (!VAR_2) { return; }
  } else {
    if (VAR_4->cur >= VAR_4->last) {
      FUNC_0 (0);
    }
    FUNC_1 (VAR_4);
  }
  int VAR_6 = 1, VAR_7;
  unsigned long long VAR_8 = VAR_4->value64;
  while (1) {
    VAR_7 = VAR_6*2;
    if (VAR_7 > VAR_2) { break; }
    if (VAR_7 < VAR_2 && VAR_1[VAR_7+1]->value64 < VAR_1[VAR_7]->value64) { VAR_7++; }
    if (VAR_8 <= VAR_1[VAR_7]->value64) { break; }
    VAR_1[VAR_6] = VAR_1[VAR_7];
    VAR_6 = VAR_7;
  }
  VAR_1[VAR_6] = VAR_4;
}
