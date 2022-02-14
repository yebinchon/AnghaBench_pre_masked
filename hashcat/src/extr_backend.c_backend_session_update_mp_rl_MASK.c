
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
struct TYPE_11__ {int markov_css_buf; int root_css_buf; } ;
typedef TYPE_2__ mask_ctx_t ;
struct TYPE_12__ {int skipped; int skipped_warning; int* kernel_params_mp_l_buf32; int* kernel_params_mp_r_buf32; int is_cuda; int is_opencl; int size_markov_css; int opencl_d_markov_css_buf; int opencl_command_queue; int size_root_css; int opencl_d_root_css_buf; int * kernel_params_mp_r; int opencl_kernel_mp_r; int * kernel_params_mp_l; int opencl_kernel_mp_l; int cuda_d_markov_css_buf; int cuda_d_root_css_buf; scalar_t__* kernel_params_mp_r_buf64; scalar_t__* kernel_params_mp_l_buf64; } ;
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

int FUNC_3 (hashcat_ctx_t *VAR_1, const u32 VAR_2, const u32 VAR_3)
{
  mask_ctx_t *VAR_4 = VAR_1->mask_ctx;
  backend_ctx_t *VAR_5 = VAR_1->backend_ctx;
  user_options_t *VAR_6 = VAR_1->user_options;

  if (VAR_5->enabled == 0) return 0;

  if (VAR_6->slow_candidates == 1) return 0;

  for (int VAR_7 = 0; VAR_7 < VAR_5->backend_devices_cnt; VAR_7++)
  {
    hc_device_param_t *VAR_8 = &VAR_5->devices_param[VAR_7];

    if (VAR_8->skipped == 1) continue;

    if (VAR_8->skipped_warning == 1) continue;

    VAR_8->kernel_params_mp_l_buf64[3] = 0;
    VAR_8->kernel_params_mp_l_buf32[4] = VAR_2;
    VAR_8->kernel_params_mp_l_buf32[5] = VAR_3;

    VAR_8->kernel_params_mp_r_buf64[3] = 0;
    VAR_8->kernel_params_mp_r_buf32[4] = VAR_3;

    if (VAR_8->is_cuda == 1)
    {
      if (FUNC_2 (VAR_1, VAR_8->cuda_d_root_css_buf, VAR_4->root_css_buf, VAR_8->size_root_css) == -1) return -1;
      if (FUNC_2 (VAR_1, VAR_8->cuda_d_markov_css_buf, VAR_4->markov_css_buf, VAR_8->size_markov_css) == -1) return -1;
    }

    if (VAR_8->is_opencl == 1)
    {
      for (u32 VAR_9 = 3; VAR_9 < 4; VAR_9++) { if (FUNC_1 (VAR_1, VAR_8->opencl_kernel_mp_l, VAR_9, sizeof (cl_ulong), VAR_8->kernel_params_mp_l[VAR_9]) == -1) return -1; }
      for (u32 VAR_10 = 4; VAR_10 < 8; VAR_10++) { if (FUNC_1 (VAR_1, VAR_8->opencl_kernel_mp_l, VAR_10, sizeof (cl_uint), VAR_8->kernel_params_mp_l[VAR_10]) == -1) return -1; }
      for (u32 VAR_11 = 9; VAR_11 < 9; VAR_11++) { if (FUNC_1 (VAR_1, VAR_8->opencl_kernel_mp_l, VAR_11, sizeof (cl_ulong), VAR_8->kernel_params_mp_l[VAR_11]) == -1) return -1; }

      for (u32 VAR_12 = 3; VAR_12 < 4; VAR_12++) { if (FUNC_1 (VAR_1, VAR_8->opencl_kernel_mp_r, VAR_12, sizeof (cl_ulong), VAR_8->kernel_params_mp_r[VAR_12]) == -1) return -1; }
      for (u32 VAR_13 = 4; VAR_13 < 7; VAR_13++) { if (FUNC_1 (VAR_1, VAR_8->opencl_kernel_mp_r, VAR_13, sizeof (cl_uint), VAR_8->kernel_params_mp_r[VAR_13]) == -1) return -1; }
      for (u32 VAR_14 = 8; VAR_14 < 8; VAR_14++) { if (FUNC_1 (VAR_1, VAR_8->opencl_kernel_mp_r, VAR_14, sizeof (cl_ulong), VAR_8->kernel_params_mp_r[VAR_14]) == -1) return -1; }

      if (FUNC_0 (VAR_1, VAR_8->opencl_command_queue, VAR_8->opencl_d_root_css_buf, VAR_0, 0, VAR_8->size_root_css, VAR_4->root_css_buf, 0, ((void*)0), ((void*)0)) == -1) return -1;
      if (FUNC_0 (VAR_1, VAR_8->opencl_command_queue, VAR_8->opencl_d_markov_css_buf, VAR_0, 0, VAR_8->size_markov_css, VAR_4->markov_css_buf, 0, ((void*)0), ((void*)0)) == -1) return -1;
    }
  }

  return 0;
}
