
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcon_ch1_clk {int lock; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcon_ch1_clk* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_2)
{
 struct tcon_ch1_clk *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_1(VAR_3->reg);
 VAR_5 &= ~(VAR_1 | VAR_0);
 FUNC_4(VAR_5, VAR_3->reg);
 FUNC_3(&VAR_3->lock, VAR_4);
}
