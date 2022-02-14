
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dra7_atl_desc {unsigned long divider; } ;
struct clk_hw {int dummy; } ;


 struct dra7_atl_desc* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct dra7_atl_desc *VAR_2 = FUNC_0(VAR_0);

 return VAR_1 / VAR_2->divider;
}
