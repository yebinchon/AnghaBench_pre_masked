
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyMODINIT_FUNC ;


 int * FUNC_0 (char*,int ,char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

PyMODINIT_FUNC FUNC_3(void) {
  PyObject* VAR_2 =
      FUNC_0("deepmind_lab", VAR_0, "DeepMind Lab API module");

  if (VAR_2 != ((void*)0) && FUNC_2(VAR_2, &VAR_1) == 0) {
    FUNC_1();
  }
}
