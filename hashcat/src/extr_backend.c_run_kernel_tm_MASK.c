
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int is_cuda; int is_opencl; int opencl_command_queue; int opencl_kernel_tm; int cuda_stream; int kernel_params_tm; int cuda_function_tm; int kernel_wgs_tm; } ;
typedef TYPE_1__ hc_device_param_t ;
typedef int hashcat_ctx_t ;
typedef int cl_kernel ;
typedef int CUfunction ;


 int FUNC_0 (int const,int ) ;
 int FUNC_1 (int *,int ,int ,int,int *,size_t const*,size_t const*,int ,int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int const,int,int,int const,int,int,int ,int ,int ,int *) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6 (hashcat_ctx_t *VAR_0, hc_device_param_t *VAR_1)
{
  const u64 VAR_2 = 1024;

  const u64 VAR_3 = FUNC_0 (VAR_2, VAR_1->kernel_wgs_tm);

  if (VAR_1->is_cuda == 1)
  {
    CUfunction VAR_4 = VAR_1->cuda_function_tm;

    if (FUNC_4 (VAR_0, VAR_4, VAR_2 / VAR_3, 1, 1, VAR_3, 1, 1, 0, VAR_1->cuda_stream, VAR_1->kernel_params_tm, ((void*)0)) == -1) return -1;

    if (FUNC_5 (VAR_0, VAR_1->cuda_stream) == -1) return -1;
  }

  if (VAR_1->is_opencl == 1)
  {
    cl_kernel VAR_5 = VAR_1->opencl_kernel_tm;

    const size_t VAR_6[3] = { VAR_2, 1, 1 };
    const size_t VAR_7[3] = { VAR_3, 1, 1 };

    if (FUNC_1 (VAR_0, VAR_1->opencl_command_queue, VAR_5, 1, ((void*)0), VAR_6, VAR_7, 0, ((void*)0), ((void*)0)) == -1) return -1;

    if (FUNC_3 (VAR_0, VAR_1->opencl_command_queue) == -1) return -1;

    if (FUNC_2 (VAR_0, VAR_1->opencl_command_queue) == -1) return -1;
  }

  return 0;
}
