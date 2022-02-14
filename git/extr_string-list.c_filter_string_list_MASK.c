
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; scalar_t__ strdup_strings; } ;
typedef scalar_t__ (* string_list_each_func_t ) (TYPE_1__*,void*) ;
struct TYPE_3__ {int util; int string; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct string_list *VAR_0, int VAR_1,
   string_list_each_func_t VAR_2, void *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0->nr; VAR_4++) {
  if (VAR_2(&VAR_0->items[VAR_4], VAR_3)) {
   VAR_0->items[VAR_5++] = VAR_0->items[VAR_4];
  } else {
   if (VAR_0->strdup_strings)
    FUNC_0(VAR_0->items[VAR_4].string);
   if (VAR_1)
    FUNC_0(VAR_0->items[VAR_4].util);
  }
 }
 VAR_0->nr = VAR_5;
}
