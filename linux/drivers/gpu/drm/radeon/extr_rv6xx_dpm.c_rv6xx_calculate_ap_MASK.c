
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int sclk; } ;
struct TYPE_6__ {int sclk; } ;
struct TYPE_5__ {int sclk; } ;
struct rv6xx_ps {TYPE_3__ high; TYPE_2__ medium; TYPE_1__ low; } ;
struct TYPE_8__ {int* rp; scalar_t__* lp; } ;
struct rv6xx_power_info {TYPE_4__ hw; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int ,scalar_t__*,int*) ;
 struct rv6xx_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_6,
          struct rv6xx_ps *VAR_7)
{
 struct rv6xx_power_info *VAR_8 = FUNC_1(VAR_6);

 VAR_8->hw.lp[0] = 0;
 VAR_8->hw.rp[VAR_3 - 1]
  = 100;

 FUNC_0(VAR_7->low.sclk,
     VAR_7->medium.sclk,
     VAR_0,
     VAR_2,
     VAR_4,
     &VAR_8->hw.lp[1],
     &VAR_8->hw.rp[0]);

 FUNC_0(VAR_7->medium.sclk,
     VAR_7->high.sclk,
     VAR_0,
     VAR_1,
     VAR_5,
     &VAR_8->hw.lp[2],
     &VAR_8->hw.rp[1]);

}
