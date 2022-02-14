
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int observation_count; int * observation_indices; int context; TYPE_1__* env_c_api; } ;
struct TYPE_4__ {int (* observation_name ) (int ,int ) ;int (* observation ) (int ,int ,int *) ;} ;
typedef int PyObject ;
typedef TYPE_2__ LabObject ;
typedef int EnvCApi_Observation ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static PyObject* FUNC_9(PyObject* VAR_1, PyObject* VAR_2) {
  LabObject* VAR_3 = (LabObject*)VAR_1;

  if (!FUNC_5((VAR_3))) {
    FUNC_3(VAR_0,
                    "Environment in wrong status for call to observations()");
    return ((void*)0);
  }

  PyObject* VAR_4 = FUNC_0();
  if (VAR_4 == ((void*)0)) {
    FUNC_2();
    return ((void*)0);
  }

  EnvCApi_Observation VAR_5;

  for (int VAR_6 = 0; VAR_6 < VAR_3->observation_count; ++VAR_6) {
    VAR_3->env_c_api->observation(VAR_3->context, VAR_3->observation_indices[VAR_6],
                                 &VAR_5);
    PyObject* VAR_7 = FUNC_6(&VAR_5);
    if (VAR_7 == ((void*)0)) {
      FUNC_4(VAR_4);
      return ((void*)0);
    }


    FUNC_1(VAR_4,
                         VAR_3->env_c_api->observation_name(
                             VAR_3->context, VAR_3->observation_indices[VAR_6]),
                         VAR_7);
    FUNC_4(VAR_7);
  }
  return VAR_4;
}
