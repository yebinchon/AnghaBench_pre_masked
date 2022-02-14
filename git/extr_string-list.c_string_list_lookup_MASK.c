
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int dummy; } ;
struct string_list {struct string_list_item* items; } ;


 int FUNC_0 (struct string_list*,char const*,int*) ;

struct string_list_item *FUNC_1(struct string_list *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2);
 if (!VAR_2)
  return ((void*)0);
 return VAR_0->items + VAR_3;
}
