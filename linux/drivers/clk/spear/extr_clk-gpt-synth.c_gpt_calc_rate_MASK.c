
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpt_rate_tbl {int nscale; int mscale; } ;
struct clk_hw {int dummy; } ;
struct clk_gpt {struct gpt_rate_tbl* rtbl; } ;


 struct clk_gpt* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
  int VAR_2)
{
 struct clk_gpt *VAR_3 = FUNC_0(VAR_0);
 struct gpt_rate_tbl *VAR_4 = VAR_3->rtbl;

 VAR_1 /= ((1 << (VAR_4[VAR_2].nscale + 1)) * (VAR_4[VAR_2].mscale + 1));

 return VAR_1;
}
