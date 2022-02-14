
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rv6xx_power_info {int bsp; int bsu; } ;
struct TYPE_3__ {int reference_freq; } ;
struct TYPE_4__ {TYPE_1__ spll; } ;
struct radeon_device {TYPE_2__ clock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *,int *) ;
 int FUNC_1 (struct radeon_device*,int ,int ) ;
 struct rv6xx_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_1)
{
 struct rv6xx_power_info *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3 = VAR_1->clock.spll.reference_freq;

 FUNC_0(VAR_0,
          VAR_3, 16,
          &VAR_2->bsp,
          &VAR_2->bsu);

 FUNC_1(VAR_1, VAR_2->bsu, VAR_2->bsp);
}
