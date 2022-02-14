
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rcg2 {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_rcg2* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct clk_rcg2*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct clk_rcg2 *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;





 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0);
}
