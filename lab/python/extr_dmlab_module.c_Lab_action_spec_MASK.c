
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int context; TYPE_1__* env_c_api; } ;
struct TYPE_3__ {int (* action_discrete_count ) (int ) ;int (* action_discrete_name ) (int ,int) ;int (* action_discrete_bounds ) (int ,int,int*,int*) ;} ;
typedef int PyObject ;
typedef TYPE_2__ LabObject ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (char*,char*,int,char*,int,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int*,int*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static PyObject* FUNC_8(PyObject* VAR_1, PyObject* VAR_2) {
  LabObject* VAR_3 = (LabObject*)VAR_1;
  PyObject* VAR_4;

  int VAR_5 = VAR_3->env_c_api->action_discrete_count(VAR_3->context);
  VAR_4 = FUNC_2(VAR_5);
  if (VAR_4 == ((void*)0)) {
    FUNC_0();
    return ((void*)0);
  }
  int VAR_6, VAR_7;
  for (int VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
    VAR_3->env_c_api->action_discrete_bounds(VAR_3->context, VAR_8, &VAR_6,
                                            &VAR_7);
    if (FUNC_3(VAR_4, VAR_8,
                       FUNC_4("{s:i,s:i,s:s}", "min", VAR_6,
                                     "max", VAR_7, "name",
                                     VAR_3->env_c_api->action_discrete_name(
                                         VAR_3->context, VAR_8))) != 0) {
      FUNC_1(VAR_0, "Unable to populate list");
      return ((void*)0);
    }
  }

  return VAR_4;
}
