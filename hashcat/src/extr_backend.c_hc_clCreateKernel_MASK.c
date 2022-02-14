
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
typedef int cl_program ;
typedef int cl_kernel ;
typedef scalar_t__ cl_int ;
struct TYPE_7__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {int (* clCreateKernel ) (int ,char const*,scalar_t__*) ;} ;
typedef TYPE_3__ OCL_PTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ,char const*,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, cl_program VAR_2, const char *VAR_3, cl_kernel *VAR_4)
{
  backend_ctx_t *VAR_5 = VAR_1->backend_ctx;

  OCL_PTR *VAR_6 = (OCL_PTR *) VAR_5->ocl;

  cl_int VAR_7;

  *VAR_4 = VAR_6->clCreateKernel (VAR_2, VAR_3, &VAR_7);

  if (VAR_7 != VAR_0)
  {
    FUNC_0 (VAR_1, "clCreateKernel(): %s", FUNC_2 (VAR_7));

    return -1;
  }

  return 0;
}
