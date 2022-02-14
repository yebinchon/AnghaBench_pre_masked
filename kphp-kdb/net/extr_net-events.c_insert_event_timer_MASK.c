
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h_idx; } ;
typedef TYPE_1__ event_timer_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;

int FUNC_2 (event_timer_t *VAR_3) {
  int VAR_4;
  if (VAR_3->h_idx) {
    VAR_4 = VAR_3->h_idx;
    FUNC_0 (VAR_4 > 0 && VAR_4 <= VAR_2 && VAR_1[VAR_4] == VAR_3);
  } else {
    FUNC_0 (VAR_2 < VAR_0);
    VAR_4 = ++VAR_2;
  }
  return FUNC_1 (VAR_3, VAR_4);
}
