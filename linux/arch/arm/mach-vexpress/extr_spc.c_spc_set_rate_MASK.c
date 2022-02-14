
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_spc {int cluster; } ;
struct clk_hw {int dummy; } ;


 struct clk_spc* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2)
{
 struct clk_spc *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_3->cluster, VAR_1 / 1000);
}
