
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
typedef int cl_device_type ;
typedef int cl_device_id ;
struct TYPE_7__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {scalar_t__ (* clGetDeviceIDs ) (int ,int ,int ,int *,int *) ;} ;
typedef TYPE_3__ OCL_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int *) ;
 int FUNC_2 (scalar_t__ const) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, cl_platform_id VAR_2, cl_device_type VAR_3, cl_uint VAR_4, cl_device_id *VAR_5, cl_uint *VAR_6)
{
  backend_ctx_t *VAR_7 = VAR_1->backend_ctx;

  OCL_PTR *VAR_8 = (OCL_PTR *) VAR_7->ocl;

  const cl_int VAR_9 = VAR_8->clGetDeviceIDs (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

  if (VAR_9 != VAR_0)
  {
    FUNC_0 (VAR_1, "clGetDeviceIDs(): %s", FUNC_2 (VAR_9));

    return -1;
  }

  return 0;
}
