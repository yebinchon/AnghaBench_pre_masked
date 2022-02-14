
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rpmh {unsigned long aggr_state; unsigned long unit; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_rpmh*,int) ;
 struct clk_rpmh* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
     unsigned long VAR_2)
{
 struct clk_rpmh *VAR_3 = FUNC_2(VAR_0);

 VAR_3->aggr_state = VAR_1 / VAR_3->unit;




 if (FUNC_0(VAR_0))
  FUNC_1(VAR_3, 1);

 return 0;
}
