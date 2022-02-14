
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; scalar_t__ strdup_strings; int (* cmp ) (int ,int ) ;} ;
typedef int (* compare_strings_fn ) (int ,int ) ;
struct TYPE_2__ {int util; int string; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct string_list *VAR_0, int VAR_1)
{
 if (VAR_0->nr > 1) {
  int VAR_2, VAR_3;
  compare_strings_fn VAR_4 = VAR_0->cmp ? VAR_0->cmp : FUNC_1;
  for (VAR_2 = VAR_3 = 1; VAR_2 < VAR_0->nr; VAR_2++) {
   if (!VAR_4(VAR_0->items[VAR_3 - 1].string, VAR_0->items[VAR_2].string)) {
    if (VAR_0->strdup_strings)
     FUNC_0(VAR_0->items[VAR_2].string);
    if (VAR_1)
     FUNC_0(VAR_0->items[VAR_2].util);
   } else
    VAR_0->items[VAR_3++] = VAR_0->items[VAR_2];
  }
  VAR_0->nr = VAR_3;
 }
}
