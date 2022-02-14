
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int context; TYPE_1__* env_c_api; } ;
struct TYPE_3__ {int (* list_property ) (int ,int *,char*,int ) ;} ;
typedef int PyObject ;
typedef TYPE_2__ LabObject ;






 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,char**,char**) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int *,char*,int ) ;

__attribute__((used)) static PyObject* FUNC_5(PyObject* VAR_3, PyObject* VAR_4,
                                PyObject* VAR_5) {
  LabObject* VAR_6 = (LabObject*)VAR_3;
  char* VAR_7 = "";
  char* VAR_8[] = {"key", ((void*)0)};
  if (!FUNC_0(VAR_4, VAR_5, "|s", VAR_8, &VAR_7)) {
    return ((void*)0);
  }
  PyObject* VAR_9 = FUNC_1();
  if (VAR_9 == ((void*)0)) {
    FUNC_3();
    return ((void*)0);
  }
  switch (VAR_6->env_c_api->list_property(VAR_6->context, VAR_9, VAR_7,
                                         VAR_0)) {
    case 128:
      return VAR_9;
    case 129:
      FUNC_2(VAR_2, "'%s' not listable.", VAR_7);
      break;
    case 131:
      FUNC_2(VAR_2, "Internal error while listing key '%s'.",
                   VAR_7);
      break;
    case 130:
    default:
      FUNC_2(VAR_1, "'%s' not found.", VAR_7);
      break;
  }
  return ((void*)0);
}
