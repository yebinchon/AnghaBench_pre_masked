
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tp_name; } ;
struct TYPE_5__ {int episode; int status; scalar_t__ num_steps; int context; TYPE_1__* env_c_api; } ;
struct TYPE_4__ {scalar_t__ (* start ) (int ,int,int) ;int (* error_message ) (int ) ;} ;
typedef int PyObject ;
typedef TYPE_2__ LabObject ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,char**,int*,int **) ;
 int FUNC_1 (int ,char*,int ) ;
 int * FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_5 (int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static PyObject* FUNC_9(PyObject* VAR_5, PyObject* VAR_6, PyObject* VAR_7) {
  LabObject* VAR_8 = (LabObject*)VAR_5;
  int VAR_9 = -1;
  int VAR_10;
  PyObject* VAR_11 = ((void*)0);

  char* VAR_12[] = {"episode", "seed", ((void*)0)};
  if (!FUNC_0(VAR_6, VAR_7, "|iO", VAR_12, &VAR_9,
                                   &VAR_11)) {
    return ((void*)0);
  }

  if (VAR_9 >= 0) {
    VAR_8->episode = VAR_9;
  }

  if (VAR_11 == ((void*)0) || VAR_11 == VAR_3) {
    VAR_10 = FUNC_6();
  } else {
    if (!FUNC_4(VAR_11)) {
      FUNC_1(VAR_2, "'seed' must be int or None, was '%s'.",
                   FUNC_5(VAR_11)->tp_name);
      return ((void*)0);
    }
    VAR_10 = FUNC_3(VAR_11);
  }

  if (VAR_8->env_c_api->start(VAR_8->context, VAR_8->episode, VAR_10) != 0) {
    FUNC_1(VAR_1, "Failed to start environment - \"%s\"",
                 VAR_8->env_c_api->error_message(VAR_8->context));
    return ((void*)0);
  }



  if (FUNC_2() != ((void*)0)) {
    return ((void*)0);
  }

  VAR_8->num_steps = 0;
  ++VAR_8->episode;
  VAR_8->status = VAR_0;
  VAR_4;
}
