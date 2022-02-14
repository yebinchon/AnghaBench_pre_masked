
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int kernel_wgs_mp; int kernel_wgs_mp_r; int kernel_wgs_mp_l; int* kernel_params_mp_buf64; int* kernel_params_mp_r_buf64; int* kernel_params_mp_l_buf64; int is_cuda; void** kernel_params_mp; void** kernel_params_mp_r; void** kernel_params_mp_l; int is_opencl; int opencl_command_queue; int * opencl_kernel_mp_l; int * opencl_kernel_mp_r; int * opencl_kernel_mp; int cuda_stream; int * cuda_function_mp_l; int * cuda_function_mp_r; int * cuda_function_mp; } ;
typedef TYPE_1__ hc_device_param_t ;
typedef int hashcat_ctx_t ;
typedef int cl_ulong ;
typedef int cl_uint ;
typedef int * cl_kernel ;
typedef int * CUfunction ;


 int FUNC_0 (int,int) ;



 int FUNC_1 (int *,int ,int *,int,int *,size_t const*,size_t const*,int ,int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int,int,void*) ;
 int FUNC_5 (int *,int *,int,int,int,int,int,int,int ,int ,void**,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int,int) ;

int FUNC_8 (hashcat_ctx_t *VAR_0, hc_device_param_t *VAR_1, const u32 VAR_2, const u64 VAR_3)
{
  u64 VAR_4 = 0;

  switch (VAR_2)
  {
    case 130: VAR_4 = VAR_1->kernel_wgs_mp; break;
    case 128: VAR_4 = VAR_1->kernel_wgs_mp_r; break;
    case 129: VAR_4 = VAR_1->kernel_wgs_mp_l; break;
  }

  u64 VAR_5 = VAR_3;

  switch (VAR_2)
  {
    case 130: VAR_1->kernel_params_mp_buf64[8] = VAR_3; break;
    case 128: VAR_1->kernel_params_mp_r_buf64[8] = VAR_3; break;
    case 129: VAR_1->kernel_params_mp_l_buf64[9] = VAR_3; break;
  }

  if (VAR_1->is_cuda == 1)
  {
    CUfunction VAR_6 = ((void*)0);

    void **VAR_7 = ((void*)0);

    switch (VAR_2)
    {
      case 130: VAR_6 = VAR_1->cuda_function_mp;
                          VAR_7 = VAR_1->kernel_params_mp;
                          break;
      case 128: VAR_6 = VAR_1->cuda_function_mp_r;
                          VAR_7 = VAR_1->kernel_params_mp_r;
                          break;
      case 129: VAR_6 = VAR_1->cuda_function_mp_l;
                          VAR_7 = VAR_1->kernel_params_mp_l;
                          break;
    }

    VAR_5 = FUNC_0 (VAR_5, VAR_4);

    if (FUNC_5 (VAR_0, VAR_6, VAR_5, 1, 1, VAR_4, 1, 1, 0, VAR_1->cuda_stream, VAR_7, ((void*)0)) == -1) return -1;

    if (FUNC_6 (VAR_0, VAR_1->cuda_stream) == -1) return -1;
  }

  if (VAR_1->is_opencl == 1)
  {
    cl_kernel VAR_8 = ((void*)0);

    switch (VAR_2)
    {
      case 130: VAR_8 = VAR_1->opencl_kernel_mp; break;
      case 128: VAR_8 = VAR_1->opencl_kernel_mp_r; break;
      case 129: VAR_8 = VAR_1->opencl_kernel_mp_l; break;
    }

    switch (VAR_2)
    {
      case 130: if (FUNC_4 (VAR_0, VAR_8, 3, sizeof (cl_ulong), VAR_1->kernel_params_mp[3]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 4, sizeof (cl_uint), VAR_1->kernel_params_mp[4]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 5, sizeof (cl_uint), VAR_1->kernel_params_mp[5]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 6, sizeof (cl_uint), VAR_1->kernel_params_mp[6]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 7, sizeof (cl_uint), VAR_1->kernel_params_mp[7]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 8, sizeof (cl_ulong), VAR_1->kernel_params_mp[8]) == -1) return -1;
                          break;
      case 128: if (FUNC_4 (VAR_0, VAR_8, 3, sizeof (cl_ulong), VAR_1->kernel_params_mp_r[3]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 4, sizeof (cl_uint), VAR_1->kernel_params_mp_r[4]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 5, sizeof (cl_uint), VAR_1->kernel_params_mp_r[5]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 6, sizeof (cl_uint), VAR_1->kernel_params_mp_r[6]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 7, sizeof (cl_uint), VAR_1->kernel_params_mp_r[7]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 8, sizeof (cl_ulong), VAR_1->kernel_params_mp_r[8]) == -1) return -1;
                          break;
      case 129: if (FUNC_4 (VAR_0, VAR_8, 3, sizeof (cl_ulong), VAR_1->kernel_params_mp_l[3]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 4, sizeof (cl_uint), VAR_1->kernel_params_mp_l[4]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 5, sizeof (cl_uint), VAR_1->kernel_params_mp_l[5]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 6, sizeof (cl_uint), VAR_1->kernel_params_mp_l[6]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 7, sizeof (cl_uint), VAR_1->kernel_params_mp_l[7]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 8, sizeof (cl_uint), VAR_1->kernel_params_mp_l[8]) == -1) return -1;
                          if (FUNC_4 (VAR_0, VAR_8, 9, sizeof (cl_ulong), VAR_1->kernel_params_mp_l[9]) == -1) return -1;
                          break;
    }

    VAR_5 = FUNC_7 (VAR_5, VAR_4);

    const size_t VAR_9[3] = { VAR_5, 1, 1 };
    const size_t VAR_10[3] = { VAR_4, 1, 1 };

    if (FUNC_1 (VAR_0, VAR_1->opencl_command_queue, VAR_8, 1, ((void*)0), VAR_9, VAR_10, 0, ((void*)0), ((void*)0)) == -1) return -1;

    if (FUNC_3 (VAR_0, VAR_1->opencl_command_queue) == -1) return -1;

    if (FUNC_2 (VAR_0, VAR_1->opencl_command_queue) == -1) return -1;
  }

  return 0;
}
