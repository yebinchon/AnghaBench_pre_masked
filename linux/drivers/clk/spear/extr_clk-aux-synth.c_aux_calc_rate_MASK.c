
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct clk_hw {int dummy; } ;
struct clk_aux {struct aux_rate_tbl* rtbl; } ;
struct aux_rate_tbl {unsigned long xscale; unsigned long yscale; scalar_t__ eq; } ;


 struct clk_aux* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
  int VAR_2)
{
 struct clk_aux *VAR_3 = FUNC_0(VAR_0);
 struct aux_rate_tbl *VAR_4 = VAR_3->rtbl;
 u8 VAR_5 = VAR_4[VAR_2].eq ? 1 : 2;

 return (((VAR_1 / 10000) * VAR_4[VAR_2].xscale) /
   (VAR_4[VAR_2].yscale * VAR_5)) * 10000;
}
