
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int util; int string; } ;
struct string_list {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,...) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char*,char) ;
 struct string_list_item* FUNC_5 (struct string_list*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(char *VAR_0, struct string_list *VAR_1)
{
 while (*VAR_0) {
  struct string_list_item *VAR_2;
  char *VAR_3;
  char *VAR_4 = FUNC_3(VAR_0, '=');
  if (!VAR_4) {
   VAR_3 = FUNC_4(VAR_0, '\n');
   return FUNC_1(FUNC_0("no key present in '%.*s'"),
         (int) (VAR_3 - VAR_0), VAR_0);
  }
  VAR_3 = FUNC_4(VAR_4, '\n');
  *VAR_4++ = '\0';
  VAR_2 = FUNC_5(VAR_1, VAR_0);

  VAR_0 = VAR_3 + (*VAR_3 == '\n');
  *VAR_3 = '\0';
  VAR_4 = FUNC_2(VAR_4);
  if (!VAR_4)
   return FUNC_1(FUNC_0("unable to dequote value of '%s'"),
         VAR_2->string);
  VAR_2->util = FUNC_6(VAR_4);
 }
 return 0;
}
