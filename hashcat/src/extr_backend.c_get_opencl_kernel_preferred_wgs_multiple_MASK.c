
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int preferred_work_group_size_multiple ;
struct TYPE_3__ {int opencl_device; } ;
typedef TYPE_1__ hc_device_param_t ;
typedef int hashcat_ctx_t ;
typedef int cl_kernel ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int,size_t*,int *) ;

__attribute__((used)) static int FUNC_1 (hashcat_ctx_t *VAR_1, hc_device_param_t *VAR_2, cl_kernel VAR_3, u32 *VAR_4)
{
  size_t VAR_5 = 0;

  if (FUNC_0 (VAR_1, VAR_3, VAR_2->opencl_device, VAR_0, sizeof (VAR_5), &VAR_5, ((void*)0)) == -1) return -1;

  *VAR_4 = (u32) VAR_5;

  return 0;
}
