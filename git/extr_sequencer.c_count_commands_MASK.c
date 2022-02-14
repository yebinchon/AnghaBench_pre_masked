
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct todo_list {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {scalar_t__ command; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct todo_list *VAR_1)
{
 int VAR_2 = 0, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++)
  if (VAR_1->items[VAR_3].command != VAR_0)
   VAR_2++;

 return VAR_2;
}
