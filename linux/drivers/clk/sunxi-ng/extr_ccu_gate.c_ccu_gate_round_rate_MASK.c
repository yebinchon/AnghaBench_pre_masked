
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {int features; int prediv; } ;
struct ccu_gate {TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 struct ccu_gate* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_2, unsigned long VAR_3,
    unsigned long *VAR_4)
{
 struct ccu_gate *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = 1;

 if (VAR_5->common.features & VAR_0)
  VAR_6 = VAR_5->common.prediv;

 if (FUNC_0(VAR_2) & VAR_1) {
  unsigned long VAR_7 = VAR_3;

  if (VAR_5->common.features & VAR_0)
   VAR_7 *= VAR_6;
  *VAR_4 = FUNC_2(FUNC_1(VAR_2), VAR_7);
 }

 return *VAR_4 / VAR_6;
}
