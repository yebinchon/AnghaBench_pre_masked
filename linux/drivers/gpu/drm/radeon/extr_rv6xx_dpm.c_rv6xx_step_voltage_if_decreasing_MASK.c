
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vddc; } ;
struct rv6xx_ps {TYPE_1__ low; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 struct rv6xx_ps* FUNC_0 (struct radeon_ps*) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_0,
         struct radeon_ps *VAR_1,
         struct radeon_ps *VAR_2)
{
 struct rv6xx_ps *VAR_3 = FUNC_0(VAR_1);
 struct rv6xx_ps *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3->low.vddc < VAR_4->low.vddc)
  return FUNC_1(VAR_0,
          VAR_4->low.vddc,
          VAR_3->low.vddc);
 else
  return 0;
}
