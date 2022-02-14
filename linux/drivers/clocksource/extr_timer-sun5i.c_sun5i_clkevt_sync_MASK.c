
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ base; } ;
struct sun5i_timer_clkevt {TYPE_1__ timer; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sun5i_timer_clkevt *VAR_1)
{
 u32 VAR_2 = FUNC_2(VAR_1->timer.base + FUNC_0(1));

 while ((VAR_2 - FUNC_2(VAR_1->timer.base + FUNC_0(1))) < VAR_0)
  FUNC_1();
}
