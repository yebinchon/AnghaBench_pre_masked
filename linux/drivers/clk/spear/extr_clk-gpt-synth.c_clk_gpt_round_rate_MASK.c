
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_gpt {int rtbl_cnt; } ;


 long FUNC_0 (struct clk_hw*,unsigned long,unsigned long,int ,int ,int*) ;
 int VAR_0 ;
 struct clk_gpt* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
  unsigned long *VAR_3)
{
 struct clk_gpt *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 return FUNC_0(VAR_1, VAR_2, *VAR_3, VAR_0,
   VAR_4->rtbl_cnt, &VAR_5);
}
