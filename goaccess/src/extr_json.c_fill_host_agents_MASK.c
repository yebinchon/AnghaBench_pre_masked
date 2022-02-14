
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t size; TYPE_1__* items; } ;
struct TYPE_3__ {char* agent; } ;
typedef TYPE_2__ GAgents ;


 char* FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (void *VAR_0, void *VAR_1)
{
  GAgents *VAR_2 = VAR_1;
  char *VAR_3 = FUNC_0 ((*(int *) VAR_0));

  if (VAR_3 == ((void*)0))
    return 1;

  VAR_2->items[VAR_2->size].agent = VAR_3;
  VAR_2->size++;

  return 0;
}
