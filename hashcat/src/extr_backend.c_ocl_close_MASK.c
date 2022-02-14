
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_6__ {int * ocl; } ;
typedef TYPE_2__ backend_ctx_t ;
struct TYPE_7__ {scalar_t__ lib; } ;
typedef TYPE_3__ OCL_PTR ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2 (hashcat_ctx_t *VAR_0)
{
  backend_ctx_t *VAR_1 = VAR_0->backend_ctx;

  OCL_PTR *VAR_2 = (OCL_PTR *) VAR_1->ocl;

  if (VAR_2)
  {
    if (VAR_2->lib)
    {
      FUNC_0 (VAR_2->lib);
    }

    FUNC_1 (VAR_1->ocl);

    VAR_1->ocl = ((void*)0);
  }
}
