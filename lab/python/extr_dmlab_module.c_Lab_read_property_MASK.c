
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int context; TYPE_1__* env_c_api; } ;
struct TYPE_3__ {int (* read_property ) (int ,char*,char const**) ;} ;
typedef int PyObject ;
typedef TYPE_2__ LabObject ;






 int FUNC_0 (int *,int *,char*,char**,char**) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (char const*) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int ,char*,char const**) ;

__attribute__((used)) static PyObject* FUNC_5(PyObject* VAR_2, PyObject* VAR_3,
                                   PyObject* VAR_4) {
  LabObject* VAR_5 = (LabObject*)VAR_2;
  char* VAR_6 = ((void*)0);
  const char* VAR_7 = ((void*)0);
  char* VAR_8[] = {"key", ((void*)0)};

  if (!FUNC_0(VAR_3, VAR_4, "s", VAR_8, &VAR_6)) {
    return ((void*)0);
  }

  switch (VAR_5->env_c_api->read_property(VAR_5->context, VAR_6, &VAR_7)) {
    case 128:



      return FUNC_2(VAR_7);

    case 129:
      FUNC_1(VAR_1, "'%s' not readable.", VAR_6);
      break;
    case 131:
      FUNC_1(VAR_1, "Internal error while reading key '%s'.",
                   VAR_6);
      break;
    case 130:
    default:
      FUNC_1(VAR_0, "'%s' not found.", VAR_6);
      break;
  }
  return ((void*)0);
}
