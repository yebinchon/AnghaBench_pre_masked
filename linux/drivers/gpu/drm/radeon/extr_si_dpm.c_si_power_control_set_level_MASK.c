
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ps {int dummy; } ;
struct TYPE_3__ {struct radeon_ps* requested_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_0)
{
 struct radeon_ps *VAR_1 = VAR_0->pm.dpm.requested_ps;
 int VAR_2;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2)
  return VAR_2;
 return 0;
}
