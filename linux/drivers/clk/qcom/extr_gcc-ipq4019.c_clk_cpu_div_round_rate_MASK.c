
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_tbl {long freq; int src; } ;
struct clk_hw {int dummy; } ;
struct clk_fepll {int freq_tbl; } ;


 long VAR_0 ;
 struct clk_hw* FUNC_0 (struct clk_hw*,int ) ;
 unsigned long FUNC_1 (struct clk_hw*) ;
 struct freq_tbl* FUNC_2 (int ,unsigned long) ;
 struct clk_fepll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
       unsigned long *VAR_3)
{
 struct clk_fepll *VAR_4 = FUNC_3(VAR_1);
 struct clk_hw *VAR_5;
 const struct freq_tbl *VAR_6;

 VAR_6 = FUNC_2(VAR_4->freq_tbl, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_1, VAR_6->src);
 *VAR_3 = FUNC_1(VAR_5);

 return VAR_6->freq;
}
