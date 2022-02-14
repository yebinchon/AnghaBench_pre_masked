
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int lpFanSpeedValue ;
struct TYPE_13__ {int enabled; TYPE_2__* hm_device; scalar_t__ hm_sysfs; scalar_t__ hm_adl; } ;
typedef TYPE_3__ hwmon_ctx_t ;
struct TYPE_14__ {TYPE_5__* backend_ctx; TYPE_3__* hwmon_ctx; } ;
typedef TYPE_4__ hashcat_ctx_t ;
struct TYPE_15__ {TYPE_1__* devices_param; } ;
typedef TYPE_5__ backend_ctx_t ;
struct TYPE_16__ {int iSize; int iFanSpeed; int iSpeedType; } ;
struct TYPE_12__ {int fanpolicy_get_supported; int od_version; int fanspeed_get_supported; int adl; } ;
struct TYPE_11__ {int is_cuda; int is_opencl; int opencl_device_type; scalar_t__ opencl_device_vendor_id; } ;
typedef TYPE_6__ ADLFanSpeedValue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ,int ,TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;

int FUNC_2 (hashcat_ctx_t *VAR_5, const int VAR_6)
{
  hwmon_ctx_t *VAR_7 = VAR_5->hwmon_ctx;
  backend_ctx_t *VAR_8 = VAR_5->backend_ctx;

  if (VAR_7->enabled == 0) return -1;

  if (VAR_7->hm_device[VAR_6].fanpolicy_get_supported == 0) return -1;

  if (VAR_8->devices_param[VAR_6].is_cuda == 1)
  {
    return 1;
  }

  if (VAR_8->devices_param[VAR_6].is_opencl == 1)
  {
    if ((VAR_8->devices_param[VAR_6].opencl_device_type & VAR_2) == 0) return -1;

    if (VAR_8->devices_param[VAR_6].opencl_device_vendor_id == VAR_3)
    {
      if (VAR_7->hm_adl)
      {
        if (VAR_7->hm_device[VAR_6].od_version == 5)
        {
          ADLFanSpeedValue VAR_9;

          FUNC_1 (&VAR_9, 0, sizeof (VAR_9));

          VAR_9.iSize = sizeof (VAR_9);
          VAR_9.iSpeedType = VAR_1;

          if (FUNC_0 (VAR_5, VAR_7->hm_device[VAR_6].adl, 0, &VAR_9) == -1)
          {
            VAR_7->hm_device[VAR_6].fanpolicy_get_supported = 0;
            VAR_7->hm_device[VAR_6].fanspeed_get_supported = 0;

            return -1;
          }

          return (VAR_9.iFanSpeed & VAR_0) ? 0 : 1;
        }

        if (VAR_7->hm_device[VAR_6].od_version == 6)
        {
          return 1;
        }
      }

      if (VAR_7->hm_sysfs)
      {
        return 1;
      }
    }

    if (VAR_8->devices_param[VAR_6].opencl_device_vendor_id == VAR_4)
    {
      return 1;
    }
  }

  VAR_7->hm_device[VAR_6].fanpolicy_get_supported = 0;
  VAR_7->hm_device[VAR_6].fanspeed_get_supported = 0;

  return -1;
}
