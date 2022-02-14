
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pic32_sys_pll {unsigned long idiv; int ctrl_reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pic32_sys_pll* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_4,
       unsigned long VAR_5)
{
 struct pic32_sys_pll *VAR_6 = FUNC_0(VAR_4);
 unsigned long VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 u64 VAR_12;

 VAR_11 = FUNC_2(VAR_6->ctrl_reg);
 VAR_9 = ((VAR_11 >> VAR_3) & VAR_2);
 VAR_8 = ((VAR_11 >> VAR_1) & VAR_0) + 1;
 VAR_10 = FUNC_3(VAR_9);




 VAR_7 = VAR_5 / VAR_6->idiv;
 VAR_12 = VAR_7;
 VAR_12 *= VAR_8;
 FUNC_1(VAR_12, VAR_10);

 return VAR_12;
}
