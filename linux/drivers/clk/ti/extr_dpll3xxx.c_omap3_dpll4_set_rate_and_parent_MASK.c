
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_hw*,unsigned long,unsigned long,int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 () ;

int FUNC_3(struct clk_hw *VAR_2, unsigned long VAR_3,
        unsigned long VAR_4, u8 VAR_5)
{
 if (FUNC_2()->flags & VAR_1) {
  FUNC_1("clock: DPLL4 cannot change rate due to silicon 'Limitation 2.5' on 3430ES1.\n");
  return -VAR_0;
 }

 return FUNC_0(VAR_2, VAR_3, VAR_4,
            VAR_5);
}
