
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct parent_map {scalar_t__ src; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;

int FUNC_1(struct clk_hw *VAR_1, const struct parent_map *VAR_2, u8 VAR_3)
{
 int VAR_4, VAR_5 = FUNC_0(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  if (VAR_3 == VAR_2[VAR_4].src)
   return VAR_4;

 return -VAR_0;
}
