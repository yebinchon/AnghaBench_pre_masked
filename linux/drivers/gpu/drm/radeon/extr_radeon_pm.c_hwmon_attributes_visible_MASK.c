
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int umode_t ;
struct TYPE_24__ {scalar_t__ pm_method; scalar_t__ no_fan; } ;
struct radeon_device {TYPE_7__* asic; TYPE_3__ pm; } ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_30__ {struct attribute attr; } ;
struct TYPE_29__ {struct attribute attr; } ;
struct TYPE_27__ {int get_fan_speed_percent; int set_fan_speed_percent; int fan_ctrl_set_mode; int fan_ctrl_get_mode; } ;
struct TYPE_28__ {TYPE_6__ dpm; } ;
struct TYPE_26__ {struct attribute attr; } ;
struct TYPE_25__ {struct attribute attr; } ;
struct TYPE_23__ {struct attribute attr; } ;
struct TYPE_22__ {struct attribute attr; } ;
struct TYPE_21__ {TYPE_4__ dev_attr; } ;
struct TYPE_20__ {TYPE_5__ dev_attr; } ;
struct TYPE_19__ {TYPE_8__ dev_attr; } ;
struct TYPE_18__ {TYPE_9__ dev_attr; } ;
struct TYPE_17__ {TYPE_1__ dev_attr; } ;
struct TYPE_16__ {TYPE_2__ dev_attr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct radeon_device* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct kobject*) ;
 TYPE_15__ VAR_3 ;
 TYPE_14__ VAR_4 ;
 TYPE_13__ VAR_5 ;
 TYPE_12__ VAR_6 ;
 TYPE_11__ VAR_7 ;
 TYPE_10__ VAR_8 ;

__attribute__((used)) static umode_t FUNC_2(struct kobject *VAR_9,
     struct attribute *VAR_10, int VAR_11)
{
 struct device *VAR_12 = FUNC_1(VAR_9);
 struct radeon_device *VAR_13 = FUNC_0(VAR_12);
 umode_t VAR_14 = VAR_10->mode;


 if (VAR_13->pm.pm_method != VAR_0 &&
     (VAR_10 == &VAR_7.dev_attr.attr ||
      VAR_10 == &VAR_8.dev_attr.attr ||
      VAR_10 == &VAR_3 ||
      VAR_10 == &VAR_4.dev_attr.attr ||
      VAR_10 == &VAR_5.dev_attr.attr ||
      VAR_10 == &VAR_6.dev_attr.attr))
  return 0;


 if (VAR_13->pm.no_fan &&
     (VAR_10 == &VAR_3 ||
      VAR_10 == &VAR_4.dev_attr.attr ||
      VAR_10 == &VAR_5.dev_attr.attr ||
      VAR_10 == &VAR_6.dev_attr.attr))
  return 0;


 if ((!VAR_13->asic->dpm.get_fan_speed_percent &&
      VAR_10 == &VAR_3) ||
     (!VAR_13->asic->dpm.fan_ctrl_get_mode &&
      VAR_10 == &VAR_4.dev_attr.attr))
  VAR_14 &= ~VAR_1;

 if ((!VAR_13->asic->dpm.set_fan_speed_percent &&
      VAR_10 == &VAR_3) ||
     (!VAR_13->asic->dpm.fan_ctrl_set_mode &&
      VAR_10 == &VAR_4.dev_attr.attr))
  VAR_14 &= ~VAR_2;


 if ((!VAR_13->asic->dpm.set_fan_speed_percent &&
      !VAR_13->asic->dpm.get_fan_speed_percent) &&
     (VAR_10 == &VAR_5.dev_attr.attr ||
      VAR_10 == &VAR_6.dev_attr.attr))
  return 0;

 return VAR_14;
}
