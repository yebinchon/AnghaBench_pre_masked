
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct todo_list {int current; int nr; TYPE_1__* items; } ;
typedef enum todo_command { ____Placeholder_todo_command } todo_command ;
struct TYPE_2__ {int command; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static enum todo_command FUNC_1(struct todo_list *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_0->current + VAR_1; VAR_2 < VAR_0->nr; VAR_2++)
  if (!FUNC_0(VAR_0->items[VAR_2].command))
   return VAR_0->items[VAR_2].command;

 return -1;
}
