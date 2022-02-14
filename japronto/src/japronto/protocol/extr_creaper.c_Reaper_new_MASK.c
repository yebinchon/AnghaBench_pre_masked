
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ (* tp_alloc ) (TYPE_2__*,int ) ;} ;
struct TYPE_5__ {int * check_interval; int * check_idle_handle; int * check_idle; int * call_later; int * connections; } ;
typedef TYPE_1__ Reaper ;
typedef TYPE_2__ PyTypeObject ;
typedef int PyObject ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static PyObject*
FUNC_1(PyTypeObject* VAR_0, PyObject* VAR_1, PyObject* VAR_2)
{
  Reaper* VAR_3 = ((void*)0);

  VAR_3 = (Reaper*)VAR_0->tp_alloc(VAR_0, 0);
  if(!VAR_3)
    goto finally;

  VAR_3->connections = ((void*)0);
  VAR_3->call_later = ((void*)0);
  VAR_3->check_idle = ((void*)0);
  VAR_3->check_idle_handle = ((void*)0);
  VAR_3->check_interval = ((void*)0);

  finally:
  return (PyObject*)VAR_3;
}
