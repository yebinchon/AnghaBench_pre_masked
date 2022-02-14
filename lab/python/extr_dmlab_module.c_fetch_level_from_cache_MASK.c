
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (void*,char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(void* VAR_0,
                                   const char* const VAR_1[],
                                   int VAR_2,
                                   const char* VAR_3,
                                   const char* VAR_4) {

  if (FUNC_0()) return 0;


  PyObject* VAR_5 = FUNC_1(
      VAR_0, "fetch", "ss", VAR_3, VAR_4);

  bool VAR_6 = VAR_5 != ((void*)0) && FUNC_2(VAR_5);

  FUNC_3(VAR_5);

  return VAR_6;
}
