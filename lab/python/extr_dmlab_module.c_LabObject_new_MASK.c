
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int status; int * env_c_api; } ;
struct TYPE_5__ {scalar_t__ (* tp_alloc ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ PyTypeObject ;
typedef int PyObject ;
typedef TYPE_2__ LabObject ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int * FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static PyObject* FUNC_3(PyTypeObject* VAR_2, PyObject* VAR_3,
                               PyObject* VAR_4) {
  LabObject* VAR_5;

  VAR_5 = (LabObject*)VAR_2->tp_alloc(VAR_2, 0);
  if (VAR_5 != ((void*)0)) {
    VAR_5->env_c_api = FUNC_1(1, sizeof *VAR_5->env_c_api);

    if (VAR_5->env_c_api == ((void*)0)) {
      FUNC_0(VAR_1, "malloc failed.");
      return ((void*)0);
    }
    VAR_5->status = VAR_0;
  }
  return (PyObject*)VAR_5;
}
