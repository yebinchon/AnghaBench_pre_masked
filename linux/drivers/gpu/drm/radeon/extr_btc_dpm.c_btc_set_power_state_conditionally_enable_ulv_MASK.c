
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ supported; } ;
struct evergreen_power_info {TYPE_1__ ulv; } ;


 int FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_2 (struct radeon_device*) ;
 struct evergreen_power_info* FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_0,
       struct radeon_ps *VAR_1)
{
 int VAR_2 = 0;
 struct evergreen_power_info *VAR_3 = FUNC_3(VAR_0);

 if (VAR_3->ulv.supported) {
  if (FUNC_1(VAR_0, VAR_1)) {

   VAR_2 = FUNC_2(VAR_0);
   if (VAR_2 == 0)
    VAR_2 = FUNC_0(VAR_0);
  }
 }

 return VAR_2;
}
