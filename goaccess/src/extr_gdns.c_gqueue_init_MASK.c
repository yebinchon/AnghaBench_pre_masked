
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tail; int capacity; scalar_t__ size; scalar_t__ head; } ;
typedef TYPE_1__ GDnsQueue ;



void
FUNC_0 (GDnsQueue * VAR_0, int VAR_1)
{
  VAR_0->head = 0;
  VAR_0->tail = -1;
  VAR_0->size = 0;
  VAR_0->capacity = VAR_1;
}
