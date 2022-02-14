
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpu_clk {int cpu; scalar_t__ reg_base; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct cpu_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_2,
      unsigned long VAR_3)
{
 struct cpu_clk *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_4->reg_base + VAR_1);
 VAR_6 = (VAR_5 >> (VAR_4->cpu * 8)) & VAR_0;
 return VAR_3 / VAR_6;
}
