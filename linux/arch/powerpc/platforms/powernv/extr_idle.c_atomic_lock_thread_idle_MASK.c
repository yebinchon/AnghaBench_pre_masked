
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long idle_state; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_1__** VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,unsigned long*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(void)
{
 int VAR_2 = FUNC_2();
 int VAR_3 = FUNC_1(VAR_2);
 unsigned long *VAR_4 = &VAR_1[VAR_3]->idle_state;

 while (FUNC_4(FUNC_3(VAR_0, VAR_4)))
  FUNC_0();
}
