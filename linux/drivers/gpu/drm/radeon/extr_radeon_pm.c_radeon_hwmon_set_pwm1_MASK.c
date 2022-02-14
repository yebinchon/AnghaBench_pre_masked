
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
struct TYPE_3__ {int (* set_fan_speed_percent ) (struct radeon_device*,int) ;} ;
struct TYPE_4__ {TYPE_1__ dpm; } ;


 struct radeon_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,int*) ;
 int FUNC_2 (struct radeon_device*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct radeon_device *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1(VAR_2, 10, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_6 = (VAR_6 * 100) / 255;

 VAR_5 = VAR_4->asic->dpm.set_fan_speed_percent(VAR_4, VAR_6);
 if (VAR_5)
  return VAR_5;

 return VAR_3;
}
