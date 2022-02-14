
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u32 ;
typedef int lpFanSpeedValue ;
struct TYPE_18__ {int enabled; TYPE_2__* hm_device; scalar_t__ hm_nvml; scalar_t__ hm_sysfs; scalar_t__ hm_adl; } ;
typedef TYPE_3__ hwmon_ctx_t ;
struct TYPE_19__ {TYPE_5__* backend_ctx; TYPE_3__* hwmon_ctx; } ;
typedef TYPE_4__ hashcat_ctx_t ;
typedef int faninfo ;
struct TYPE_20__ {TYPE_1__* devices_param; } ;
typedef TYPE_5__ backend_ctx_t ;
struct TYPE_21__ {int iSize; int iFanSpeed; int iFanSpeedPercent; int iFlags; int iSpeedType; } ;
struct TYPE_17__ {int fanspeed_get_supported; int od_version; int nvml; int adl; } ;
struct TYPE_16__ {int is_cuda; int is_opencl; int opencl_device_type; scalar_t__ opencl_device_vendor_id; } ;
typedef TYPE_6__ ADLOD6FanSpeedInfo ;
typedef TYPE_6__ ADLFanSpeedValue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ,int ,TYPE_6__*) ;
 int FUNC_1 (TYPE_4__*,int ,TYPE_6__*) ;
 int FUNC_2 (TYPE_4__*,int ,int *) ;
 int FUNC_3 (TYPE_4__*,int const,int*) ;
 int FUNC_4 (TYPE_6__*,int ,int) ;

int FUNC_5 (hashcat_ctx_t *VAR_5, const int VAR_6)
{
  hwmon_ctx_t *VAR_7 = VAR_5->hwmon_ctx;
  backend_ctx_t *VAR_8 = VAR_5->backend_ctx;

  if (VAR_7->enabled == 0) return -1;

  if (VAR_7->hm_device[VAR_6].fanspeed_get_supported == 0) return -1;

  if (VAR_8->devices_param[VAR_6].is_cuda == 1)
  {
    if (VAR_7->hm_nvml)
    {
      int VAR_9 = 0;

      if (FUNC_2 (VAR_5, VAR_7->hm_device[VAR_6].nvml, (u32 *) &VAR_9) == -1)
      {
        VAR_7->hm_device[VAR_6].fanspeed_get_supported = 0;

        return -1;
      }

      return VAR_9;
    }
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
          ADLFanSpeedValue VAR_10;

          FUNC_4 (&VAR_10, 0, sizeof (VAR_10));

          VAR_10.iSize = sizeof (VAR_10);
          VAR_10.iSpeedType = VAR_1;
          VAR_10.iFlags = VAR_0;

          if (FUNC_0 (VAR_5, VAR_7->hm_device[VAR_6].adl, 0, &VAR_10) == -1)
          {
            VAR_7->hm_device[VAR_6].fanspeed_get_supported = 0;

            return -1;
          }

          return VAR_10.iFanSpeed;
        }

        if (VAR_7->hm_device[VAR_6].od_version == 6)
        {
          ADLOD6FanSpeedInfo VAR_11;

          FUNC_4 (&VAR_11, 0, sizeof (VAR_11));

          if (FUNC_1 (VAR_5, VAR_7->hm_device[VAR_6].adl, &VAR_11) == -1)
          {
            VAR_7->hm_device[VAR_6].fanspeed_get_supported = 0;

            return -1;
          }

          return VAR_11.iFanSpeedPercent;
        }
      }

      if (VAR_7->hm_sysfs)
      {
        int VAR_12 = 0;

        if (FUNC_3 (VAR_5, VAR_6, &VAR_12) == -1)
        {
          VAR_7->hm_device[VAR_6].fanspeed_get_supported = 0;

          return -1;
        }

        return VAR_12;
      }
    }

    if (VAR_8->devices_param[VAR_6].opencl_device_vendor_id == VAR_4)
    {
      if (VAR_7->hm_nvml)
      {
        int VAR_13 = 0;

        if (FUNC_2 (VAR_5, VAR_7->hm_device[VAR_6].nvml, (u32 *) &VAR_13) == -1)
        {
          VAR_7->hm_device[VAR_6].fanspeed_get_supported = 0;

          return -1;
        }

        return VAR_13;
      }
    }
  }

  VAR_7->hm_device[VAR_6].fanspeed_get_supported = 0;

  return -1;
}
