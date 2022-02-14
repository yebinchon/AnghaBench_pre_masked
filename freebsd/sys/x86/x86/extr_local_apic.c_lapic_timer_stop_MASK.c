
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lapic {scalar_t__ la_timer_mode; int lvt_timer_last; int lvt_timer_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct lapic *VAR_5)
{
 uint32_t VAR_6;

 if (VAR_5->la_timer_mode == VAR_3) {
  FUNC_2(VAR_4, 0);
  FUNC_1();
 } else {
  VAR_6 = VAR_5->lvt_timer_base;
  VAR_6 &= ~VAR_0;
  VAR_6 |= VAR_1;
  VAR_5->lvt_timer_last = VAR_6;
  FUNC_0(VAR_2, VAR_6);
 }
}
