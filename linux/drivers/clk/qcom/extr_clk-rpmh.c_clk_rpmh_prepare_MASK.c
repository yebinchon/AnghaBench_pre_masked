
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rpmh {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_rpmh*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 struct clk_rpmh* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1)
{
 struct clk_rpmh *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = 0;

 FUNC_1(&VAR_0);
 VAR_3 = FUNC_0(VAR_2, 1);
 FUNC_2(&VAR_0);

 return VAR_3;
}
