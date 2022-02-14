
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
typedef int cl_map_flags ;
typedef scalar_t__ cl_int ;
typedef int cl_event ;
typedef int cl_command_queue ;
typedef int cl_bool ;
struct TYPE_7__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {void* (* clEnqueueMapBuffer ) (int ,int ,int ,int ,size_t,size_t,int ,int const*,int *,scalar_t__*) ;} ;
typedef TYPE_3__ OCL_PTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 void* FUNC_1 (int ,int ,int ,int ,size_t,size_t,int ,int const*,int *,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, cl_command_queue VAR_2, cl_mem VAR_3, cl_bool VAR_4, cl_map_flags VAR_5, size_t VAR_6, size_t VAR_7, cl_uint VAR_8, const cl_event *VAR_9, cl_event *VAR_10, void **VAR_11)
{
  backend_ctx_t *VAR_12 = VAR_1->backend_ctx;

  OCL_PTR *VAR_13 = (OCL_PTR *) VAR_12->ocl;

  cl_int VAR_14;

  *VAR_11 = VAR_13->clEnqueueMapBuffer (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, &VAR_14);

  if (VAR_14 != VAR_0)
  {
    FUNC_0 (VAR_1, "clEnqueueMapBuffer(): %s", FUNC_2 (VAR_14));

    return -1;
  }

  return 0;
}
