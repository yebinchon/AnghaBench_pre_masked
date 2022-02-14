
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int dpll_speed; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static long FUNC_1(unsigned long VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;

 VAR_5 = FUNC_0();

 if (VAR_5 == VAR_0) {
  VAR_3 = VAR_1->dpll_speed * 2;
  VAR_4 = VAR_1->dpll_speed;
 } else {
  VAR_3 = VAR_1->dpll_speed;
  VAR_4 = VAR_1->dpll_speed / 2;
 }







 if (VAR_2 > VAR_4)
  return VAR_3;
 else
  return VAR_4;


}
