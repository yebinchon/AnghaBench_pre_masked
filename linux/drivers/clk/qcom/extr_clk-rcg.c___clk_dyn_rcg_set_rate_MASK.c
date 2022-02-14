
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_tbl {int dummy; } ;
struct clk_hw {int dummy; } ;
struct clk_dyn_rcg {int freq_tbl; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_dyn_rcg*,struct freq_tbl const*) ;
 struct freq_tbl* FUNC_1 (int ,unsigned long) ;
 struct clk_dyn_rcg* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1, unsigned long VAR_2)
{
 struct clk_dyn_rcg *VAR_3 = FUNC_2(VAR_1);
 const struct freq_tbl *VAR_4;

 VAR_4 = FUNC_1(VAR_3->freq_tbl, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_4);
}
