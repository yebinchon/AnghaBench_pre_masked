
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** buffer; size_t head; int capacity; int size; } ;
typedef TYPE_1__ GDnsQueue ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

char *
FUNC_1 (GDnsQueue * VAR_0)
{
  char *VAR_1;
  if (FUNC_0 (VAR_0))
    return ((void*)0);

  VAR_1 = VAR_0->buffer[VAR_0->head];
  VAR_0->head = (VAR_0->head + 1) % VAR_0->capacity;
  VAR_0->size--;
  return VAR_1;
}
