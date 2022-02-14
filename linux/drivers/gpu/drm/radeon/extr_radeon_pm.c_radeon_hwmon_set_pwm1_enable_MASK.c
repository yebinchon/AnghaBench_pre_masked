
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {TYPE_2__* asic; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int (* fan_ctrl_set_mode ) (struct radeon_device*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ dpm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct radeon_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,int*) ;
 int FUNC_2 (struct radeon_device*,int ) ;
 int FUNC_3 (struct radeon_device*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4,
         size_t VAR_5)
{
 struct radeon_device *VAR_6 = FUNC_0(VAR_2);
 int VAR_7;
 int VAR_8;

 if(!VAR_6->asic->dpm.fan_ctrl_set_mode)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;

 switch (VAR_8) {
 case 1:
  VAR_6->asic->dpm.fan_ctrl_set_mode(VAR_6, VAR_1);
  break;
 default:
  VAR_6->asic->dpm.fan_ctrl_set_mode(VAR_6, 0);
  break;
 }

 return VAR_5;
}
