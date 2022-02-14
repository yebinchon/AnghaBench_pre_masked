
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_var {char* id; } ;


 char* FUNC_0 (char*,int) ;
 int VAR_0 ;
 struct tl_var** FUNC_1 (int ,struct tl_var*) ;
 int * VAR_1 ;
 int FUNC_2 (char*,int) ;

struct tl_var *FUNC_3 (char *VAR_2, int VAR_3) {
  char *VAR_4 = FUNC_0 (VAR_2, VAR_3);
  struct tl_var VAR_5 = {.id = VAR_4};
  int VAR_6;
  for (VAR_6 = VAR_0; VAR_6 >= 0; VAR_6--) {
    struct tl_var **VAR_7 = FUNC_1 (VAR_1[VAR_6], &VAR_5);
    if (VAR_7) {
      FUNC_2 (VAR_4, VAR_3 + 1);
      return *VAR_7;
    }
  }
  return 0;
}
