
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_4(int VAR_6, char **VAR_7) {

  FUNC_2(VAR_5, ((void*)0), VAR_2, 0);
  FUNC_2(VAR_4, ((void*)0), VAR_2, 0);
  FUNC_3(VAR_0, VAR_1);

  if (FUNC_1(VAR_7[0], VAR_3) == ((void*)0)) {
    FUNC_0("realpath");
    return -1;
  }

  return 0;
}
