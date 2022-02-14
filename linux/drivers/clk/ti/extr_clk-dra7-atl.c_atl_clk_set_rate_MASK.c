
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dra7_atl_desc {int divider; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dra7_atl_desc* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_1(struct clk_hw *VAR_2, unsigned long VAR_3,
       unsigned long VAR_4)
{
 struct dra7_atl_desc *VAR_5;
 u32 VAR_6;

 if (!VAR_2 || !VAR_3)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = ((VAR_4 + VAR_3 / 2) / VAR_3) - 1;
 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;

 VAR_5->divider = VAR_6 + 1;

 return 0;
}
