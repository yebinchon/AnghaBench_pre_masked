
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*) ;

int FUNC_3 (char *VAR_0) {
  char VAR_1[32];
  int VAR_2 = FUNC_2 (VAR_0);
  FUNC_1 (VAR_0, VAR_2, VAR_1);

  return FUNC_0 (VAR_1[29]) * 256 + FUNC_0 (VAR_1[30]) * 16 + FUNC_0 (VAR_1[31]);
}
