
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;


 int FUNC_0 (struct string_list*,char*,char**) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static void FUNC_2(struct string_list *VAR_0, char *VAR_1,
    char **VAR_2)
{
 while (*VAR_1) {
  char *VAR_3 = FUNC_1(VAR_1, '\n');

  if (*VAR_3)
   *VAR_3++ = '\0';

  FUNC_0(VAR_0, VAR_1, VAR_2);
  VAR_1 = VAR_3;
 }
}
