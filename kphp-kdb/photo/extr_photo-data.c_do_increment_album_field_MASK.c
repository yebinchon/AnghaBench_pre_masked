
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int,int ) ;
 int FUNC_2 (scalar_t__,char*) ;
 scalar_t__ VAR_2 ;

int FUNC_3 (int VAR_3, int VAR_4, char *VAR_5, int VAR_6) {
  if (VAR_5 == ((void*)0)) {
    return 0;
  }

  if (!FUNC_0 (VAR_4)) {
    return 0;
  }

  int VAR_7 = FUNC_2 (VAR_2 + VAR_0, VAR_5);
  if (VAR_7 < 0) {
    return 0;
  }

  return FUNC_1 (VAR_3, VAR_4, VAR_7, VAR_6, VAR_1);
}
