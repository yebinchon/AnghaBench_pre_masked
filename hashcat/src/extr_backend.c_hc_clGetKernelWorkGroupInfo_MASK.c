
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
typedef int cl_kernel_work_group_info ;
typedef int cl_kernel ;
typedef scalar_t__ cl_int ;
typedef int cl_device_id ;
struct TYPE_7__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {scalar_t__ (* clGetKernelWorkGroupInfo ) (int ,int ,int ,size_t,void*,size_t*) ;} ;
typedef TYPE_3__ OCL_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,size_t,void*,size_t*) ;
 int FUNC_2 (scalar_t__ const) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, cl_kernel VAR_2, cl_device_id VAR_3, cl_kernel_work_group_info VAR_4, size_t VAR_5, void *VAR_6, size_t *VAR_7)
{
  backend_ctx_t *VAR_8 = VAR_1->backend_ctx;

  OCL_PTR *VAR_9 = (OCL_PTR *) VAR_8->ocl;

  const cl_int VAR_10 = VAR_9->clGetKernelWorkGroupInfo (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

  if (VAR_10 != VAR_0)
  {
    FUNC_0 (VAR_1, "clGetKernelWorkGroupInfo(): %s", FUNC_2 (VAR_10));

    return -1;
  }

  return 0;
}
