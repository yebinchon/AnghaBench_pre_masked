
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t low_mclk_index; int * pcie_gen2; int medium_sclk_index; int * mclks; } ;
struct rv6xx_power_info {TYPE_1__ hw; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct radeon_device*,int ,int ) ;
 int FUNC_1 (struct radeon_device*,int ,int ) ;
 int FUNC_2 (struct radeon_device*,int ,int ) ;
 int FUNC_3 (struct radeon_device*,int ,int) ;
 int FUNC_4 (struct radeon_device*,int ,int ) ;
 int FUNC_5 (struct radeon_device*,int ,int) ;
 struct rv6xx_power_info* FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct radeon_device *VAR_4)
{
 struct rv6xx_power_info *VAR_5 = FUNC_6(VAR_4);

 FUNC_7(VAR_4,
       VAR_1,
       VAR_5->hw.mclks[VAR_5->hw.low_mclk_index]);

 FUNC_3(VAR_4, VAR_3, 1);

 FUNC_1(VAR_4, VAR_3,
          VAR_1);
 FUNC_0(VAR_4, VAR_3,
          VAR_5->hw.medium_sclk_index);

 FUNC_4(VAR_4, VAR_3,
       VAR_0);

 FUNC_5(VAR_4, VAR_3, 0);

 FUNC_2(VAR_4, VAR_3,
           VAR_5->hw.pcie_gen2[VAR_2]);
}
