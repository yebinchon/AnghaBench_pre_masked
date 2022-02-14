
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
typedef int cl_device_id ;
typedef int cl_context ;
struct TYPE_7__ {scalar_t__ ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_8__ {int (* clCreateProgramWithBinary ) (int ,int ,int const*,size_t const*,unsigned char const**,scalar_t__*,scalar_t__*) ;} ;
typedef TYPE_3__ OCL_PTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ,int ,int const*,size_t const*,unsigned char const**,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3 (hashcat_ctx_t *VAR_1, cl_context VAR_2, cl_uint VAR_3, const cl_device_id *VAR_4, const size_t *VAR_5, const unsigned char **VAR_6, cl_int *VAR_7, cl_program *VAR_8)
{
  backend_ctx_t *VAR_9 = VAR_1->backend_ctx;

  OCL_PTR *VAR_10 = (OCL_PTR *) VAR_9->ocl;

  cl_int VAR_11;

  *VAR_8 = VAR_10->clCreateProgramWithBinary (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, &VAR_11);

  if (VAR_11 != VAR_0)
  {
    FUNC_0 (VAR_1, "clCreateProgramWithBinary(): %s", FUNC_2 (VAR_11));

    return -1;
  }

  return 0;
}
