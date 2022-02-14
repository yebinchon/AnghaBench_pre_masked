
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
struct TYPE_8__ {scalar_t__ (* cuDeviceGetAttribute ) (int*,int ,int ) ;scalar_t__ const (* cuGetErrorString ) (scalar_t__ const,char const**) ;} ;
typedef scalar_t__ CUresult ;
typedef int CUdevice_attribute ;
typedef int CUdevice ;
typedef TYPE_3__ CUDA_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,scalar_t__ const) ;
 scalar_t__ FUNC_1 (int*,int ,int ) ;
 scalar_t__ const FUNC_2 (scalar_t__ const,char const**) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, int *VAR_2, CUdevice_attribute VAR_3, CUdevice VAR_4)
{
  backend_ctx_t *VAR_5 = VAR_1->backend_ctx;

  CUDA_PTR *VAR_6 = (CUDA_PTR *) VAR_5->cuda;

  const CUresult VAR_7 = VAR_6->cuDeviceGetAttribute (VAR_2, VAR_3, VAR_4);

  if (VAR_7 != VAR_0)
  {
    const char *VAR_8 = ((void*)0);

    if (VAR_6->cuGetErrorString (VAR_7, &VAR_8) == VAR_0)
    {
      FUNC_0 (VAR_1, "cuDeviceGetAttribute(): %s", VAR_8);
    }
    else
    {
      FUNC_0 (VAR_1, "cuDeviceGetAttribute(): %d", VAR_7);
    }

    return -1;
  }

  return 0;
}
