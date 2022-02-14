
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct cpg_z_clk {unsigned long fixed_div; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned long,unsigned long) ;
 struct cpg_z_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
     unsigned long *VAR_2)
{
 struct cpg_z_clk *VAR_3 = FUNC_2(VAR_0);
 unsigned long VAR_4;
 unsigned int VAR_5;

 VAR_4 = *VAR_2 / VAR_3->fixed_div;
 VAR_5 = FUNC_1(VAR_1 * 32ULL, VAR_4);
 VAR_5 = FUNC_0(VAR_5, 1U, 32U);

 return (u64)VAR_4 * VAR_5 / 32;
}
