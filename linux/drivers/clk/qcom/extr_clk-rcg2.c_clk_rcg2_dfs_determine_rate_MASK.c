
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rcg2 {int freq_tbl; } ;
struct clk_rate_request {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*,struct clk_rate_request*) ;
 int FUNC_2 (struct clk_rcg2*) ;
 int FUNC_3 (char*,int ) ;
 struct clk_rcg2* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_0,
       struct clk_rate_request *VAR_1)
{
 struct clk_rcg2 *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 if (!VAR_2->freq_tbl) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3) {
   FUNC_3("Failed to update DFS tables for %s\n",
     FUNC_0(VAR_0));
   return VAR_3;
  }
 }

 return FUNC_1(VAR_0, VAR_1);
}
