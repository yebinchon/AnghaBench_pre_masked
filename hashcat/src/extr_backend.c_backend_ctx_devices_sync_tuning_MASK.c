
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int skipped; int skipped_warning; int kernel_accel; int kernel_threads; int device_processors; int hardware_power; int kernel_power; int kernel_loops; } ;
typedef TYPE_1__ hc_device_param_t ;
struct TYPE_8__ {TYPE_3__* backend_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_9__ {int enabled; int backend_devices_cnt; TYPE_1__* devices_param; } ;
typedef TYPE_3__ backend_ctx_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

void FUNC_1 (hashcat_ctx_t *VAR_0)
{
  backend_ctx_t *VAR_1 = VAR_0->backend_ctx;

  if (VAR_1->enabled == 0) return;

  for (int VAR_2 = 0; VAR_2 < VAR_1->backend_devices_cnt; VAR_2++)
  {
    hc_device_param_t *VAR_3 = &VAR_1->devices_param[VAR_2];

    if (VAR_3->skipped == 1) continue;

    if (VAR_3->skipped_warning == 1) continue;

    for (int VAR_4 = VAR_2 + 1; VAR_4 < VAR_1->backend_devices_cnt; VAR_4++)
    {
      hc_device_param_t *VAR_5 = &VAR_1->devices_param[VAR_4];

      if (VAR_5->skipped == 1) continue;

      if (VAR_5->skipped_warning == 1) continue;

      if (FUNC_0 (VAR_3, VAR_5) == 0) continue;

      VAR_5->kernel_accel = VAR_3->kernel_accel;
      VAR_5->kernel_loops = VAR_3->kernel_loops;
      VAR_5->kernel_threads = VAR_3->kernel_threads;

      const u32 VAR_6 = VAR_5->device_processors * VAR_5->kernel_threads;

      VAR_5->hardware_power = VAR_6;

      const u32 VAR_7 = VAR_5->hardware_power * VAR_5->kernel_accel;

      VAR_5->kernel_power = VAR_7;
    }
  }
}
