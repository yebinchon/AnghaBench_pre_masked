
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ia64_sal_os_state {int dummy; } ;
typedef int slidx_table_t ;
typedef int peidx_table_t ;
struct TYPE_5__ {int cm; scalar_t__ ci; scalar_t__ cc; scalar_t__ bc; scalar_t__ uc; scalar_t__ rc; scalar_t__ tc; scalar_t__ us; } ;
typedef TYPE_1__ pal_processor_state_info_t ;
struct TYPE_6__ {scalar_t__ bsi; scalar_t__ eb; scalar_t__ ib; } ;
typedef TYPE_2__ pal_bus_check_info_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,TYPE_2__*,struct ia64_sal_os_state*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(int VAR_0, slidx_table_t *VAR_1,
        peidx_table_t *VAR_2, pal_bus_check_info_t *VAR_3,
        struct ia64_sal_os_state *VAR_4)
{
 pal_processor_state_info_t *VAR_5 =
  (pal_processor_state_info_t*)FUNC_3(VAR_2);
 if (VAR_5->cm == 1)
  return FUNC_1("machine check is already corrected.");




 if (VAR_5->us || VAR_5->ci == 0)
  return FUNC_0("error not contained");




 if (VAR_5->tc && !(VAR_5->cc || VAR_5->bc || VAR_5->rc || VAR_5->uc))
  return FUNC_5(VAR_2);
 if (VAR_5->cc == 0 && (VAR_5->bc == 0 || VAR_3 == ((void*)0)))
  return FUNC_0("No cache or bus check");




 if (FUNC_2(VAR_2) > 1)
  return FUNC_0("Too many bus checks");

 if (VAR_3->ib)
  return FUNC_0("Internal Bus error");
 if (VAR_3->eb && VAR_3->bsi > 0)
  return FUNC_0("External bus check fatal status");




 if (VAR_0)
  return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);




 return FUNC_0("Strange SAL record");
}
