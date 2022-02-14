
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;
struct oxnas_rps_timer {unsigned long timer_prescaler; scalar_t__ clkevt_base; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct oxnas_rps_timer *VAR_4,
       unsigned long VAR_5,
       unsigned int VAR_6)
{
 uint32_t VAR_7 = VAR_4->timer_prescaler;

 if (VAR_5)
  VAR_7 |= VAR_1;

 if (VAR_6)
  VAR_7 |= VAR_3;

 FUNC_0(VAR_5, VAR_4->clkevt_base + VAR_2);
 FUNC_0(VAR_7, VAR_4->clkevt_base + VAR_0);
}
