
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int context; TYPE_1__* env_c_api; } ;
struct TYPE_3__ {int (* write_property ) (int ,char*,char*) ;} ;
typedef int PyObject ;
typedef TYPE_2__ LabObject ;






 int FUNC_0 (int *,int *,char*,char**,char**,char**) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static PyObject* FUNC_3(PyObject* VAR_3, PyObject* VAR_4,
                                    PyObject* VAR_5) {
  LabObject* VAR_6 = (LabObject*)VAR_3;
  char* VAR_7 = ((void*)0);
  char* VAR_8 = ((void*)0);
  char* VAR_9[] = {"key", "value", ((void*)0)};
  if (!FUNC_0(VAR_4, VAR_5, "ss", VAR_9, &VAR_7, &VAR_8)) {
    return ((void*)0);
  }
  switch (VAR_6->env_c_api->write_property(VAR_6->context, VAR_7, VAR_8)) {
    case 128:
      VAR_2;
    case 129:
      FUNC_1(VAR_1, "'%s' not writable.", VAR_7);
      break;
    case 131:
      FUNC_1(VAR_1, "Type error! Cannot assign '%s' to '%s'.",
                   VAR_8, VAR_7);
      break;
    case 130:
    default:
      FUNC_1(VAR_0, "'%s' not found.", VAR_7);
      break;
  }
  return ((void*)0);
}
