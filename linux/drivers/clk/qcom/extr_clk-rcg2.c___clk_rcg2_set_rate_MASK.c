
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_tbl {int dummy; } ;
struct clk_rcg2 {int freq_tbl; } ;
struct clk_hw {int dummy; } ;
typedef enum freq_policy { ____Placeholder_freq_policy } freq_policy ;



 int VAR_0 ;

 int FUNC_0 (struct clk_rcg2*,struct freq_tbl const*) ;
 struct freq_tbl* FUNC_1 (int ,unsigned long) ;
 struct freq_tbl* FUNC_2 (int ,unsigned long) ;
 struct clk_rcg2* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
          enum freq_policy VAR_3)
{
 struct clk_rcg2 *VAR_4 = FUNC_3(VAR_1);
 const struct freq_tbl *VAR_5;

 switch (VAR_3) {
 case 128:
  VAR_5 = FUNC_2(VAR_4->freq_tbl, VAR_2);
  break;
 case 129:
  VAR_5 = FUNC_1(VAR_4->freq_tbl, VAR_2);
  break;
 default:
  return -VAR_0;
 };

 if (!VAR_5)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_5);
}
