
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;

int FUNC_4 (int VAR_4, int VAR_5, char *VAR_6) {
  if (VAR_6 == ((void*)0)) {
    return 0;
  }

  int VAR_7 = FUNC_3 (VAR_6);
  if (!FUNC_0 (VAR_5) || VAR_7 == 0 || VAR_7 >= VAR_1) {
    return 0;
  }

  if (FUNC_2 (VAR_2, VAR_6) < 0) {
    return 0;
  }

  if (VAR_3 == 0) {
    return 1;
  }

  return FUNC_1 (VAR_4, VAR_5, VAR_0);
}
