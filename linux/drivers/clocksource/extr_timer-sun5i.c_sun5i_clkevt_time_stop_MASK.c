
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ base; } ;
struct sun5i_timer_clkevt {TYPE_1__ timer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sun5i_timer_clkevt*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sun5i_timer_clkevt *VAR_1, u8 VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_1->timer.base + FUNC_0(VAR_2));
 FUNC_3(VAR_3 & ~VAR_0, VAR_1->timer.base + FUNC_0(VAR_2));

 FUNC_2(VAR_1);
}
