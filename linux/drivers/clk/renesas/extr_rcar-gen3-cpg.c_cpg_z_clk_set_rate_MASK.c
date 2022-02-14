
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpg_z_clk {unsigned long fixed_div; int mask; int kick_reg; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 struct cpg_z_clk* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_3, unsigned long VAR_4,
         unsigned long VAR_5)
{
 struct cpg_z_clk *VAR_6 = FUNC_6(VAR_3);
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_0(VAR_4 * 32ULL * VAR_6->fixed_div,
           VAR_5);
 VAR_7 = FUNC_2(VAR_7, 1U, 32U);

 if (FUNC_5(VAR_6->kick_reg) & VAR_0)
  return -VAR_1;

 FUNC_3(VAR_6->reg, VAR_6->mask,
         ((32 - VAR_7) << FUNC_1(VAR_6->mask)) & VAR_6->mask);





 FUNC_3(VAR_6->kick_reg, 0, VAR_0);
 for (VAR_8 = 1000; VAR_8; VAR_8--) {
  if (!(FUNC_5(VAR_6->kick_reg) & VAR_0))
   return 0;

  FUNC_4();
 }

 return -VAR_2;
}
