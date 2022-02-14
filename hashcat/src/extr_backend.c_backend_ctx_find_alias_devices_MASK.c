
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int skipped; int skipped_warning; size_t device_id_alias_cnt; int is_opencl; int device_id; int * device_id_alias_buf; } ;
typedef TYPE_1__ hc_device_param_t ;
struct TYPE_8__ {TYPE_3__* backend_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_9__ {int backend_devices_cnt; int backend_devices_active; int opencl_devices_active; TYPE_1__* devices_param; } ;
typedef TYPE_3__ backend_ctx_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1 (hashcat_ctx_t *VAR_0)
{
  backend_ctx_t *VAR_1 = VAR_0->backend_ctx;

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

      VAR_3->device_id_alias_buf[VAR_3->device_id_alias_cnt] = VAR_5->device_id;
      VAR_3->device_id_alias_cnt++;

      VAR_5->device_id_alias_buf[VAR_5->device_id_alias_cnt] = VAR_3->device_id;
      VAR_5->device_id_alias_cnt++;

      if (VAR_5->is_opencl == 1)
      {
        if (VAR_5->skipped == 0)
        {
          VAR_5->skipped = 1;

          VAR_1->opencl_devices_active--;

          VAR_1->backend_devices_active--;
        }
      }
    }
  }

  return -1;
}
