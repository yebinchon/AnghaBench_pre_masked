
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct div6_clock {int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct div6_clock* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_2)
{
 struct div6_clock *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3->reg);
 VAR_4 |= VAR_0;






 if (!(VAR_4 & VAR_1))
  VAR_4 |= VAR_1;
 FUNC_2(VAR_4, VAR_3->reg);
}
