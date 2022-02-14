
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct exynos_adc {int regs; TYPE_1__* data; int pmu_map; } ;
struct TYPE_2__ {int phy_offset; scalar_t__ needs_adc_phy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct exynos_adc *VAR_1)
{
 u32 VAR_2;

 if (VAR_1->data->needs_adc_phy)
  FUNC_2(VAR_1->pmu_map, VAR_1->data->phy_offset, 0);

 VAR_2 = FUNC_1(FUNC_0(VAR_1->regs));
 VAR_2 |= VAR_0;
 FUNC_3(VAR_2, FUNC_0(VAR_1->regs));
}
