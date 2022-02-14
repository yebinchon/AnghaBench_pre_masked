
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int long_locked_until; int long_lock_heap_pos; } ;
typedef TYPE_1__ transaction_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0 (int VAR_2, transaction_t *VAR_3) {
  int VAR_4, VAR_5 = VAR_3->long_locked_until;
  while (VAR_2 > 1) {
    VAR_4 = (VAR_2 >> 1);
    if (VAR_0[VAR_4]->long_locked_until <= VAR_5) {
      break;
    }
    VAR_0[VAR_2] = VAR_0[VAR_4];
    VAR_0[VAR_2]->long_lock_heap_pos = VAR_2;
    VAR_2 = VAR_4;
  }
  while (2*VAR_2 <= VAR_1) {
    VAR_4 = 2*VAR_2;
    if (VAR_4 < VAR_1 && VAR_0[VAR_4+1]->long_locked_until < VAR_0[VAR_4]->long_locked_until) {
      VAR_4++;
    }
    if (VAR_0[VAR_4]->long_locked_until >= VAR_5) {
      break;
    }
    VAR_0[VAR_2] = VAR_0[VAR_4];
    VAR_0[VAR_2]->long_lock_heap_pos = VAR_2;
    VAR_2 = VAR_4;
  }
  VAR_0[VAR_2] = VAR_3;
  VAR_3->long_lock_heap_pos = VAR_2;
  return VAR_2;
}
