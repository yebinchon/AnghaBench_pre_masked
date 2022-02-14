
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {TYPE_2__* asic; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int (* get_fan_speed_percent ) (struct radeon_device*,int*) ;} ;
struct TYPE_4__ {TYPE_1__ dpm; } ;


 struct radeon_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct radeon_device*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct radeon_device *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_3->asic->dpm.get_fan_speed_percent(VAR_3, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_5 = (VAR_5 * 255) / 100;

 return FUNC_1(VAR_2, "%i\n", VAR_5);
}
