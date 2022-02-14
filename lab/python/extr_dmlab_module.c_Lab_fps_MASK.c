
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int context; TYPE_1__* env_c_api; } ;
struct TYPE_3__ {int (* fps ) (int ) ;} ;
typedef int PyObject ;
typedef TYPE_2__ LabObject ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static PyObject* FUNC_2(PyObject* VAR_0, PyObject* VAR_1) {
  return FUNC_0(
      ((LabObject*)VAR_0)->env_c_api->fps(((LabObject*)VAR_0)->context));
}
