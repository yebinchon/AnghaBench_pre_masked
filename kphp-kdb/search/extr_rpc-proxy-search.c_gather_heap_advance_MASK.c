
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long long value64; int remaining; } ;
typedef TYPE_1__ gh_entry_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1 (void) {
  gh_entry_t *VAR_2;
  if (!VAR_1) { return; }
  VAR_2 = VAR_0[1];
  if (!VAR_2->remaining) {
    VAR_2 = VAR_0[VAR_1--];
    if (!VAR_1) { return; }
  } else {
    FUNC_0 (VAR_2);
  }
  int VAR_3 = 1, VAR_4;
  unsigned long long VAR_5 = VAR_2->value64;
  while (1) {
    VAR_4 = VAR_3*2;
    if (VAR_4 > VAR_1) { break; }
    if (VAR_4 < VAR_1 && VAR_0[VAR_4+1]->value64 < VAR_0[VAR_4]->value64) { VAR_4++; }
    if (VAR_5 <= VAR_0[VAR_4]->value64) { break; }
    VAR_0[VAR_3] = VAR_0[VAR_4];
    VAR_3 = VAR_4;
  }
  VAR_0[VAR_3] = VAR_2;
}
