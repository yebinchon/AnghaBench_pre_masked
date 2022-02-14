
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ nvrtcResult ;
typedef int nvrtcProgram ;
struct TYPE_6__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_7__ {scalar_t__ nvrtc; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {scalar_t__ (* nvrtcCompileProgram ) (int ,int,char const* const*) ;int (* nvrtcGetErrorString ) (scalar_t__ const) ;} ;
typedef TYPE_3__ NVRTC_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int,char const* const*) ;
 int FUNC_2 (scalar_t__ const) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, nvrtcProgram VAR_2, int VAR_3, const char * const *VAR_4)
{
  backend_ctx_t *VAR_5 = VAR_1->backend_ctx;

  NVRTC_PTR *VAR_6 = (NVRTC_PTR *) VAR_5->nvrtc;

  const nvrtcResult VAR_7 = VAR_6->nvrtcCompileProgram (VAR_2, VAR_3, VAR_4);

  if (VAR_7 != VAR_0)
  {
    FUNC_0 (VAR_1, "nvrtcCompileProgram(): %s", VAR_6->nvrtcGetErrorString (VAR_7));

    return -1;
  }

  return 0;
}
