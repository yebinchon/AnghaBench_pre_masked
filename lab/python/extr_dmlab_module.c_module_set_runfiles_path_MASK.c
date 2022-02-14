
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int runfiles_path; } ;
typedef int PyObject ;
typedef TYPE_1__ LabModuleState ;


 int FUNC_0 (int *,char*,char const**) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static PyObject* FUNC_5(PyObject* VAR_2, PyObject* VAR_3) {
  const char* VAR_4;
  if (!FUNC_0(VAR_3, "s", &VAR_4)) {
    return ((void*)0);
  }

  LabModuleState* VAR_5 = FUNC_2(VAR_2);
  if (FUNC_4(VAR_4) < sizeof(VAR_5->runfiles_path)) {
    FUNC_3(VAR_5->runfiles_path, VAR_4);
  } else {
    FUNC_1(VAR_0, "Runfiles directory name too long!");
    return ((void*)0);
  }

  VAR_1;
}
