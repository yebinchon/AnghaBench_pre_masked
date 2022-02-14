
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int* kernel_params_memset_buf64; int kernel_wgs_memset; void** kernel_params_memset; int opencl_command_queue; int opencl_kernel_memset; int * kernel_params_memset_buf32; } ;
typedef TYPE_1__ hc_device_param_t ;
typedef int hashcat_ctx_t ;
typedef int cl_ulong ;
typedef int cl_uint ;
typedef int cl_mem ;
typedef int cl_kernel ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int,int *,size_t const*,size_t const*,int ,int *,int *) ;
 int FUNC_1 (int *,int ,int ,int ,int const,int const,int *,int ,int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int,int,void*) ;
 int FUNC_5 (int,int const) ;

int FUNC_6 (hashcat_ctx_t *VAR_1, hc_device_param_t *VAR_2, cl_mem VAR_3, const u32 VAR_4, const u64 VAR_5)
{
  const u64 VAR_6 = VAR_5 / 16;
  const u64 VAR_7 = VAR_5 % 16;

  if (VAR_6)
  {
    VAR_2->kernel_params_memset_buf32[1] = VAR_4;
    VAR_2->kernel_params_memset_buf64[2] = VAR_6;

    const u64 VAR_8 = VAR_2->kernel_wgs_memset;

    u64 VAR_9 = VAR_6;

    VAR_9 = FUNC_5 (VAR_9, VAR_8);

    cl_kernel VAR_10 = VAR_2->opencl_kernel_memset;

    if (FUNC_4 (VAR_1, VAR_10, 0, sizeof (cl_mem), (void *) &VAR_3) == -1) return -1;
    if (FUNC_4 (VAR_1, VAR_10, 1, sizeof (cl_uint), VAR_2->kernel_params_memset[1]) == -1) return -1;
    if (FUNC_4 (VAR_1, VAR_10, 2, sizeof (cl_ulong), VAR_2->kernel_params_memset[2]) == -1) return -1;

    const size_t VAR_11[3] = { VAR_9, 1, 1 };
    const size_t VAR_12[3] = { VAR_8, 1, 1 };

    if (FUNC_0 (VAR_1, VAR_2->opencl_command_queue, VAR_10, 1, ((void*)0), VAR_11, VAR_12, 0, ((void*)0), ((void*)0)) == -1) return -1;

    if (FUNC_3 (VAR_1, VAR_2->opencl_command_queue) == -1) return -1;

    if (FUNC_2 (VAR_1, VAR_2->opencl_command_queue) == -1) return -1;
  }

  if (VAR_7)
  {
    u32 VAR_13[4];

    VAR_13[0] = VAR_4;
    VAR_13[1] = VAR_4;
    VAR_13[2] = VAR_4;
    VAR_13[3] = VAR_4;

    if (FUNC_1 (VAR_1, VAR_2->opencl_command_queue, VAR_3, VAR_0, VAR_6 * 16, VAR_7, VAR_13, 0, ((void*)0), ((void*)0)) == -1) return -1;
  }

  return 0;
}
