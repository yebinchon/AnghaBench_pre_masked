
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jerryx_module_resolver_t ;
typedef int jerry_value_t ;
struct TYPE_3__ {int (* init_cb ) (void*) ;int (* deinit_cb ) (void*) ;} ;


 void* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int const) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int const,int const**,size_t,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

void
FUNC_5 (const jerry_value_t VAR_1,
                           const jerryx_module_resolver_t **VAR_2,
                           size_t VAR_3)
{
  void *VAR_4 = FUNC_0 (&VAR_0);

  if (FUNC_1 (VAR_1))
  {

    VAR_0.deinit_cb (VAR_4);
    VAR_0.init_cb (VAR_4);
    return;
  }


  FUNC_2 (VAR_1, VAR_2, VAR_3, ((void*)0));
}
