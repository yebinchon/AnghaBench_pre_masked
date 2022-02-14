
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct vexpress_osc {int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,unsigned long*) ;
 struct vexpress_osc* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 struct vexpress_osc *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3;

 FUNC_0(VAR_2->reg, 0, &VAR_3);

 return VAR_3;
}
