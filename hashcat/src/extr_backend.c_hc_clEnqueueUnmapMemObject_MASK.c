
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
typedef int cl_mem ;
typedef scalar_t__ cl_int ;
typedef int cl_event ;
typedef int cl_command_queue ;
struct TYPE_7__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {scalar_t__ (* clEnqueueUnmapMemObject ) (int ,int ,void*,int ,int const*,int *) ;} ;
typedef TYPE_3__ OCL_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,void*,int ,int const*,int *) ;
 int FUNC_2 (scalar_t__ const) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, cl_command_queue VAR_2, cl_mem VAR_3, void *VAR_4, cl_uint VAR_5, const cl_event *VAR_6, cl_event *VAR_7)
{
  backend_ctx_t *VAR_8 = VAR_1->backend_ctx;

  OCL_PTR *VAR_9 = (OCL_PTR *) VAR_8->ocl;

  const cl_int VAR_10 = VAR_9->clEnqueueUnmapMemObject (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

  if (VAR_10 != VAR_0)
  {
    FUNC_0 (VAR_1, "clEnqueueUnmapMemObject(): %s", FUNC_2 (VAR_10));

    return -1;
  }

  return 0;
}
