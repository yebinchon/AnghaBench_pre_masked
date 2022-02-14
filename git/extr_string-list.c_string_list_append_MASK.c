
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int dummy; } ;
struct string_list {scalar_t__ strdup_strings; } ;


 struct string_list_item* FUNC_0 (struct string_list*,char*) ;
 char* FUNC_1 (char const*) ;

struct string_list_item *FUNC_2(struct string_list *VAR_0,
         const char *VAR_1)
{
 return FUNC_0(
   VAR_0,
   VAR_0->strdup_strings ? FUNC_1(VAR_1) : (char *)VAR_1);
}
