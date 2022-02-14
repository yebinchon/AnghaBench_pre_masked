
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef int u32 ;
struct cpg_z_clk {int mask; int fixed_div; int reg; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct cpg_z_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
        unsigned long VAR_1)
{
 struct cpg_z_clk *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3;
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_2->reg) & VAR_2->mask;
 VAR_3 = 32 - (VAR_4 >> FUNC_1(VAR_2->mask));

 return FUNC_0((u64)VAR_1 * VAR_3,
         32 * VAR_2->fixed_div);
}
