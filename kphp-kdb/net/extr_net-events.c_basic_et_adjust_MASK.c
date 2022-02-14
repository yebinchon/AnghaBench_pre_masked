
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ wakeup_time; int h_idx; } ;
typedef TYPE_1__ event_timer_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0 (event_timer_t *VAR_2, int VAR_3) {
  int VAR_4;
  while (VAR_3 > 1) {
    VAR_4 = (VAR_3 >> 1);
    if (VAR_0[VAR_4]->wakeup_time <= VAR_2->wakeup_time) {
      break;
    }
    VAR_0[VAR_3] = VAR_0[VAR_4];
    VAR_0[VAR_3]->h_idx = VAR_3;
    VAR_3 = VAR_4;
  }
  VAR_4 = 2*VAR_3;
  while (VAR_4 <= VAR_1) {
    if (VAR_4 < VAR_1 && VAR_0[VAR_4]->wakeup_time > VAR_0[VAR_4+1]->wakeup_time) {
      VAR_4++;
    }
    if (VAR_2->wakeup_time <= VAR_0[VAR_4]->wakeup_time) {
      break;
    }
    VAR_0[VAR_3] = VAR_0[VAR_4];
    VAR_0[VAR_3]->h_idx = VAR_3;
    VAR_3 = VAR_4;
    VAR_4 <<= 1;
  }
  VAR_0[VAR_3] = VAR_2;
  VAR_2->h_idx = VAR_3;
  return VAR_3;
}
