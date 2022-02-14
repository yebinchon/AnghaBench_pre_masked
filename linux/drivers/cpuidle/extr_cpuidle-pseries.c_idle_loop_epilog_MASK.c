
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ idle; int wait_state_cycles; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 () ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static inline void FUNC_5(unsigned long VAR_1)
{
 u64 VAR_2;

 VAR_2 = FUNC_0(FUNC_2()->wait_state_cycles);
 VAR_2 += FUNC_3(VAR_0) - VAR_1;
 FUNC_2()->wait_state_cycles = FUNC_1(VAR_2);
 FUNC_2()->idle = 0;

 FUNC_4();
}
