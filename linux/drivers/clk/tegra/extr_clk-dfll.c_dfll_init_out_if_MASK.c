
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct tegra_dfll {int lut_min; int lut_bottom; unsigned long lut_max; unsigned long lut_size; int lut_safe; scalar_t__ pmu_if; unsigned long reg_init_uV; unsigned long* lut_uv; TYPE_2__* soc; } ;
struct TYPE_3__ {int step_uv; } ;
struct TYPE_4__ {TYPE_1__ alignment; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (unsigned long,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct tegra_dfll*,unsigned int) ;
 int FUNC_2 (struct tegra_dfll*,int,int ) ;
 int FUNC_3 (struct tegra_dfll*) ;
 int FUNC_4 (struct tegra_dfll*) ;
 int FUNC_5 (struct tegra_dfll*) ;
 int FUNC_6 (struct tegra_dfll*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_7(struct tegra_dfll *VAR_10)
{
 u32 VAR_11;

 VAR_10->lut_min = VAR_10->lut_bottom;
 VAR_10->lut_max = VAR_10->lut_size - 1;
 VAR_10->lut_safe = VAR_10->lut_min + (VAR_10->lut_min < VAR_10->lut_max ? 1 : 0);


 FUNC_6(VAR_10, 0, VAR_4);
 FUNC_5(VAR_10);

 VAR_11 = (VAR_10->lut_safe << VAR_7) |
       (VAR_10->lut_max << VAR_5) |
       (VAR_10->lut_min << VAR_6);
 FUNC_6(VAR_10, VAR_11, VAR_4);
 FUNC_5(VAR_10);

 FUNC_6(VAR_10, 0, VAR_8);
 FUNC_2(VAR_10, 0, VAR_0);
 FUNC_2(VAR_10, VAR_1 | VAR_2,
   VAR_3);

 if (VAR_10->pmu_if == VAR_9) {
  u32 VAR_12 = VAR_10->reg_init_uV;
  int VAR_13 = VAR_10->soc->alignment.step_uv;
  unsigned long VAR_14 = VAR_10->lut_uv[0];


  if ((VAR_12 >= VAR_14) && VAR_13) {
   unsigned int VAR_15;

   VAR_15 = FUNC_0((VAR_12 - VAR_14), VAR_13);
   FUNC_1(VAR_10, VAR_15);
  }
 } else {
  FUNC_4(VAR_10);
  FUNC_3(VAR_10);
 }
}
