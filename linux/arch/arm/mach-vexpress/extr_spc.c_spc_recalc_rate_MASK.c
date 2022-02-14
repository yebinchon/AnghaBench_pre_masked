
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_spc {int cluster; } ;
struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 struct clk_spc* FUNC_0 (struct clk_hw*) ;
 scalar_t__ FUNC_1 (int ,int*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_1,
  unsigned long VAR_2)
{
 struct clk_spc *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4;

 if (FUNC_1(VAR_3->cluster, &VAR_4))
  return -VAR_0;

 return VAR_4 * 1000;
}
