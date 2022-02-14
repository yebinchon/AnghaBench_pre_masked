
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_tbl {int dummy; } ;
struct clk_rcg2 {int freq_tbl; } ;
struct clk_hw {int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct clk_rcg2*,struct freq_tbl const*) ;
 int FUNC_2 (struct clk_hw*,struct freq_tbl const*) ;
 struct freq_tbl* FUNC_3 (int ,unsigned long) ;
 struct clk_rcg2* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2,
        unsigned long VAR_3)
{
 struct clk_rcg2 *VAR_4 = FUNC_4(VAR_1);
 const struct freq_tbl *VAR_5;

 VAR_5 = FUNC_3(VAR_4->freq_tbl, VAR_2);
 if (!VAR_5)
  return -VAR_0;





 if (!FUNC_0(VAR_1->clk))
  return FUNC_1(VAR_4, VAR_5);

 return FUNC_2(VAR_1, VAR_5);
}
