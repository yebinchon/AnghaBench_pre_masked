
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int in_queue; } ;
typedef TYPE_1__ event_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;

event_t *FUNC_2 (void) {
  int VAR_2, VAR_3, VAR_4 = VAR_1;
  event_t *VAR_5, *VAR_6, *VAR_7;
  if (!VAR_4) return 0;
  VAR_5 = VAR_0[1];
  FUNC_0 (VAR_5 && VAR_5->in_queue == 1);
  VAR_5->in_queue = 0;
  if (!--VAR_1) return VAR_5;
  VAR_6 = VAR_0[VAR_4--];
  VAR_2 = 1;
  while (1) {
    VAR_3 = (VAR_2 << 1);
    if (VAR_3 > VAR_4) break;
    if (VAR_3 < VAR_4 && FUNC_1(VAR_0[VAR_3], VAR_0[VAR_3+1]) > 0) VAR_3++;
    VAR_7 = VAR_0[VAR_3];
    if (FUNC_1(VAR_6, VAR_7) <= 0) break;
    VAR_0[VAR_2] = VAR_7;
    VAR_7->in_queue = VAR_2;
    VAR_2 = VAR_3;
  }
  VAR_0[VAR_2] = VAR_6;
  VAR_6->in_queue = VAR_2;
  return VAR_5;
}
