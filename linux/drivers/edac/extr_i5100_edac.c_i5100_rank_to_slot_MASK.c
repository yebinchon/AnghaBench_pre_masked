
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {int** dimm_numrank; int** dimm_csmap; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct mem_ctl_info *VAR_1,
         int VAR_2, int VAR_3)
{
 const struct i5100_priv *VAR_4 = VAR_1->pvt_info;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  int VAR_6;
  const int VAR_7 = VAR_4->dimm_numrank[VAR_2][VAR_5];

  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   if (VAR_4->dimm_csmap[VAR_5][VAR_6] == VAR_3)
    return VAR_5 * 2 + VAR_2;
 }

 return -1;
}
