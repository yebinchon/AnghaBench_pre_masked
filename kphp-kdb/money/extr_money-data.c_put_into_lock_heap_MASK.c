
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ long_locked_until; int long_lock_heap_pos; } ;
typedef TYPE_1__ transaction_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2 (transaction_t *VAR_3) {
  FUNC_0 (!VAR_3->long_lock_heap_pos && VAR_3->long_locked_until);
  FUNC_0 (VAR_0 < VAR_1);
  VAR_2 = ++VAR_0;
  FUNC_1 (VAR_0, VAR_3);
}
