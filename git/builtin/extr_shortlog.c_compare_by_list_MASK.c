
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {struct string_list* util; } ;
struct string_list {scalar_t__ nr; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct string_list_item *VAR_2 = VAR_0, *VAR_3 = VAR_1;
 const struct string_list *VAR_4 = VAR_2->util, *VAR_5 = VAR_3->util;

 if (VAR_4->nr < VAR_5->nr)
  return 1;
 else if (VAR_4->nr == VAR_5->nr)
  return 0;
 else
  return -1;
}
