
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int enabled; TYPE_2__* hm_device; scalar_t__ hm_nvml; scalar_t__ hm_adl; } ;
typedef TYPE_3__ hwmon_ctx_t ;
struct TYPE_11__ {TYPE_5__* backend_ctx; TYPE_3__* hwmon_ctx; } ;
typedef TYPE_4__ hashcat_ctx_t ;
struct TYPE_12__ {TYPE_1__* devices_param; } ;
typedef TYPE_5__ backend_ctx_t ;
struct TYPE_9__ {int threshold_shutdown_get_supported; int od_version; int nvml; } ;
struct TYPE_8__ {int is_cuda; int is_opencl; int opencl_device_type; scalar_t__ opencl_device_vendor_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,int ,unsigned int*) ;

int FUNC_1 (hashcat_ctx_t *VAR_4, const int VAR_5)
{
  hwmon_ctx_t *VAR_6 = VAR_4->hwmon_ctx;
  backend_ctx_t *VAR_7 = VAR_4->backend_ctx;

  if (VAR_6->enabled == 0) return -1;

  if (VAR_6->hm_device[VAR_5].threshold_shutdown_get_supported == 0) return -1;

  if (VAR_7->devices_param[VAR_5].is_cuda == 1)
  {
    if (VAR_6->hm_nvml)
    {
      int VAR_8 = 0;

      if (FUNC_0 (VAR_4, VAR_6->hm_device[VAR_5].nvml, VAR_1, (unsigned int *) &VAR_8) == -1)
      {
        VAR_6->hm_device[VAR_5].threshold_shutdown_get_supported = 0;

        return -1;
      }

      return VAR_8;
    }
  }

  if (VAR_7->devices_param[VAR_5].is_opencl == 1)
  {
    if ((VAR_7->devices_param[VAR_5].opencl_device_type & VAR_0) == 0) return -1;

    if (VAR_7->devices_param[VAR_5].opencl_device_vendor_id == VAR_2)
    {
      if (VAR_6->hm_adl)
      {
        if (VAR_6->hm_device[VAR_5].od_version == 5)
        {

        }
        else if (VAR_6->hm_device[VAR_5].od_version == 6)
        {

        }
      }
    }

    if (VAR_7->devices_param[VAR_5].opencl_device_vendor_id == VAR_3)
    {
      if (VAR_6->hm_nvml)
      {
        int VAR_9 = 0;

        if (FUNC_0 (VAR_4, VAR_6->hm_device[VAR_5].nvml, VAR_1, (unsigned int *) &VAR_9) == -1)
        {
          VAR_6->hm_device[VAR_5].threshold_shutdown_get_supported = 0;

          return -1;
        }

        return VAR_9;
      }
    }
  }

  VAR_6->hm_device[VAR_5].threshold_shutdown_get_supported = 0;

  return -1;
}
