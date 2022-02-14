
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int* kernel_params_atinit_buf64; int kernel_wgs_atinit; void** kernel_params_atinit; int opencl_command_queue; int opencl_kernel_atinit; } ;
typedef TYPE_1__ hc_device_param_t ;
typedef int hashcat_ctx_t ;
typedef int cl_ulong ;
typedef int cl_mem ;
typedef int cl_kernel ;


 int FUNC_0 (int *,int ,int ,int,int *,size_t const*,size_t const*,int ,int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int,int,void*) ;
 int FUNC_4 (int,int const) ;

int FUNC_5 (hashcat_ctx_t *VAR_0, hc_device_param_t *VAR_1, cl_mem VAR_2, const u64 VAR_3)
{
  u64 VAR_4 = VAR_3;

  VAR_1->kernel_params_atinit_buf64[1] = VAR_4;

  const u64 VAR_5 = VAR_1->kernel_wgs_atinit;

  VAR_4 = FUNC_4 (VAR_4, VAR_5);

  cl_kernel VAR_6 = VAR_1->opencl_kernel_atinit;

  const size_t VAR_7[3] = { VAR_4, 1, 1 };
  const size_t VAR_8[3] = { VAR_5, 1, 1 };

  if (FUNC_3 (VAR_0, VAR_6, 0, sizeof (cl_mem), (void *) &VAR_2) == -1) return -1;

  if (FUNC_3 (VAR_0, VAR_6, 1, sizeof (cl_ulong), VAR_1->kernel_params_atinit[1]) == -1) return -1;

  if (FUNC_0 (VAR_0, VAR_1->opencl_command_queue, VAR_6, 1, ((void*)0), VAR_7, VAR_8, 0, ((void*)0), ((void*)0)) == -1) return -1;

  if (FUNC_2 (VAR_0, VAR_1->opencl_command_queue) == -1) return -1;

  if (FUNC_1 (VAR_0, VAR_1->opencl_command_queue) == -1) return -1;

  return 0;
}
