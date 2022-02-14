
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct clk_hw {int clk; } ;
struct clk {int dummy; } ;


 struct clk* FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct clk*) ;
 unsigned long FUNC_2 (unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_0, u16 VAR_1, u16 VAR_2)
{
 struct clk *VAR_3 = FUNC_0(VAR_0->clk);
 unsigned long VAR_4 = FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_4, (unsigned long)VAR_1, (unsigned long)VAR_2);
 if (VAR_4 >= 175000000)
  return 0x3;
 if (VAR_4 >= 150000000)
  return 0x02;
 if (VAR_4 >= 125000000)
  return 0x01;
 return 0x00;
}
