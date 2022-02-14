
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_branch {int dummy; } ;


 int FUNC_0 (struct clk_branch*,int,int (*) (struct clk_branch const*,int)) ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct clk_hw*) ;
 struct clk_branch* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0, bool VAR_1,
  bool (VAR_2)(const struct clk_branch *, bool))
{
 struct clk_branch *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 if (VAR_1) {
  VAR_4 = FUNC_2(VAR_0);
  if (VAR_4)
   return VAR_4;
 } else {
  FUNC_1(VAR_0);
 }

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
