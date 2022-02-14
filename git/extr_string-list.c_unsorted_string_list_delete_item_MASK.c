
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; scalar_t__ strdup_strings; } ;
struct TYPE_2__ {int util; int string; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct string_list *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0->strdup_strings)
  FUNC_0(VAR_0->items[VAR_1].string);
 if (VAR_2)
  FUNC_0(VAR_0->items[VAR_1].util);
 VAR_0->items[VAR_1] = VAR_0->items[VAR_0->nr-1];
 VAR_0->nr--;
}
