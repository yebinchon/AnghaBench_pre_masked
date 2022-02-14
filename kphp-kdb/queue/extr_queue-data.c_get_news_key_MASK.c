
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ll ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char*,int,int,int,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

char *FUNC_4 (int VAR_3, int VAR_4, int VAR_5, ll VAR_6) {
  if (!FUNC_0 (VAR_3)) {
    return "{\"failed\":\"4\"}";
  }

  char *VAR_7 = FUNC_2 (VAR_6);
  if (VAR_1 > 1) {
    FUNC_1 (VAR_2, "name = %s\n", VAR_7);
  }

  return FUNC_3 (VAR_7, VAR_3, VAR_4, VAR_5, ((void*)0), VAR_0);
}
