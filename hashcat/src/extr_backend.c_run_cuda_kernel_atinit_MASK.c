
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int cuda_stream; void** kernel_params_atinit; int cuda_function_atinit; int kernel_wgs_atinit; int * kernel_params_atinit_buf64; } ;
typedef TYPE_1__ hc_device_param_t ;
typedef int hashcat_ctx_t ;
typedef int CUfunction ;
typedef int CUdeviceptr ;


 int FUNC_0 (int ,int const) ;
 int FUNC_1 (int *,int ,int ,int,int,int const,int,int,int ,int ,void**,int *) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3 (hashcat_ctx_t *VAR_0, hc_device_param_t *VAR_1, CUdeviceptr VAR_2, const u64 VAR_3)
{
  u64 VAR_4 = VAR_3;

  VAR_1->kernel_params_atinit[0] = (void *) &VAR_2;
  VAR_1->kernel_params_atinit_buf64[1] = VAR_4;

  const u64 VAR_5 = VAR_1->kernel_wgs_atinit;

  VAR_4 = FUNC_0 (VAR_4, VAR_5);

  CUfunction VAR_6 = VAR_1->cuda_function_atinit;

  if (FUNC_1 (VAR_0, VAR_6, VAR_4, 1, 1, VAR_5, 1, 1, 0, VAR_1->cuda_stream, VAR_1->kernel_params_atinit, ((void*)0)) == -1) return -1;

  if (FUNC_2 (VAR_0, VAR_1->cuda_stream) == -1) return -1;

  return 0;
}
