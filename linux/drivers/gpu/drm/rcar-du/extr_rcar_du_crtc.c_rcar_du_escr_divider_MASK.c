
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct du_clk_params {unsigned long diff; unsigned long rate; int escr; struct clk* clk; } ;
struct clk {int dummy; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (struct clk*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct clk *VAR_0, unsigned long VAR_1,
     u32 VAR_2, struct du_clk_params *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 u32 VAR_6;





 if (VAR_3->diff == 0)
  return;





 VAR_4 = FUNC_3(VAR_0, VAR_1);
 VAR_6 = FUNC_2(FUNC_0(VAR_4, VAR_1), 1UL, 64UL) - 1;
 VAR_5 = FUNC_1(VAR_4 / (VAR_6 + 1) - VAR_1);





 if (VAR_5 < VAR_3->diff) {
  VAR_3->clk = VAR_0;
  VAR_3->rate = VAR_4;
  VAR_3->diff = VAR_5;
  VAR_3->escr = VAR_2 | VAR_6;
 }
}
