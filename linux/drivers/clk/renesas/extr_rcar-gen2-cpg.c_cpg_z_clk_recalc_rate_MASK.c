
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct cpg_z_clk {int reg; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (int ) ;
 struct cpg_z_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_2,
        unsigned long VAR_3)
{
 struct cpg_z_clk *VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5;
 unsigned int VAR_6;

 VAR_6 = (FUNC_1(VAR_4->reg) & VAR_0) >> VAR_1;
 VAR_5 = 32 - VAR_6;

 return FUNC_0((u64)VAR_3 * VAR_5, 32);
}
