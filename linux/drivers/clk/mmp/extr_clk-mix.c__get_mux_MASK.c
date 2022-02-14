
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_clk_mix {int mux_flags; unsigned int* mux_table; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct mmp_clk_mix *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_2->hw);
 int VAR_5;

 if (VAR_2->mux_flags & VAR_0)
  return FUNC_1(VAR_3) - 1;
 if (VAR_2->mux_flags & VAR_1)
  return VAR_3 - 1;
 if (VAR_2->mux_table) {
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   if (VAR_2->mux_table[VAR_5] == VAR_3)
    return VAR_5;
  if (VAR_5 == VAR_4)
   return 0;
 }

 return VAR_3;
}
