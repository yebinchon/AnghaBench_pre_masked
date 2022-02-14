
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_3 (scalar_t__) ;

int FUNC_4(int VAR_5, char* VAR_6[]) {
  int VAR_7 = 0;
  VAR_2 = 0;

  for (int VAR_8 = 1; VAR_8 < VAR_5; ++VAR_8) {
    char* VAR_9 = FUNC_2(VAR_6[VAR_8], ((void*)0));
    if (VAR_9 == ((void*)0)) {
      FUNC_0(VAR_3, "Error resolving path '%s', error was: '%s'\n",
              VAR_6[VAR_8], FUNC_3(VAR_2));
      VAR_2 = 0;
      ++VAR_7;
    } else {
      FUNC_0(VAR_4, "%s\n", VAR_9);
      FUNC_1(VAR_9);
    }
  }

  return VAR_7 == 0 ? VAR_1 : VAR_0;
}
