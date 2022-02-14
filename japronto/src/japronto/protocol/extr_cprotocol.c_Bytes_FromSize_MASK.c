
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ob_refcnt; int * ob_type; } ;
struct TYPE_7__ {scalar_t__ ob_size; TYPE_1__ ob_base; } ;
struct TYPE_8__ {TYPE_2__ ob_base; } ;
typedef scalar_t__ Py_ssize_t ;
typedef TYPE_3__ PyBytesObject ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 TYPE_3__* FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline PyBytesObject*
FUNC_2(size_t VAR_2)
{
  PyBytesObject* VAR_3;
  if(!(VAR_3 = FUNC_1(sizeof(PyBytesObject) + VAR_0)))
    return (PyBytesObject*)FUNC_0();

  VAR_3->ob_base.ob_base.ob_refcnt = 1;
  VAR_3->ob_base.ob_base.ob_type = &VAR_1;
  VAR_3->ob_base.ob_size = (Py_ssize_t)VAR_2;

  return VAR_3;
}
