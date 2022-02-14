
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {int** dimm_csmap; int ranksperchan; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct mem_ctl_info *VAR_2)
{
 struct i5100_priv *VAR_3 = VAR_2->pvt_info;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   VAR_3->dimm_csmap[VAR_4][VAR_5] = -1;
 }


 if (VAR_3->ranksperchan == 4) {
  VAR_3->dimm_csmap[0][0] = 0;
  VAR_3->dimm_csmap[0][1] = 3;
  VAR_3->dimm_csmap[1][0] = 1;
  VAR_3->dimm_csmap[1][1] = 2;
  VAR_3->dimm_csmap[2][0] = 2;
  VAR_3->dimm_csmap[3][0] = 3;
 } else {
  VAR_3->dimm_csmap[0][0] = 0;
  VAR_3->dimm_csmap[0][1] = 1;
  VAR_3->dimm_csmap[1][0] = 2;
  VAR_3->dimm_csmap[1][1] = 3;
  VAR_3->dimm_csmap[2][0] = 4;
  VAR_3->dimm_csmap[2][1] = 5;
 }
}
