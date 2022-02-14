
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct radeon_device {TYPE_2__* asic; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ (* fan_ctrl_get_mode ) (struct radeon_device*) ;} ;
struct TYPE_4__ {TYPE_1__ dpm; } ;


 scalar_t__ VAR_0 ;
 struct radeon_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct radeon_device *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5 = 0;

 if (VAR_4->asic->dpm.fan_ctrl_get_mode)
  VAR_5 = VAR_4->asic->dpm.fan_ctrl_get_mode(VAR_4);


 return FUNC_1(VAR_3, "%i\n", VAR_5 == VAR_0 ? 1 : 2);
}
