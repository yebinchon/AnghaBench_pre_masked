
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
struct TYPE_8__ {scalar_t__ (* cuLaunchKernel ) (int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ,void**,void**) ;scalar_t__ const (* cuGetErrorString ) (scalar_t__ const,char const**) ;} ;
typedef int CUstream ;
typedef scalar_t__ CUresult ;
typedef int CUfunction ;
typedef TYPE_3__ CUDA_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,scalar_t__ const) ;
 scalar_t__ FUNC_1 (int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ,void**,void**) ;
 scalar_t__ const FUNC_2 (scalar_t__ const,char const**) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, CUfunction VAR_2, unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5, unsigned int VAR_6, unsigned int VAR_7, unsigned int VAR_8, unsigned int VAR_9, CUstream VAR_10, void **VAR_11, void **VAR_12)
{
  backend_ctx_t *VAR_13 = VAR_1->backend_ctx;

  CUDA_PTR *VAR_14 = (CUDA_PTR *) VAR_13->cuda;

  const CUresult VAR_15 = VAR_14->cuLaunchKernel (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);

  if (VAR_15 != VAR_0)
  {
    const char *VAR_16 = ((void*)0);

    if (VAR_14->cuGetErrorString (VAR_15, &VAR_16) == VAR_0)
    {
      FUNC_0 (VAR_1, "cuLaunchKernel(): %s", VAR_16);
    }
    else
    {
      FUNC_0 (VAR_1, "cuLaunchKernel(): %d", VAR_15);
    }

    return -1;
  }

  return 0;
}
