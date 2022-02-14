
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv7xx_power_info {int pcie_gen2; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*,int ,int) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_4)
{
 struct rv7xx_power_info *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_2);

 if ((VAR_6 & VAR_0) &&
     (VAR_6 & VAR_1))
  VAR_5->pcie_gen2 = 1;
 else
  VAR_5->pcie_gen2 = 0;

 if (!VAR_5->pcie_gen2)
  FUNC_1(VAR_4, VAR_3, 1);

 return 0;
}
