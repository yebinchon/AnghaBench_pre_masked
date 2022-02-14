
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int* kernel_params_decompress_buf64; int kernel_wgs_decompress; int is_cuda; int is_opencl; int opencl_command_queue; int * kernel_params_decompress; int opencl_kernel_decompress; int cuda_stream; int cuda_function_decompress; } ;
typedef TYPE_1__ hc_device_param_t ;
typedef int hashcat_ctx_t ;
typedef int cl_ulong ;
typedef int cl_kernel ;
typedef int CUfunction ;


 int FUNC_0 (int,int const) ;
 int FUNC_1 (int *,int ,int ,int,int *,size_t const*,size_t const*,int ,int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int,int,int ) ;
 int FUNC_5 (int *,int ,int,int,int,int const,int,int,int ,int ,int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int,int const) ;

int FUNC_8 (hashcat_ctx_t *VAR_0, hc_device_param_t *VAR_1, const u64 VAR_2)
{
  VAR_1->kernel_params_decompress_buf64[3] = VAR_2;

  u64 VAR_3 = VAR_2;

  const u64 VAR_4 = VAR_1->kernel_wgs_decompress;

  if (VAR_1->is_cuda == 1)
  {
    VAR_3 = FUNC_0 (VAR_3, VAR_4);

    CUfunction VAR_5 = VAR_1->cuda_function_decompress;

    if (FUNC_5 (VAR_0, VAR_5, VAR_3, 1, 1, VAR_4, 1, 1, 0, VAR_1->cuda_stream, VAR_1->kernel_params_decompress, ((void*)0)) == -1) return -1;

    if (FUNC_6 (VAR_0, VAR_1->cuda_stream) == -1) return -1;
  }

  if (VAR_1->is_opencl == 1)
  {
    VAR_3 = FUNC_7 (VAR_3, VAR_4);

    cl_kernel VAR_6 = VAR_1->opencl_kernel_decompress;

    const size_t VAR_7[3] = { VAR_3, 1, 1 };
    const size_t VAR_8[3] = { VAR_4, 1, 1 };

    if (FUNC_4 (VAR_0, VAR_6, 3, sizeof (cl_ulong), VAR_1->kernel_params_decompress[3]) == -1) return -1;

    if (FUNC_1 (VAR_0, VAR_1->opencl_command_queue, VAR_6, 1, ((void*)0), VAR_7, VAR_8, 0, ((void*)0), ((void*)0)) == -1) return -1;

    if (FUNC_3 (VAR_0, VAR_1->opencl_command_queue) == -1) return -1;

    if (FUNC_2 (VAR_0, VAR_1->opencl_command_queue) == -1) return -1;
  }

  return 0;
}
