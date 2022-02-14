
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pcie_gen2; int low_sclk_index; int low_mclk_index; int low_vddc_index; } ;
struct rv6xx_power_info {TYPE_1__ hw; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct radeon_device*,size_t,int ) ;
 int FUNC_1 (struct radeon_device*,size_t,int ) ;
 int FUNC_2 (struct radeon_device*,size_t,int ) ;
 int FUNC_3 (struct radeon_device*,size_t,int ) ;
 int FUNC_4 (struct radeon_device*,size_t,int ) ;
 struct rv6xx_power_info* FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_2)
{
 struct rv6xx_power_info *VAR_3 = FUNC_5(VAR_2);

 FUNC_3(VAR_2, VAR_1,
        VAR_3->hw.low_vddc_index);
 FUNC_1(VAR_2, VAR_1,
          VAR_3->hw.low_mclk_index);
 FUNC_0(VAR_2, VAR_1,
          VAR_3->hw.low_sclk_index);
 FUNC_4(VAR_2, VAR_1,
       VAR_0);
 FUNC_2(VAR_2, VAR_1,
           VAR_3->hw.pcie_gen2[VAR_1]);
}
