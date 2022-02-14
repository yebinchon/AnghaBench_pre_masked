
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; int num_steps; int context; TYPE_1__* env_c_api; } ;
struct TYPE_4__ {int (* action_discrete_count ) (int ) ;scalar_t__ (* advance ) (int ,int,double*) ;int (* error_message ) (int ) ;int (* act_discrete ) (int ,int*) ;} ;
typedef int PyObject ;
typedef int PyArrayObject ;
typedef TYPE_2__ LabObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,char*,char**,int *,int **,int*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,int) ;
 int * FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_8 (double) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int*) ;
 scalar_t__ FUNC_12 (int ,int,double*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static PyObject* FUNC_14(PyObject* VAR_5, PyObject* VAR_6, PyObject* VAR_7) {
  LabObject* VAR_8 = (LabObject*)VAR_5;
  PyObject* VAR_9 = ((void*)0);
  int VAR_10 = 1;

  char* VAR_11[] = {"action", "num_steps", ((void*)0)};
  double VAR_12;

  if (!FUNC_0(VAR_6, VAR_7, "O!|i", VAR_11, &VAR_2,
                                   &VAR_9, &VAR_10)) {
    return ((void*)0);
  }

  if (!FUNC_9(VAR_8)) {
    FUNC_7(VAR_3,
                    "Environment in wrong status to advance.");
    return ((void*)0);
  }

  PyArrayObject* VAR_13 = (PyArrayObject*)VAR_9;

  int VAR_14 =
      VAR_8->env_c_api->action_discrete_count(VAR_8->context);
  if (FUNC_3(VAR_13) != 1 ||
      FUNC_2(VAR_13, 0) != VAR_14) {
    FUNC_5(VAR_4, "action must have shape (%i)",
                 VAR_14);
    return ((void*)0);
  }

  if (FUNC_4(VAR_13) != VAR_1) {
    FUNC_7(VAR_4, "action must have dtype np.intc");
    return ((void*)0);
  }

  VAR_8->env_c_api->act_discrete(VAR_8->context, (int*)FUNC_1(VAR_13));

  VAR_8->status = VAR_8->env_c_api->advance(VAR_8->context, VAR_10, &VAR_12);
  VAR_8->num_steps += VAR_10;
  if (VAR_8->status == VAR_0) {
    FUNC_5(VAR_4, "Failed to advance environment \"%s\"",
                 VAR_8->env_c_api->error_message(VAR_8->context));
    return ((void*)0);
  }



  if (FUNC_6() != ((void*)0)) {
    return ((void*)0);
  }

  return FUNC_8(VAR_12);
}
