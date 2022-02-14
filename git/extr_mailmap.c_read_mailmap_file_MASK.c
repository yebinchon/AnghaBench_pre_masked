
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
typedef int buffer ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (struct string_list*,char*,char**) ;

__attribute__((used)) static int FUNC_5(struct string_list *VAR_2, const char *VAR_3,
        char **VAR_4)
{
 char VAR_5[1024];
 FILE *VAR_6;

 if (!VAR_3)
  return 0;

 VAR_6 = FUNC_3(VAR_3, "r");
 if (!VAR_6) {
  if (VAR_1 == VAR_0)
   return 0;
  return FUNC_0("unable to open mailmap at %s", VAR_3);
 }

 while (FUNC_2(VAR_5, sizeof(VAR_5), VAR_6) != ((void*)0))
  FUNC_4(VAR_2, VAR_5, VAR_4);
 FUNC_1(VAR_6);
 return 0;
}
