
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {int skipped; int is_opencl; int opencl_device_vendor; int opencl_device_c_version; int opencl_device_version; int opencl_driver_version; int device_name; } ;
typedef TYPE_1__ hc_device_param_t ;
struct TYPE_6__ {TYPE_3__* backend_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_7__ {int enabled; size_t opencl_platforms_cnt; int backend_devices_cnt; int need_adl; int need_nvml; int need_nvapi; int need_sysfs; scalar_t__ opencl_devices_active; scalar_t__ opencl_devices_cnt; scalar_t__ cuda_devices_active; scalar_t__ cuda_devices_cnt; scalar_t__ backend_devices_active; TYPE_1__* devices_param; int * opencl_platforms_version; int * opencl_platforms_vendor; int * opencl_platforms_name; int * opencl_platforms_devices; } ;
typedef TYPE_3__ backend_ctx_t ;


 int FUNC_0 (int ) ;

void FUNC_1 (hashcat_ctx_t *VAR_0)
{
  backend_ctx_t *VAR_1 = VAR_0->backend_ctx;

  if (VAR_1->enabled == 0) return;

  for (u32 VAR_2 = 0; VAR_2 < VAR_1->opencl_platforms_cnt; VAR_2++)
  {
    FUNC_0 (VAR_1->opencl_platforms_devices[VAR_2]);
    FUNC_0 (VAR_1->opencl_platforms_name[VAR_2]);
    FUNC_0 (VAR_1->opencl_platforms_vendor[VAR_2]);
    FUNC_0 (VAR_1->opencl_platforms_version[VAR_2]);
  }

  for (int VAR_3 = 0; VAR_3 < VAR_1->backend_devices_cnt; VAR_3++)
  {
    hc_device_param_t *VAR_4 = &VAR_1->devices_param[VAR_3];

    if (VAR_4->skipped == 1) continue;

    FUNC_0 (VAR_4->device_name);

    if (VAR_4->is_opencl == 1)
    {
      FUNC_0 (VAR_4->opencl_driver_version);
      FUNC_0 (VAR_4->opencl_device_version);
      FUNC_0 (VAR_4->opencl_device_c_version);
      FUNC_0 (VAR_4->opencl_device_vendor);
    }
  }

  VAR_1->backend_devices_cnt = 0;
  VAR_1->backend_devices_active = 0;
  VAR_1->cuda_devices_cnt = 0;
  VAR_1->cuda_devices_active = 0;
  VAR_1->opencl_devices_cnt = 0;
  VAR_1->opencl_devices_active = 0;

  VAR_1->need_adl = 0;
  VAR_1->need_nvml = 0;
  VAR_1->need_nvapi = 0;
  VAR_1->need_sysfs = 0;
}
