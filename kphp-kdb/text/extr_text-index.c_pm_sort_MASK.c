
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long long freq; } ;
typedef TYPE_1__ word_t ;
struct TYPE_5__ {TYPE_1__* w; } ;
typedef TYPE_2__ pm_cell_t ;



void FUNC_0 (pm_cell_t *VAR_0, int VAR_1) {
  int VAR_2 = 0, VAR_3 = VAR_1;
  word_t *VAR_4;
  long long VAR_5;
  if (VAR_1 <= 0) { return; }
  VAR_5 = VAR_0[VAR_1 >> 1].w->freq;
  do {
    while (VAR_0[VAR_2].w->freq < VAR_5) { VAR_2++; }
    while (VAR_0[VAR_3].w->freq > VAR_5) { VAR_3--; }
    if (VAR_2 <= VAR_3) {
      VAR_4 = VAR_0[VAR_2].w; VAR_0[VAR_2++].w = VAR_0[VAR_3].w; VAR_0[VAR_3--].w = VAR_4;
    }
  } while (VAR_2 <= VAR_3);
  FUNC_0 (VAR_0+VAR_2, VAR_1-VAR_2);
  FUNC_0 (VAR_0, VAR_3);
}
