
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frac_rate_tbl {int div; } ;
struct clk_hw {int dummy; } ;
struct clk_frac {struct frac_rate_tbl* rtbl; } ;


 struct clk_frac* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
  int VAR_2)
{
 struct clk_frac *VAR_3 = FUNC_0(VAR_0);
 struct frac_rate_tbl *VAR_4 = VAR_3->rtbl;

 VAR_1 /= 10000;
 VAR_1 <<= 14;
 VAR_1 /= (2 * VAR_4[VAR_2].div);
 VAR_1 *= 10000;

 return VAR_1;
}
