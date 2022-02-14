
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct div6_clock {unsigned int div; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int ) ;
 struct div6_clock* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_2, unsigned long VAR_3,
       unsigned long VAR_4)
{
 struct div6_clock *VAR_5 = FUNC_3(VAR_2);
 unsigned int VAR_6 = FUNC_1(VAR_3, VAR_4);
 u32 VAR_7;

 VAR_5->div = VAR_6;

 VAR_7 = FUNC_2(VAR_5->reg) & ~VAR_1;

 if (!(VAR_7 & VAR_0))
  FUNC_4(VAR_7 | FUNC_0(VAR_5->div - 1), VAR_5->reg);

 return 0;
}
