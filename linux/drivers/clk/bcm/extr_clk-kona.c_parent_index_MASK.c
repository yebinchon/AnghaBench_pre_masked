
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct bcm_clk_sel {scalar_t__ parent_count; size_t* parent_sel; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u8 FUNC_1(struct bcm_clk_sel *VAR_2, u8 VAR_3)
{
 u8 VAR_4;

 FUNC_0(VAR_2->parent_count > (u32)VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_2->parent_count; VAR_4++)
  if (VAR_2->parent_sel[VAR_4] == VAR_3)
   return VAR_4;
 return VAR_0;
}
