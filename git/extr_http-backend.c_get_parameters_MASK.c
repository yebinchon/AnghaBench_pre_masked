
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {char* util; } ;
struct string_list {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 struct string_list* VAR_0 ;
 struct string_list_item* FUNC_2 (struct string_list*,char*) ;
 struct string_list_item* FUNC_3 (struct string_list*,char*) ;
 char* FUNC_4 (char const**) ;
 char* FUNC_5 (char const**) ;
 struct string_list* FUNC_6 (int,int) ;

__attribute__((used)) static struct string_list *FUNC_7(void)
{
 if (!VAR_0) {
  const char *VAR_1 = FUNC_1("QUERY_STRING");

  VAR_0 = FUNC_6(1, sizeof(*VAR_0));
  while (VAR_1 && *VAR_1) {
   char *VAR_2 = FUNC_4(&VAR_1);
   char *VAR_3 = FUNC_5(&VAR_1);
   struct string_list_item *VAR_4;

   VAR_4 = FUNC_3(VAR_0, VAR_2);
   if (!VAR_4)
    VAR_4 = FUNC_2(VAR_0, VAR_2);
   else
    FUNC_0(VAR_4->util);
   VAR_4->util = VAR_3;
  }
 }
 return VAR_0;
}
