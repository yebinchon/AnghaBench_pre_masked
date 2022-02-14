
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
typedef int cl_platform_id ;
typedef scalar_t__ cl_int ;
struct TYPE_7__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {scalar_t__ (* clGetPlatformIDs ) (int ,int *,int *) ;} ;
typedef TYPE_3__ OCL_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (scalar_t__ const) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, cl_uint VAR_2, cl_platform_id *VAR_3, cl_uint *VAR_4)
{
  backend_ctx_t *VAR_5 = VAR_1->backend_ctx;

  OCL_PTR *VAR_6 = (OCL_PTR *) VAR_5->ocl;

  const cl_int VAR_7 = VAR_6->clGetPlatformIDs (VAR_2, VAR_3, VAR_4);

  if (VAR_7 != VAR_0)
  {
    FUNC_0 (VAR_1, "clGetPlatformIDs(): %s", FUNC_2 (VAR_7));

    return -1;
  }

  return 0;
}
