
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct todo_list {int current; int nr; TYPE_1__* items; } ;
struct TYPE_2__ {int command; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct todo_list *VAR_0)
{
 int VAR_1 = VAR_0->current;

 if (!FUNC_0(VAR_0->items[VAR_1].command))
  return 0;

 while (++VAR_1 < VAR_0->nr)
  if (FUNC_0(VAR_0->items[VAR_1].command))
   return 0;
  else if (!FUNC_1(VAR_0->items[VAR_1].command))
   break;
 return 1;
}
