
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct clk_gate {int lock; scalar_t__ reg; int bit_idx; } ;
struct TYPE_2__ {scalar_t__ (* is_enabled ) (struct clk_hw*) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 scalar_t__ FUNC_3 (struct clk_hw*) ;
 struct clk_gate* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct clk_hw *VAR_2)
{
 struct clk_gate *VAR_3 = FUNC_4(VAR_2);
 unsigned long VAR_4 = 0;

 if (VAR_1.is_enabled(VAR_2)) {
  FUNC_1(VAR_3->lock, VAR_4);
  FUNC_5(FUNC_0(VAR_3->bit_idx), VAR_3->reg + VAR_0);
  FUNC_2(VAR_3->lock, VAR_4);
 }
}
