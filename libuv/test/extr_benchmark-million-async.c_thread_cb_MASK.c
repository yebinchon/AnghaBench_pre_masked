
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ async_handles; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void* VAR_2) {
  unsigned VAR_3;

  while (VAR_1 == 0) {
    VAR_3 = FUNC_1() % FUNC_0(VAR_0->async_handles);
    FUNC_2(VAR_0->async_handles + VAR_3);
  }
}
