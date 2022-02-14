
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct string_list {int nr; int alloc; TYPE_1__* items; scalar_t__ strdup_strings; } ;
typedef int (* string_list_clear_func_t ) (int ,TYPE_1__*) ;
struct TYPE_4__ {struct TYPE_4__* string; int util; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct string_list *VAR_0, string_list_clear_func_t VAR_1)
{
 if (VAR_0->items) {
  int VAR_2;
  if (VAR_1) {
   for (VAR_2 = 0; VAR_2 < VAR_0->nr; VAR_2++)
    VAR_1(VAR_0->items[VAR_2].util, VAR_0->items[VAR_2].string);
  }
  if (VAR_0->strdup_strings) {
   for (VAR_2 = 0; VAR_2 < VAR_0->nr; VAR_2++)
    FUNC_0(VAR_0->items[VAR_2].string);
  }
  FUNC_0(VAR_0->items);
 }
 VAR_0->items = ((void*)0);
 VAR_0->nr = VAR_0->alloc = 0;
}
