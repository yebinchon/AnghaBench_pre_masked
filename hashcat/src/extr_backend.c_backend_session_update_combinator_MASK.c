
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int slow_candidates; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_10__ {int skipped; int skipped_warning; int is_opencl; int * kernel_params_amp; int opencl_kernel_amp; int * kernel_params_amp_buf32; int * kernel_params_buf32; } ;
typedef TYPE_2__ hc_device_param_t ;
struct TYPE_11__ {scalar_t__ attack_exec; } ;
typedef TYPE_3__ hashconfig_t ;
struct TYPE_12__ {TYPE_1__* user_options; TYPE_6__* backend_ctx; TYPE_3__* hashconfig; TYPE_5__* combinator_ctx; } ;
typedef TYPE_4__ hashcat_ctx_t ;
struct TYPE_13__ {int combs_mode; } ;
typedef TYPE_5__ combinator_ctx_t ;
typedef int cl_uint ;
struct TYPE_14__ {int enabled; int backend_devices_cnt; TYPE_2__* devices_param; } ;
typedef TYPE_6__ backend_ctx_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int,int,int ) ;

int FUNC_1 (hashcat_ctx_t *VAR_1)
{
  combinator_ctx_t *VAR_2 = VAR_1->combinator_ctx;
  hashconfig_t *VAR_3 = VAR_1->hashconfig;
  backend_ctx_t *VAR_4 = VAR_1->backend_ctx;
  user_options_t *VAR_5 = VAR_1->user_options;

  if (VAR_4->enabled == 0) return 0;

  for (int VAR_6 = 0; VAR_6 < VAR_4->backend_devices_cnt; VAR_6++)
  {
    hc_device_param_t *VAR_7 = &VAR_4->devices_param[VAR_6];

    if (VAR_7->skipped == 1) continue;

    if (VAR_7->skipped_warning == 1) continue;



    VAR_7->kernel_params_buf32[33] = VAR_2->combs_mode;
    if (VAR_5->slow_candidates == 1)
    {
    }
    else
    {
      VAR_7->kernel_params_amp_buf32[5] = VAR_2->combs_mode;

      if (VAR_3->attack_exec == VAR_0)
      {
        if (VAR_7->is_opencl == 1)
        {
          const int VAR_8 = FUNC_0 (VAR_1, VAR_7->opencl_kernel_amp, 5, sizeof (cl_uint), VAR_7->kernel_params_amp[5]);

          if (VAR_8 == -1) return -1;
        }
      }
    }
  }

  return 0;
}
