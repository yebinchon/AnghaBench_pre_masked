
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pp_hwmgr {scalar_t__ od_enabled; } ;
struct TYPE_6__ {scalar_t__ od_enabled; } ;
struct TYPE_5__ {scalar_t__ dpm_enabled; scalar_t__ int_hwmon_dev; } ;
struct TYPE_4__ {struct pp_hwmgr* pp_handle; } ;
struct amdgpu_device {scalar_t__ asic_type; int flags; int dev; scalar_t__ unique_id; TYPE_3__ smu; TYPE_2__ pm; TYPE_1__ powerplay; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;

void FUNC_3(struct amdgpu_device *VAR_25)
{
 struct pp_hwmgr *VAR_26 = VAR_25->powerplay.pp_handle;

 if (VAR_25->pm.dpm_enabled == 0)
  return;

 if (VAR_25->pm.int_hwmon_dev)
  FUNC_1(VAR_25->pm.int_hwmon_dev);
 FUNC_0(VAR_25->dev, &VAR_8);
 FUNC_0(VAR_25->dev, &VAR_7);

 FUNC_0(VAR_25->dev, &VAR_19);
 FUNC_0(VAR_25->dev, &VAR_9);
 FUNC_0(VAR_25->dev, &VAR_17);
 FUNC_0(VAR_25->dev, &VAR_23);

 FUNC_0(VAR_25->dev, &VAR_14);
 FUNC_0(VAR_25->dev, &VAR_12);
 if (VAR_25->asic_type >= VAR_2) {
  FUNC_0(VAR_25->dev, &VAR_15);
  if (VAR_25->asic_type != VAR_1)
   FUNC_0(VAR_25->dev, &VAR_10);
 }
 if (VAR_25->asic_type != VAR_1)
  FUNC_0(VAR_25->dev, &VAR_13);
 if (VAR_25->asic_type >= VAR_3)
  FUNC_0(VAR_25->dev, &VAR_11);
 FUNC_0(VAR_25->dev, &VAR_22);
 FUNC_0(VAR_25->dev, &VAR_18);
 FUNC_0(VAR_25->dev,
   &VAR_21);
 if ((FUNC_2(VAR_25) && VAR_25->smu.od_enabled) ||
     (!FUNC_2(VAR_25) && VAR_26->od_enabled))
  FUNC_0(VAR_25->dev,
    &VAR_20);
 FUNC_0(VAR_25->dev, &VAR_4);
 if (!(VAR_25->flags & VAR_0) &&
      (VAR_25->asic_type != VAR_2))
  FUNC_0(VAR_25->dev, &VAR_5);
 if (!(VAR_25->flags & VAR_0))
  FUNC_0(VAR_25->dev, &VAR_6);
 if (VAR_25->unique_id)
  FUNC_0(VAR_25->dev, &VAR_24);
 if ((VAR_25->asic_type >= VAR_2) &&
     !(VAR_25->flags & VAR_0))
  FUNC_0(VAR_25->dev, &VAR_16);
}
