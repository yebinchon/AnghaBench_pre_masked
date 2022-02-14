
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_type {char* id; } ;


 char* FUNC_0 (char const*,int) ;
 int VAR_0 ;
 struct tl_type** FUNC_1 (int ,struct tl_type*) ;
 int FUNC_2 (char*,int) ;

struct tl_type *FUNC_3 (const char *VAR_1, int VAR_2) {
  char *VAR_3 = FUNC_0 (VAR_1, VAR_2);
  struct tl_type VAR_4 = {.id = VAR_3};
  struct tl_type **VAR_5 = FUNC_1 (VAR_0, &VAR_4);
  FUNC_2 (VAR_3, VAR_2 + 1);
  return VAR_5 ? *VAR_5 : 0;
}
