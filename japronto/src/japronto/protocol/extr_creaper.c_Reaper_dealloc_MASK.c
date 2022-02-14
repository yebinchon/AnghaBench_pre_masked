
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* tp_free ) (int *) ;} ;
struct TYPE_5__ {int connections; int call_later; int check_idle; int check_idle_handle; int check_interval; } ;
typedef TYPE_1__ Reaper ;
typedef int PyObject ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(Reaper* VAR_0)
{
  FUNC_1(VAR_0->check_interval);
  FUNC_1(VAR_0->check_idle_handle);
  FUNC_1(VAR_0->check_idle);
  FUNC_1(VAR_0->call_later);
  FUNC_1(VAR_0->connections);

  FUNC_0(VAR_0)->tp_free((PyObject*)VAR_0);
}
