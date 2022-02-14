
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vexpress_osc {int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,unsigned long) ;
 struct vexpress_osc* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2)
{
 struct vexpress_osc *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3->reg, 0, VAR_1);
}
