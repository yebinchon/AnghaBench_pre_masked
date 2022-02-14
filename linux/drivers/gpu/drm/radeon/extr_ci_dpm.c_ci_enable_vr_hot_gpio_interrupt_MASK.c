
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int platform_caps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_2)
{
 if (VAR_2->pm.dpm.platform_caps & VAR_0)
  FUNC_0(VAR_2, VAR_1);
}
