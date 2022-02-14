
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int enabled; TYPE_2__* hm_device; scalar_t__ hm_nvml; scalar_t__ hm_sysfs; scalar_t__ hm_adl; } ;
typedef TYPE_3__ hwmon_ctx_t ;
struct TYPE_15__ {TYPE_5__* backend_ctx; TYPE_3__* hwmon_ctx; } ;
typedef TYPE_4__ hashcat_ctx_t ;
struct TYPE_16__ {TYPE_1__* devices_param; } ;
typedef TYPE_5__ backend_ctx_t ;
struct TYPE_17__ {int iSize; int iCurrentBusLanes; } ;
struct TYPE_13__ {int buslanes_get_supported; int nvml; int adl; } ;
struct TYPE_12__ {int is_cuda; int is_opencl; int opencl_device_type; scalar_t__ opencl_device_vendor_id; } ;
typedef TYPE_6__ ADLPMActivity ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,TYPE_6__*) ;
 int FUNC_1 (TYPE_4__*,int ,unsigned int*) ;
 int FUNC_2 (TYPE_4__*,int const,int*) ;

int FUNC_3 (hashcat_ctx_t *VAR_3, const int VAR_4)
{
  hwmon_ctx_t *VAR_5 = VAR_3->hwmon_ctx;
  backend_ctx_t *VAR_6 = VAR_3->backend_ctx;

  if (VAR_5->enabled == 0) return -1;

  if (VAR_5->hm_device[VAR_4].buslanes_get_supported == 0) return -1;

  if (VAR_6->devices_param[VAR_4].is_cuda == 1)
  {
    if (VAR_5->hm_nvml)
    {
      unsigned int VAR_7;

      if (FUNC_1 (VAR_3, VAR_5->hm_device[VAR_4].nvml, &VAR_7) == -1)
      {
        VAR_5->hm_device[VAR_4].buslanes_get_supported = 0;

        return -1;
      }

      return VAR_7;
    }
  }

  if (VAR_6->devices_param[VAR_4].is_opencl == 1)
  {
    if ((VAR_6->devices_param[VAR_4].opencl_device_type & VAR_0) == 0) return -1;

    if (VAR_6->devices_param[VAR_4].opencl_device_vendor_id == VAR_1)
    {
      if (VAR_5->hm_adl)
      {
        ADLPMActivity VAR_8;

        VAR_8.iSize = sizeof (ADLPMActivity);

        if (FUNC_0 (VAR_3, VAR_5->hm_device[VAR_4].adl, &VAR_8) == -1)
        {
          VAR_5->hm_device[VAR_4].buslanes_get_supported = 0;

          return -1;
        }

        return VAR_8.iCurrentBusLanes;
      }

      if (VAR_5->hm_sysfs)
      {
        int VAR_9;

        if (FUNC_2 (VAR_3, VAR_4, &VAR_9) == -1)
        {
          VAR_5->hm_device[VAR_4].buslanes_get_supported = 0;

          return -1;
        }

        return VAR_9;
      }
    }

    if (VAR_6->devices_param[VAR_4].opencl_device_vendor_id == VAR_2)
    {
      if (VAR_5->hm_nvml)
      {
        unsigned int VAR_10;

        if (FUNC_1 (VAR_3, VAR_5->hm_device[VAR_4].nvml, &VAR_10) == -1)
        {
          VAR_5->hm_device[VAR_4].buslanes_get_supported = 0;

          return -1;
        }

        return VAR_10;
      }
    }
  }

  VAR_5->hm_device[VAR_4].buslanes_get_supported = 0;

  return -1;
}
