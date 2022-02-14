
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct div6_clock {int reg; scalar_t__ div; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct div6_clock* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2)
{
 struct div6_clock *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = (FUNC_1(VAR_3->reg) & ~(VAR_1 | VAR_0))
     | FUNC_0(VAR_3->div - 1);
 FUNC_3(VAR_4, VAR_3->reg);

 return 0;
}
