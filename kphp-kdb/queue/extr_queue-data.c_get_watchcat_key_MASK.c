
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (char*,int,int,int,char*,int ) ;
 char* FUNC_2 (long long) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (long long,int,char*) ;
 long long FUNC_5 (char*) ;

char *FUNC_6 (char *VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  long long VAR_7 = FUNC_5 (VAR_3);
  if (VAR_7 == -1) {
    return ((void*)0);
  }

  char *VAR_8 = FUNC_2 (VAR_7);
  if (VAR_1 > 1) {
    FUNC_0 (VAR_2, "name = %s\n", VAR_8);
  }

  char *VAR_9 = FUNC_1 (VAR_8, VAR_4, VAR_5, VAR_6, VAR_3, VAR_0);

  if (FUNC_3 (VAR_9 + 2, "failed", 6)) {
    FUNC_4 (VAR_7, VAR_6, VAR_3);
  }

  return VAR_9;
}
