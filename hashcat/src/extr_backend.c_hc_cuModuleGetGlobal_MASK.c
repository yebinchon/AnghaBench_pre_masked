
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_7__ {scalar_t__ cuda; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {scalar_t__ (* cuModuleGetGlobal ) (int *,size_t*,int ,char const*) ;scalar_t__ const (* cuGetErrorString ) (scalar_t__ const,char const**) ;} ;
typedef scalar_t__ CUresult ;
typedef int CUmodule ;
typedef int CUdeviceptr ;
typedef TYPE_3__ CUDA_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,scalar_t__ const) ;
 scalar_t__ FUNC_1 (int *,size_t*,int ,char const*) ;
 scalar_t__ const FUNC_2 (scalar_t__ const,char const**) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, CUdeviceptr *VAR_2, size_t *VAR_3, CUmodule VAR_4, const char *VAR_5)
{
  backend_ctx_t *VAR_6 = VAR_1->backend_ctx;

  CUDA_PTR *VAR_7 = (CUDA_PTR *) VAR_6->cuda;

  const CUresult VAR_8 = VAR_7->cuModuleGetGlobal (VAR_2, VAR_3, VAR_4, VAR_5);

  if (VAR_8 != VAR_0)
  {
    const char *VAR_9 = ((void*)0);

    if (VAR_7->cuGetErrorString (VAR_8, &VAR_9) == VAR_0)
    {
      FUNC_0 (VAR_1, "cuModuleGetGlobal(): %s", VAR_9);
    }
    else
    {
      FUNC_0 (VAR_1, "cuModuleGetGlobal(): %d", VAR_8);
    }

    return -1;
  }

  return 0;
}
