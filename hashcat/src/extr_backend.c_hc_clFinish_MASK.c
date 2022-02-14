
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
typedef scalar_t__ cl_int ;
typedef int cl_command_queue ;
struct TYPE_7__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {scalar_t__ (* clFinish ) (int ) ;} ;
typedef TYPE_3__ OCL_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__ const) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, cl_command_queue VAR_2)
{
  backend_ctx_t *VAR_3 = VAR_1->backend_ctx;

  OCL_PTR *VAR_4 = (OCL_PTR *) VAR_3->ocl;

  const cl_int VAR_5 = VAR_4->clFinish (VAR_2);

  if (VAR_5 != VAR_0)
  {
    FUNC_0 (VAR_1, "clFinish(): %s", FUNC_2 (VAR_5));

    return -1;
  }

  return 0;
}
