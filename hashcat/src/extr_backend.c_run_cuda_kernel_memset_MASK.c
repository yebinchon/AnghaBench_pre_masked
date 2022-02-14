
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int* kernel_params_memset_buf64; int kernel_wgs_memset; int cuda_stream; void** kernel_params_memset; int cuda_function_memset; int * kernel_params_memset_buf32; } ;
typedef TYPE_1__ hc_device_param_t ;
typedef int hashcat_ctx_t ;
typedef int CUfunction ;
typedef scalar_t__ CUdeviceptr ;


 int FUNC_0 (int,int const) ;
 int FUNC_1 (int *,int ,int,int,int,int const,int,int,int ,int ,void**,int *) ;
 int FUNC_2 (int *,scalar_t__,int *,int const) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4 (hashcat_ctx_t *VAR_0, hc_device_param_t *VAR_1, CUdeviceptr VAR_2, const u32 VAR_3, const u64 VAR_4)
{
  const u64 VAR_5 = VAR_4 / 16;
  const u64 VAR_6 = VAR_4 % 16;

  if (VAR_5)
  {
    VAR_1->kernel_params_memset[0] = (void *) &VAR_2;
    VAR_1->kernel_params_memset_buf32[1] = VAR_3;
    VAR_1->kernel_params_memset_buf64[2] = VAR_5;

    const u64 VAR_7 = VAR_1->kernel_wgs_memset;

    u64 VAR_8 = VAR_5;

    VAR_8 = FUNC_0 (VAR_8, VAR_7);

    CUfunction VAR_9 = VAR_1->cuda_function_memset;
    if (FUNC_1 (VAR_0, VAR_9, VAR_8, 1, 1, VAR_7, 1, 1, 0, VAR_1->cuda_stream, VAR_1->kernel_params_memset, ((void*)0)) == -1) return -1;

    if (FUNC_3 (VAR_0, VAR_1->cuda_stream) == -1) return -1;
  }

  if (VAR_6)
  {
    u32 VAR_10[4];

    VAR_10[0] = VAR_3;
    VAR_10[1] = VAR_3;
    VAR_10[2] = VAR_3;
    VAR_10[3] = VAR_3;



    if (FUNC_2 (VAR_0, VAR_2 + (VAR_5 * 16), VAR_10, VAR_6) == -1) return -1;
  }

  return 0;
}
