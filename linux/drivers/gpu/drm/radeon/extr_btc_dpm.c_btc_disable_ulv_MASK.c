
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ supported; } ;
struct evergreen_power_info {TYPE_1__ ulv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_3)
{
 struct evergreen_power_info *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->ulv.supported) {
  if (FUNC_1(VAR_3, VAR_1) != VAR_2)
   return -VAR_0;
 }
 return 0;
}
