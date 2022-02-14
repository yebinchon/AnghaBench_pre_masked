
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int * string; } ;
struct string_list {int nr; struct string_list_item* items; } ;


 int FUNC_0 (struct string_list*,char const*,int) ;
 int FUNC_1 (int *,char const*,size_t) ;

__attribute__((used)) static struct string_list_item *FUNC_2(struct string_list *VAR_0,
           const char *VAR_1, size_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1, 1);
 if (VAR_3 < 0) {

  VAR_3 = -1 - VAR_3;
  if (!VAR_1[VAR_2])
   return &VAR_0->items[VAR_3];





 } else if (!VAR_1[VAR_2]) {




  return ((void*)0);
 }






 while (0 <= --VAR_3 && VAR_3 < VAR_0->nr) {
  int VAR_4 = FUNC_1(VAR_0->items[VAR_3].string, VAR_1, VAR_2);
  if (VAR_4 < 0)




   break;
  else if (!VAR_4 && !VAR_0->items[VAR_3].string[VAR_2])

   return &VAR_0->items[VAR_3];





 }
 return ((void*)0);
}
