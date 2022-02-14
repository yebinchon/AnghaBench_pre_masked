
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
typedef int cl_profiling_info ;
typedef scalar_t__ cl_int ;
typedef int cl_event ;
struct TYPE_7__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {scalar_t__ (* clGetEventProfilingInfo ) (int ,int ,size_t,void*,size_t*) ;} ;
typedef TYPE_3__ OCL_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,size_t,void*,size_t*) ;
 int FUNC_2 (scalar_t__ const) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, cl_event VAR_2, cl_profiling_info VAR_3, size_t VAR_4, void *VAR_5, size_t *VAR_6)
{
  backend_ctx_t *VAR_7 = VAR_1->backend_ctx;

  OCL_PTR *VAR_8 = (OCL_PTR *) VAR_7->ocl;

  const cl_int VAR_9 = VAR_8->clGetEventProfilingInfo (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

  if (VAR_9 != VAR_0)
  {
    FUNC_0 (VAR_1, "clGetEventProfilingInfo(): %s", FUNC_2 (VAR_9));

    return -1;
  }

  return 0;
}
