
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct exynos_adc {int delay; int regs; TYPE_1__* data; int pmu_map; } ;
struct TYPE_2__ {int phy_offset; scalar_t__ needs_adc_phy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct exynos_adc *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->data->needs_adc_phy)
  FUNC_3(VAR_2->pmu_map, VAR_2->data->phy_offset, 1);


 VAR_3 = FUNC_1(49) | VAR_0;


 VAR_3 |= VAR_1;
 FUNC_4(VAR_3, FUNC_0(VAR_2->regs));


 FUNC_4(VAR_2->delay, FUNC_2(VAR_2->regs));
}
