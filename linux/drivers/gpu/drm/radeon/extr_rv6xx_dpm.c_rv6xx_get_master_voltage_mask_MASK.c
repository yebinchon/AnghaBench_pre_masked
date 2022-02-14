
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int * vddc; } ;
struct rv6xx_power_info {TYPE_1__ hw; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*,int ,int ,int *,int *) ;
 struct rv6xx_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static u64 FUNC_2(struct radeon_device *VAR_2)
{
 struct rv6xx_power_info *VAR_3 = FUNC_1(VAR_2);
 u64 VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  u32 VAR_6, VAR_7;
  int VAR_8;

  VAR_8 = FUNC_0(VAR_2,
           VAR_3->hw.vddc[VAR_5],
           VAR_1,
           &VAR_7, &VAR_6);

  if (VAR_8 == 0)
   VAR_4 |= VAR_6;
 }

 return VAR_4;
}
