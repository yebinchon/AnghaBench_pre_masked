
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
typedef int cl_uint ;
typedef int cl_kernel ;
typedef scalar_t__ cl_int ;
struct TYPE_7__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {scalar_t__ (* clSetKernelArg ) (int ,int ,size_t,void const*) ;} ;
typedef TYPE_3__ OCL_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,size_t,void const*) ;
 int FUNC_2 (scalar_t__ const) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, cl_kernel VAR_2, cl_uint VAR_3, size_t VAR_4, const void *VAR_5)
{
  backend_ctx_t *VAR_6 = VAR_1->backend_ctx;

  OCL_PTR *VAR_7 = (OCL_PTR *) VAR_6->ocl;

  const cl_int VAR_8 = VAR_7->clSetKernelArg (VAR_2, VAR_3, VAR_4, VAR_5);

  if (VAR_8 != VAR_0)
  {
    FUNC_0 (VAR_1, "clSetKernelArg(): %s", FUNC_2 (VAR_8));

    return -1;
  }

  return 0;
}
