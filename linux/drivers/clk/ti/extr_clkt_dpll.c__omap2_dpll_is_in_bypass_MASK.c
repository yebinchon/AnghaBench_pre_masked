
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int dpll_bypass_vals; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(u32 VAR_0)
{
 u8 VAR_1, VAR_2;

 VAR_1 = FUNC_1()->dpll_bypass_vals;






 while (VAR_1) {
  VAR_2 = FUNC_0(VAR_1);
  VAR_1 ^= (1 << VAR_2);
  if (VAR_0 == VAR_2)
   return 1;
 }

 return 0;
}
