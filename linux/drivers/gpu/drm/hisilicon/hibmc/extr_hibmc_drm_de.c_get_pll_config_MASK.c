
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {unsigned long hdisplay; unsigned long vdisplay; int pll2_config_value; int pll1_config_value; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_3, unsigned long VAR_4,
      u32 *VAR_5, u32 *VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_0(VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (VAR_2[VAR_7].hdisplay == VAR_3 &&
      VAR_2[VAR_7].vdisplay == VAR_4) {
   *VAR_5 = VAR_2[VAR_7].pll1_config_value;
   *VAR_6 = VAR_2[VAR_7].pll2_config_value;
   return;
  }
 }


 *VAR_5 = VAR_0;
 *VAR_6 = VAR_1;
}
