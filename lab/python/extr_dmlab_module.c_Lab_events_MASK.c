
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int id; int observation_count; int * observations; } ;
struct TYPE_6__ {int status; int context; TYPE_1__* env_c_api; } ;
struct TYPE_5__ {int (* event_type_count ) (int ) ;int (* event_count ) (int ) ;int (* event_type_name ) (int ,int) ;int (* event ) (int ,int,TYPE_3__*) ;} ;
typedef int PyObject ;
typedef TYPE_2__ LabObject ;
typedef TYPE_3__ EnvCApi_Event ;





 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *,int,int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int,TYPE_3__*) ;
 int FUNC_14 (int ,int) ;

__attribute__((used)) static PyObject* FUNC_15(PyObject* VAR_1, PyObject* VAR_2) {
  LabObject* VAR_3 = (LabObject*)VAR_1;

  switch (VAR_3->status) {
    case 130:
    case 129:
    case 128:
      break;
    default:
      FUNC_2(VAR_0,
                      "Environment in wrong status for call to events()");
      return ((void*)0);
  }

  int VAR_4 = VAR_3->env_c_api->event_type_count(VAR_3->context);
  int VAR_5 = VAR_3->env_c_api->event_count(VAR_3->context);
  PyObject* VAR_6 = FUNC_3(VAR_5);
  if (VAR_6 == ((void*)0)) {
    FUNC_1();
    return ((void*)0);
  }

  for (int VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
    EnvCApi_Event VAR_8;
    VAR_3->env_c_api->event(VAR_3->context, VAR_7, &VAR_8);
    if (0 > VAR_8.id || VAR_8.id >= VAR_4) {
      FUNC_0(VAR_0,
                   "Environment generated invalid event id. "
                   "Event id(%d) must be in range [0, %d).",
                   VAR_8.id, VAR_4);
      FUNC_9(VAR_6);
      return ((void*)0);
    }
    PyObject* VAR_9 = FUNC_6(2);
    FUNC_7(VAR_9, 0,



                    FUNC_5(

                        VAR_3->env_c_api->event_type_name(VAR_3->context,
                                                         VAR_8.id)));

    PyObject* VAR_10 = FUNC_3(VAR_8.observation_count);
    if (VAR_10 == ((void*)0)) {
      FUNC_9(VAR_6);
      return ((void*)0);
    }
    for (int VAR_11 = 0; VAR_11 < VAR_8.observation_count; ++VAR_11) {
      PyObject* VAR_12 = FUNC_10(&VAR_8.observations[VAR_11]);
      if (VAR_12 == ((void*)0)) {
        FUNC_9(VAR_10);
        FUNC_9(VAR_6);
        return ((void*)0);
      }
      FUNC_4(VAR_10, VAR_11, VAR_12);
    }
    FUNC_7(VAR_9, 1, VAR_10);
    FUNC_4(VAR_6, VAR_7, VAR_9);
  }

  return VAR_6;
}
