
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cur; scalar_t__ last; unsigned long long value64; int remaining; } ;
typedef TYPE_1__ gh_entry_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2 (void) {
  gh_entry_t *VAR_9;
  int VAR_10;
  if (VAR_5 || VAR_4) {
    VAR_10 = (VAR_2 & VAR_7) ? 3 : 2;
  } else if (VAR_6) {
    VAR_10 = (VAR_2 & VAR_7) ? 2 : 1;
  } else if (VAR_3) {
    VAR_10 = 3;
  } else {
    FUNC_0 (0);
  }
  if (VAR_2 & VAR_8) { VAR_10 += 2; }
  if (!VAR_1) { return; }
  VAR_9 = VAR_0[1];
  VAR_9->cur += VAR_10;
  if (!--VAR_9->remaining) {
    VAR_9 = VAR_0[VAR_1--];
    if (!VAR_1) { return; }
  } else {
    if (VAR_9->cur >= VAR_9->last) {
      FUNC_0 (0);
    }
    FUNC_1 (VAR_9);
  }
  int VAR_11 = 1, VAR_12;
  unsigned long long VAR_13 = VAR_9->value64;
  while (1) {
    VAR_12 = VAR_11*2;
    if (VAR_12 > VAR_1) { break; }
    if (VAR_12 < VAR_1 && VAR_0[VAR_12+1]->value64 < VAR_0[VAR_12]->value64) { VAR_12++; }
    if (VAR_13 <= VAR_0[VAR_12]->value64) { break; }
    VAR_0[VAR_11] = VAR_0[VAR_12];
    VAR_11 = VAR_12;
  }
  VAR_0[VAR_11] = VAR_9;
}
