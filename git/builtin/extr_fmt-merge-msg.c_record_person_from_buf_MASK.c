
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {void* util; } ;
struct string_list {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*,char) ;
 struct string_list_item* FUNC_3 (struct string_list*,char*) ;
 struct string_list_item* FUNC_4 (struct string_list*,char*) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char const*) ;
 scalar_t__ FUNC_7 (struct string_list_item*) ;
 char* FUNC_8 (char*,int) ;

__attribute__((used)) static void FUNC_9(int VAR_0, struct string_list *VAR_1,
       const char *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;
 struct string_list_item *VAR_6;
 const char *VAR_7;

 VAR_7 = (VAR_0 == 'a') ? "\nauthor " : "\ncommitter ";
 VAR_4 = FUNC_6(VAR_2, VAR_7);
 if (!VAR_4)
  return;
 VAR_4 += FUNC_5(VAR_7);
 VAR_5 = FUNC_2(VAR_4, '<');
 if (*VAR_5)
  VAR_5--;
 while (FUNC_1(*VAR_5) && VAR_4 <= VAR_5)
  VAR_5--;
 if (VAR_5 < VAR_4)
  return;
 VAR_3 = FUNC_8(VAR_4, VAR_5 - VAR_4 + 1);

 VAR_6 = FUNC_4(VAR_1, VAR_3);
 if (!VAR_6) {
  VAR_6 = FUNC_3(VAR_1, VAR_3);
  VAR_6->util = (void *)0;
 }
 VAR_6->util = (void*)(FUNC_7(VAR_6) + 1);
 FUNC_0(VAR_3);
}
