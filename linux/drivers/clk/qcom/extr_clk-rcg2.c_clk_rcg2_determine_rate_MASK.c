
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rcg2 {int freq_tbl; } ;
struct clk_rate_request {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*,int ,struct clk_rate_request*,int ) ;
 struct clk_rcg2* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1,
       struct clk_rate_request *VAR_2)
{
 struct clk_rcg2 *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_1, VAR_3->freq_tbl, VAR_2, VAR_0);
}
