
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h_idx; } ;
typedef TYPE_1__ event_timer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;

int FUNC_2 (event_timer_t *VAR_2) {
  int VAR_3 = VAR_2->h_idx;
  if (!VAR_3) {
    return 0;
  }
  FUNC_0 (VAR_3 > 0 && VAR_3 <= VAR_1 && VAR_0[VAR_3] == VAR_2);
  VAR_2->h_idx = 0;

  VAR_2 = VAR_0[VAR_1--];
  if (VAR_3 > VAR_1) {
    return 1;
  }
  FUNC_1 (VAR_2, VAR_3);
  return 1;
}
