
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct alchemy_fgcs_clk {int shift; int reglock; int reg; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long,int,int,unsigned long*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 struct alchemy_fgcs_clk* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1, unsigned long VAR_2,
     unsigned long VAR_3)
{
 struct alchemy_fgcs_clk *VAR_4 = FUNC_5(VAR_1);
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = VAR_4->shift + 2;

 if (!VAR_2 || !VAR_3 || VAR_2 > (VAR_3 / 2))
  return -VAR_0;
 VAR_8 = FUNC_0(VAR_2, VAR_3, 2, 512, &VAR_5);
 FUNC_3(VAR_4->reglock, VAR_7);
 VAR_6 = FUNC_1(VAR_4->reg);
 VAR_6 &= ~(0xff << VAR_9);
 VAR_6 |= VAR_5 << VAR_9;
 FUNC_2(VAR_6, VAR_4->reg);
 FUNC_4(VAR_4->reglock, VAR_7);

 return 0;
}
