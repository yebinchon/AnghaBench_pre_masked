
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
typedef int cl_program ;
typedef scalar_t__ cl_int ;
typedef int cl_context ;
struct TYPE_7__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {int (* clCreateProgramWithSource ) (int ,int ,char const**,size_t const*,scalar_t__*) ;} ;
typedef TYPE_3__ OCL_PTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ,int ,char const**,size_t const*,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, cl_context VAR_2, cl_uint VAR_3, const char **VAR_4, const size_t *VAR_5, cl_program *VAR_6)
{
  backend_ctx_t *VAR_7 = VAR_1->backend_ctx;

  OCL_PTR *VAR_8 = (OCL_PTR *) VAR_7->ocl;

  cl_int VAR_9;

  *VAR_6 = VAR_8->clCreateProgramWithSource (VAR_2, VAR_3, VAR_4, VAR_5, &VAR_9);

  if (VAR_9 != VAR_0)
  {
    FUNC_0 (VAR_1, "clCreateProgramWithSource(): %s", FUNC_2 (VAR_9));

    return -1;
  }

  return 0;
}
