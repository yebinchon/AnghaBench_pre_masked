
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
struct TYPE_8__ {scalar_t__ (* cuModuleLoadDataEx ) (int *,void const*,unsigned int,int *,void**) ;scalar_t__ const (* cuGetErrorString ) (scalar_t__ const,char const**) ;} ;
typedef scalar_t__ CUresult ;
typedef int CUmodule ;
typedef int CUjit_option ;
typedef TYPE_3__ CUDA_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,scalar_t__ const) ;
 scalar_t__ FUNC_1 (int *,void const*,unsigned int,int *,void**) ;
 scalar_t__ const FUNC_2 (scalar_t__ const,char const**) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, CUmodule *VAR_2, const void *VAR_3, unsigned int VAR_4, CUjit_option *VAR_5, void **VAR_6)
{
  backend_ctx_t *VAR_7 = VAR_1->backend_ctx;

  CUDA_PTR *VAR_8 = (CUDA_PTR *) VAR_7->cuda;

  const CUresult VAR_9 = VAR_8->cuModuleLoadDataEx (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

  if (VAR_9 != VAR_0)
  {
    const char *VAR_10 = ((void*)0);

    if (VAR_8->cuGetErrorString (VAR_9, &VAR_10) == VAR_0)
    {
      FUNC_0 (VAR_1, "cuModuleLoadDataEx(): %s", VAR_10);
    }
    else
    {
      FUNC_0 (VAR_1, "cuModuleLoadDataEx(): %d", VAR_9);
    }

    return -1;
  }

  return 0;
}
