
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hb_clk {int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct hb_clk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_3)
 {
 struct hb_clk *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4->reg);
 VAR_5 &= ~VAR_2;
 FUNC_2(VAR_5, VAR_4->reg);

 while ((FUNC_0(VAR_4->reg) & VAR_0) == 0)
  ;
 while ((FUNC_0(VAR_4->reg) & VAR_1) == 0)
  ;

 return 0;
}
