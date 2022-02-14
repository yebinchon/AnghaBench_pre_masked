
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int long_lock_heap_pos; } ;
typedef TYPE_1__ transaction_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2 (transaction_t *VAR_3) {
  int VAR_4 = VAR_3->long_lock_heap_pos;
  FUNC_0 (VAR_4 > 0 && VAR_4 <= VAR_1 && VAR_0[VAR_4] == VAR_3);
  VAR_3->long_lock_heap_pos = 0;
  VAR_2 = --VAR_1;
  if (VAR_4 <= VAR_1) {
    FUNC_1 (VAR_4, VAR_0[VAR_1+1]);
  }
}
