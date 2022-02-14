
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct cpg_z_clk {int kick_reg; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (int,unsigned long) ;
 int FUNC_3 (int ) ;
 struct cpg_z_clk* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_5, unsigned long VAR_6,
         unsigned long VAR_7)
{
 struct cpg_z_clk *VAR_8 = FUNC_4(VAR_5);
 unsigned int VAR_9;
 u32 VAR_10, VAR_11;
 unsigned int VAR_12;

 VAR_9 = FUNC_2((u64)VAR_6 * 32, VAR_7);
 VAR_9 = FUNC_0(VAR_9, 1U, 32U);

 if (FUNC_3(VAR_8->kick_reg) & VAR_0)
  return -VAR_3;

 VAR_10 = FUNC_3(VAR_8->reg);
 VAR_10 &= ~VAR_1;
 VAR_10 |= (32 - VAR_9) << VAR_2;
 FUNC_5(VAR_10, VAR_8->reg);





 VAR_11 = FUNC_3(VAR_8->kick_reg);
 VAR_11 |= VAR_0;
 FUNC_5(VAR_11, VAR_8->kick_reg);
 for (VAR_12 = 1000; VAR_12; VAR_12--) {
  if (!(FUNC_3(VAR_8->kick_reg) & VAR_0))
   return 0;

  FUNC_1();
 }

 return -VAR_4;
}
