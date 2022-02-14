
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_clock {int pllcr; int sckcr; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct pll_clock* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (unsigned char,int ) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2,
   unsigned long VAR_3)
{
 int VAR_4;
 unsigned char VAR_5;
 unsigned long VAR_6;
 struct pll_clock *VAR_7 = FUNC_3(VAR_1);

 VAR_4 = ((VAR_2 / VAR_3) / 2) & 0x03;
 FUNC_1(&VAR_0, VAR_6);
 VAR_5 = FUNC_0(VAR_7->sckcr);
 VAR_5 |= 0x08;
 FUNC_4(VAR_5, VAR_7->sckcr);
 VAR_5 = FUNC_0(VAR_7->pllcr);
 VAR_5 &= ~0x03;
 VAR_5 |= VAR_4;
 FUNC_4(VAR_5, VAR_7->pllcr);
 FUNC_2(&VAR_0, VAR_6);
 return 0;
}
