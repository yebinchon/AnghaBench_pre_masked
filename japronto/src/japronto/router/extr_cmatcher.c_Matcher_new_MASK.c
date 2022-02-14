
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buffer_len; int * buffer; } ;
struct TYPE_5__ {scalar_t__ (* tp_alloc ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ PyTypeObject ;
typedef int PyObject ;
typedef TYPE_2__ Matcher ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static PyObject *
FUNC_1(PyTypeObject *VAR_0, PyObject *VAR_1, PyObject *VAR_2)
{
  Matcher* VAR_3 = ((void*)0);

  VAR_3 = (Matcher*)VAR_0->tp_alloc(VAR_0, 0);
  if(!VAR_3)
    goto finally;

  VAR_3->buffer = ((void*)0);
  VAR_3->buffer_len = 0;

  finally:
  return (PyObject*)VAR_3;
}
