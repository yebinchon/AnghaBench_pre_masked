
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; int alloc; TYPE_1__* items; scalar_t__ strdup_strings; } ;
struct TYPE_2__ {struct TYPE_2__* util; struct TYPE_2__* string; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct string_list *VAR_0, int VAR_1)
{
 if (VAR_0->items) {
  int VAR_2;
  if (VAR_0->strdup_strings) {
   for (VAR_2 = 0; VAR_2 < VAR_0->nr; VAR_2++)
    FUNC_0(VAR_0->items[VAR_2].string);
  }
  if (VAR_1) {
   for (VAR_2 = 0; VAR_2 < VAR_0->nr; VAR_2++)
    FUNC_0(VAR_0->items[VAR_2].util);
  }
  FUNC_0(VAR_0->items);
 }
 VAR_0->items = ((void*)0);
 VAR_0->nr = VAR_0->alloc = 0;
}
