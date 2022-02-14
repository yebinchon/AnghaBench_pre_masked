
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_gate {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct clk_gate* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_4, bool VAR_5)
{
 struct clk_gate *VAR_6 = FUNC_1(VAR_4);
 u32 VAR_7;





 VAR_7 = FUNC_0(VAR_6->reg);
 if (VAR_7 & VAR_2)
  VAR_7 |= VAR_1;

 if (VAR_5) {
  VAR_7 |= VAR_3;
 } else {





  VAR_7 |= VAR_0;
  FUNC_2(VAR_7, VAR_6->reg);

  VAR_7 &= ~VAR_3;
 }

 FUNC_2(VAR_7, VAR_6->reg);

 return 0;
}
