
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
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sun5i_timer_clkevt *VAR_3, u8 VAR_4, bool VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_3->timer.base + FUNC_0(VAR_4));

 if (VAR_5)
  VAR_6 &= ~VAR_1;
 else
  VAR_6 |= VAR_1;

 FUNC_2(VAR_6 | VAR_0 | VAR_2,
        VAR_3->timer.base + FUNC_0(VAR_4));
}
