
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int * VAR_0 ;

int FUNC_3 (char *VAR_1) {
  if (VAR_0) {
    FUNC_0 (VAR_0);
    VAR_0 = ((void*)0);
  }
  VAR_0 = FUNC_1 (VAR_1, "w");
  if (VAR_0 == ((void*)0)) {
    FUNC_2 ("fopen (\"%s\", \"w\") fail. %m\n", VAR_1);
  }
  return 0;
}
