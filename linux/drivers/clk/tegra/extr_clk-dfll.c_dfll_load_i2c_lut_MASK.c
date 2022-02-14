
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dfll {int lut_min; int lut_max; scalar_t__ lut_base; int * lut; int vdd_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct tegra_dfll*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct tegra_dfll *VAR_1)
{
 int VAR_2, VAR_3;
 u32 VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_2 < VAR_1->lut_min)
   VAR_3 = VAR_1->lut_min;
  else if (VAR_2 > VAR_1->lut_max)
   VAR_3 = VAR_1->lut_max;
  else
   VAR_3 = VAR_2;

  VAR_4 = FUNC_2(VAR_1->vdd_reg,
           VAR_1->lut[VAR_3]);
  FUNC_0(VAR_4, VAR_1->lut_base + VAR_2 * 4);
 }

 FUNC_1(VAR_1);
}
