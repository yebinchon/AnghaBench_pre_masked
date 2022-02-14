
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
struct TYPE_8__ {scalar_t__ (* cuMemGetInfo ) (size_t*,size_t*) ;scalar_t__ const (* cuGetErrorString ) (scalar_t__ const,char const**) ;} ;
typedef scalar_t__ CUresult ;
typedef TYPE_3__ CUDA_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,scalar_t__ const) ;
 scalar_t__ FUNC_1 (size_t*,size_t*) ;
 scalar_t__ const FUNC_2 (scalar_t__ const,char const**) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, size_t *VAR_2, size_t *VAR_3)
{
  backend_ctx_t *VAR_4 = VAR_1->backend_ctx;

  CUDA_PTR *VAR_5 = (CUDA_PTR *) VAR_4->cuda;

  const CUresult VAR_6 = VAR_5->cuMemGetInfo (VAR_2, VAR_3);

  if (VAR_6 != VAR_0)
  {
    const char *VAR_7 = ((void*)0);

    if (VAR_5->cuGetErrorString (VAR_6, &VAR_7) == VAR_0)
    {
      FUNC_0 (VAR_1, "cuMemGetInfo(): %s", VAR_7);
    }
    else
    {
      FUNC_0 (VAR_1, "cuMemGetInfo(): %d", VAR_6);
    }

    return -1;
  }

  return 0;
}
