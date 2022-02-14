
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,char*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (char*,int,char*,...) ;
 int VAR_8 ;

void FUNC_2 (void) {
  char VAR_9[100], VAR_10[200], VAR_11[50];
  FUNC_1 (VAR_9, 99, "%d_%lld_%s", VAR_8, VAR_0[VAR_7], VAR_1[VAR_4]);

  FUNC_1 (VAR_10, 199, "%s.kad", VAR_9);
  FUNC_0 (VAR_10, VAR_1[VAR_6]);

  FUNC_1 (VAR_10, 199, "%s.genre", VAR_9);
  FUNC_1 (VAR_11, 49, "%lld", VAR_0[VAR_5]);
  FUNC_0 (VAR_10, VAR_11);

  FUNC_1 (VAR_10, 199, "%s.rate", VAR_9);
  FUNC_1 (VAR_11, 49, "%lld", VAR_0[VAR_3]);
  FUNC_0 (VAR_10, VAR_11);

  FUNC_1 (VAR_10, 199, "%s.album", VAR_9);
  FUNC_0 (VAR_10, VAR_1[VAR_2]);
}
