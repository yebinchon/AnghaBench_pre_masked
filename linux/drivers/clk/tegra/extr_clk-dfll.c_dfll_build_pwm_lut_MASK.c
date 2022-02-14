
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tegra_dfll {unsigned long* lut_uv; int* lut; int lut_size; int lut_bottom; unsigned long dvco_rate_min; TYPE_2__* soc; int dev; } ;
struct TYPE_4__ {TYPE_1__* cvb; } ;
struct TYPE_3__ {int min_millivolts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 unsigned long FUNC_1 (struct tegra_dfll*,int) ;

__attribute__((used)) static int FUNC_2(struct tegra_dfll *VAR_2, unsigned long VAR_3)
{
 int VAR_4;
 unsigned long VAR_5, VAR_6;
 u8 VAR_7 = VAR_1;
 int VAR_8 = VAR_2->soc->cvb->min_millivolts * 1000;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_6 = VAR_2->lut_uv[VAR_4];


  VAR_6 = (VAR_6 / 1000) * 1000;
  if (VAR_6 > VAR_3)
   break;

  VAR_2->lut[VAR_4] = VAR_4;
  if ((VAR_7 == VAR_1) && (VAR_6 >= VAR_8))
   VAR_7 = VAR_4;
 }


 VAR_2->lut_size = VAR_4;
 if ((VAR_7 == VAR_1) ||
     (VAR_7 + 1 >= VAR_2->lut_size)) {
  FUNC_0(VAR_2->dev, "no voltage above DFLL minimum %d mV\n",
   VAR_2->soc->cvb->min_millivolts);
  return -VAR_0;
 }
 VAR_2->lut_bottom = VAR_7;


 VAR_5 = FUNC_1(VAR_2, VAR_2->lut_bottom);
 if (!VAR_5) {
  FUNC_0(VAR_2->dev, "no opp below DFLL minimum voltage %d mV\n",
   VAR_2->soc->cvb->min_millivolts);
  return -VAR_0;
 }
 VAR_2->dvco_rate_min = VAR_5;

 return 0;
}
