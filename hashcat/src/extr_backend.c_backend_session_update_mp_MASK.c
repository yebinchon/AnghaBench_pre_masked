
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int slow_candidates; } ;
typedef TYPE_1__ user_options_t ;
typedef int u32 ;
struct TYPE_11__ {int markov_css_buf; int root_css_buf; int css_cnt; } ;
typedef TYPE_2__ mask_ctx_t ;
struct TYPE_12__ {int skipped; int skipped_warning; int is_cuda; int is_opencl; int size_markov_css; int opencl_d_markov_css_buf; int opencl_command_queue; int size_root_css; int opencl_d_root_css_buf; int * kernel_params_mp; int opencl_kernel_mp; int cuda_d_markov_css_buf; int cuda_d_root_css_buf; int * kernel_params_mp_buf32; scalar_t__* kernel_params_mp_buf64; } ;
typedef TYPE_3__ hc_device_param_t ;
struct TYPE_13__ {TYPE_1__* user_options; TYPE_5__* backend_ctx; TYPE_2__* mask_ctx; } ;
typedef TYPE_4__ hashcat_ctx_t ;
typedef int cl_ulong ;
typedef int cl_uint ;
struct TYPE_14__ {int enabled; int backend_devices_cnt; TYPE_3__* devices_param; } ;
typedef TYPE_5__ backend_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_1 (TYPE_4__*,int ,int,int,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;

int FUNC_3 (hashcat_ctx_t *VAR_1)
{
  mask_ctx_t *VAR_2 = VAR_1->mask_ctx;
  backend_ctx_t *VAR_3 = VAR_1->backend_ctx;
  user_options_t *VAR_4 = VAR_1->user_options;

  if (VAR_3->enabled == 0) return 0;

  if (VAR_4->slow_candidates == 1) return 0;

  for (int VAR_5 = 0; VAR_5 < VAR_3->backend_devices_cnt; VAR_5++)
  {
    hc_device_param_t *VAR_6 = &VAR_3->devices_param[VAR_5];

    if (VAR_6->skipped == 1) continue;

    if (VAR_6->skipped_warning == 1) continue;

    VAR_6->kernel_params_mp_buf64[3] = 0;
    VAR_6->kernel_params_mp_buf32[4] = VAR_2->css_cnt;

    if (VAR_6->is_cuda == 1)
    {



      if (FUNC_2 (VAR_1, VAR_6->cuda_d_root_css_buf, VAR_2->root_css_buf, VAR_6->size_root_css) == -1) return -1;
      if (FUNC_2 (VAR_1, VAR_6->cuda_d_markov_css_buf, VAR_2->markov_css_buf, VAR_6->size_markov_css) == -1) return -1;
    }

    if (VAR_6->is_opencl == 1)
    {
      for (u32 VAR_7 = 3; VAR_7 < 4; VAR_7++) { if (FUNC_1 (VAR_1, VAR_6->opencl_kernel_mp, VAR_7, sizeof (cl_ulong), VAR_6->kernel_params_mp[VAR_7]) == -1) return -1; }
      for (u32 VAR_8 = 4; VAR_8 < 8; VAR_8++) { if (FUNC_1 (VAR_1, VAR_6->opencl_kernel_mp, VAR_8, sizeof (cl_uint), VAR_6->kernel_params_mp[VAR_8]) == -1) return -1; }

      if (FUNC_0 (VAR_1, VAR_6->opencl_command_queue, VAR_6->opencl_d_root_css_buf, VAR_0, 0, VAR_6->size_root_css, VAR_2->root_css_buf, 0, ((void*)0), ((void*)0)) == -1) return -1;
      if (FUNC_0 (VAR_1, VAR_6->opencl_command_queue, VAR_6->opencl_d_markov_css_buf, VAR_0, 0, VAR_6->size_markov_css, VAR_2->markov_css_buf, 0, ((void*)0), ((void*)0)) == -1) return -1;
    }
  }

  return 0;
}
