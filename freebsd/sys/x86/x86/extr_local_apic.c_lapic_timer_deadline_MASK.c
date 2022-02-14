
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lapic {int lvt_timer_base; int lvt_timer_last; scalar_t__ la_timer_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(struct lapic *VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = VAR_6->lvt_timer_base;
 VAR_7 &= ~(VAR_0 | VAR_2);
 VAR_7 |= VAR_1;
 if (VAR_7 != VAR_6->lvt_timer_last) {
  VAR_6->lvt_timer_last = VAR_7;
  FUNC_0(VAR_3, VAR_7);
  if (!VAR_5)
   FUNC_1();
 }
 FUNC_3(VAR_4, VAR_6->la_timer_period + FUNC_2());
}
