
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {char* string; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct string_list_item *VAR_0,
          void *VAR_1)
{
 int *VAR_2 = VAR_1;
 char *VAR_3 = VAR_0->string;

 if (!*VAR_3) {
  *VAR_2 = 1;
  return 0;
 } else if (!FUNC_1(VAR_3)) {
  return 0;
 } else if (*VAR_2) {

  return 1;
 } else {
  char *VAR_4 = FUNC_2(VAR_3, 0);
  if (!VAR_4) {
   return 0;
  }
  FUNC_0(VAR_0->string);
  VAR_0->string = VAR_4;
  return 1;
 }
}
