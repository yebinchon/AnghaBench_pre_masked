
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int work_group_size ;
typedef int u32 ;
struct TYPE_3__ {int opencl_device; } ;
typedef TYPE_1__ hc_device_param_t ;
typedef int hashcat_ctx_t ;
typedef int compile_work_group_size ;
typedef int cl_kernel ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ,int,...) ;

__attribute__((used)) static int FUNC_2 (hashcat_ctx_t *VAR_2, hc_device_param_t *VAR_3, cl_kernel VAR_4, u32 *VAR_5)
{
  size_t VAR_6 = 0;

  if (FUNC_1 (VAR_2, VAR_4, VAR_3->opencl_device, VAR_1, sizeof (VAR_6), &VAR_6, ((void*)0)) == -1) return -1;

  u32 VAR_7 = (u32) VAR_6;

  size_t VAR_8[3] = { 0, 0, 0 };

  if (FUNC_1 (VAR_2, VAR_4, VAR_3->opencl_device, VAR_0, sizeof (VAR_8), &VAR_8, ((void*)0)) == -1) return -1;

  const size_t VAR_9 = VAR_8[0] * VAR_8[1] * VAR_8[2];

  if (VAR_9 > 0)
  {
    VAR_7 = FUNC_0 (VAR_7, (u32) VAR_9);
  }

  *VAR_5 = VAR_7;

  return 0;
}
