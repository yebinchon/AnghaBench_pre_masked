
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ nvrtcResult ;
typedef int nvrtcProgram ;
struct TYPE_13__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_14__ {scalar_t__ cuda; scalar_t__ nvrtc; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_16__ {scalar_t__ (* cuModuleLoadDataEx ) (int *,char*,int ,int *,int *) ;} ;
struct TYPE_15__ {scalar_t__ (* nvrtcCompileProgram ) (int ,int,char const* const*) ;} ;
typedef TYPE_3__ NVRTC_PTR ;
typedef scalar_t__ CUresult ;
typedef int CUmodule ;
typedef TYPE_4__ CUDA_PTR ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (char**,char*,int const,int const) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int *,char const*,char*,int ,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (TYPE_1__*,int ,size_t*) ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;
 int FUNC_7 (TYPE_1__*,int ,size_t*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (size_t) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ,int,char const* const*) ;
 scalar_t__ FUNC_12 (int *,char*,int ,int *,int *) ;

__attribute__((used)) static bool FUNC_13 (hashcat_ctx_t *VAR_2, const int VAR_3, const int VAR_4, const char *VAR_5)
{
  nvrtcProgram VAR_6;

  if (FUNC_2 (VAR_2, &VAR_6, VAR_5, "test_instruction", 0, ((void*)0), ((void*)0)) == -1) return 0;

  char *VAR_7[4];

  VAR_7[0] = "--restrict";
  VAR_7[1] = "--gpu-architecture";

  FUNC_0 (&VAR_7[2], "compute_%d%d", VAR_3, VAR_4);

  VAR_7[3] = ((void*)0);

  backend_ctx_t *VAR_8 = VAR_2->backend_ctx;

  NVRTC_PTR *VAR_9 = (NVRTC_PTR *) VAR_8->nvrtc;

  const nvrtcResult VAR_10 = VAR_9->nvrtcCompileProgram (VAR_6, 3, (const char * const *) VAR_7);

  FUNC_8 (VAR_7[2]);

  size_t VAR_11 = 0;

  FUNC_7 (VAR_2, VAR_6, &VAR_11);

  if (VAR_10 != VAR_1)
  {
    char *VAR_12 = (char *) FUNC_9 (VAR_11 + 1);

    if (FUNC_6 (VAR_2, VAR_6, VAR_12) == -1) return 0;

    FUNC_10 (VAR_12);

    FUNC_8 (VAR_12);

    FUNC_3 (VAR_2, &VAR_6);

    return 0;
  }

  size_t VAR_13;

  if (FUNC_5 (VAR_2, VAR_6, &VAR_13) == -1) return 0;

  char *VAR_14 = (char *) FUNC_9 (VAR_13);

  if (FUNC_4 (VAR_2, VAR_6, VAR_14) == -1)
  {
    FUNC_8 (VAR_14);

    return 0;
  }

  CUDA_PTR *VAR_15 = (CUDA_PTR *) VAR_8->cuda;

  CUmodule VAR_16;

  const CUresult VAR_17 = VAR_15->cuModuleLoadDataEx (&VAR_16, VAR_14, 0, ((void*)0), ((void*)0));

  if (VAR_17 != VAR_0)
  {
    FUNC_8 (VAR_14);

    return 0;
  }

  FUNC_8 (VAR_14);

  if (FUNC_1 (VAR_2, VAR_16) == -1) return 0;

  if (FUNC_3 (VAR_2, &VAR_6) == -1) return 0;

  return 1;
}
