
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lapic {int lvt_timer_base; int lvt_timer_last; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct lapic *VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = VAR_5->lvt_timer_base;
 VAR_7 &= ~VAR_0;
 VAR_7 |= VAR_1 | VAR_2;
 VAR_5->lvt_timer_last = VAR_7;
 FUNC_0(VAR_4, VAR_7);
 FUNC_0(VAR_3, VAR_6);
}
