
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
typedef int cl_device_id ;
typedef int cl_context ;
typedef int cl_command_queue_properties ;
typedef int cl_command_queue ;
struct TYPE_7__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {int (* clCreateCommandQueue ) (int ,int ,int ,scalar_t__*) ;} ;
typedef TYPE_3__ OCL_PTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, cl_context VAR_2, cl_device_id VAR_3, cl_command_queue_properties VAR_4, cl_command_queue *VAR_5)
{
  backend_ctx_t *VAR_6 = VAR_1->backend_ctx;

  OCL_PTR *VAR_7 = (OCL_PTR *) VAR_6->ocl;

  cl_int VAR_8;

  *VAR_5 = VAR_7->clCreateCommandQueue (VAR_2, VAR_3, VAR_4, &VAR_8);

  if (VAR_8 != VAR_0)
  {
    FUNC_0 (VAR_1, "clCreateCommandQueue(): %s", FUNC_2 (VAR_8));

    return -1;
  }

  return 0;
}
