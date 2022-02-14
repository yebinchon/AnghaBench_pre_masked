
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tail; int capacity; int size; int * buffer; } ;
typedef TYPE_1__ GDnsQueue ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;

int
FUNC_2 (GDnsQueue * VAR_0, char *VAR_1)
{
  if (FUNC_0 (VAR_0))
    return -1;

  VAR_0->tail = (VAR_0->tail + 1) % VAR_0->capacity;
  FUNC_1 (VAR_0->buffer[VAR_0->tail], VAR_1);
  VAR_0->size++;
  return 0;
}
