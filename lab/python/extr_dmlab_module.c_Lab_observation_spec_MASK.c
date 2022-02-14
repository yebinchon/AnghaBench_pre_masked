
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ typeobj; } ;
struct TYPE_8__ {scalar_t__ type; int dims; int * shape; } ;
struct TYPE_7__ {int context; TYPE_1__* env_c_api; } ;
struct TYPE_6__ {int (* observation_count ) (int ) ;int (* observation_name ) (int ,int) ;int (* observation_spec ) (int ,int,TYPE_3__*) ;} ;
typedef int PyObject ;
typedef TYPE_2__ LabObject ;
typedef TYPE_3__ EnvCApi_ObservationSpec ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_5__* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *,int,int ) ;
 int VAR_2 ;
 int * FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int *,int,int ) ;
 int VAR_3 ;
 int FUNC_9 (char*,char*,int ,char*,int *,char*,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,TYPE_3__*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static PyObject* FUNC_14(PyObject* VAR_4, PyObject* VAR_5) {
  LabObject* VAR_6 = (LabObject*)VAR_4;
  int VAR_7 = VAR_6->env_c_api->observation_count(VAR_6->context);
  PyObject* VAR_8 = FUNC_5(VAR_7);
  if (VAR_8 == ((void*)0)) {
    FUNC_2();
    return ((void*)0);
  }
  EnvCApi_ObservationSpec VAR_9;
  PyObject* VAR_10;
  PyObject* VAR_11;

  for (int VAR_12 = 0; VAR_12 < VAR_7; ++VAR_12) {
    VAR_6->env_c_api->observation_spec(VAR_6->context, VAR_12, &VAR_9);
    if (VAR_9.type == VAR_0) {



      VAR_10 = (PyObject*)(&VAR_2);

      VAR_11 = FUNC_7(0);
      if (FUNC_6(VAR_8, VAR_12, FUNC_9(
              "{s:s,s:N,s:O}",
              "name", VAR_6->env_c_api->observation_name(VAR_6->context, VAR_12),
              "shape", VAR_11,
              "dtype", VAR_10)) != 0) {
        FUNC_3(VAR_1, "Unable to populate list");
        return ((void*)0);
      }
      continue;
    }
    int VAR_13 = FUNC_0(VAR_9.type);
    if (VAR_13 == -1) {
      FUNC_3(VAR_1, "Invalid observation spec.");
      return ((void*)0);
    }

    VAR_10 = (PyObject*)FUNC_1(VAR_13)->typeobj;
    VAR_11 = FUNC_7(VAR_9.dims);
    for (int VAR_14 = 0; VAR_14 < VAR_9.dims; ++VAR_14) {
      if (FUNC_8(VAR_11, VAR_14, FUNC_4(VAR_9.shape[VAR_14])) != 0) {
        FUNC_3(VAR_1, "Unable to populate tuple");
        return ((void*)0);
      }
    }
    if (FUNC_6(VAR_8, VAR_12, FUNC_9(
            "{s:s,s:N,s:O}",
            "name", VAR_6->env_c_api->observation_name(VAR_6->context, VAR_12),
            "shape", VAR_11,
            "dtype", VAR_10)) != 0) {
      FUNC_3(VAR_1, "Unable to populate list");
      return ((void*)0);
    }
  }
  return VAR_8;
}
