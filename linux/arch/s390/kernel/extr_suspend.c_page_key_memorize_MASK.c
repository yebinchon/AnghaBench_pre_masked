
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* data; struct TYPE_2__* next; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;

void FUNC_0(unsigned long *VAR_3)
{
 VAR_1->data[VAR_2] = *(unsigned char *) VAR_3;
 *(unsigned char *) VAR_3 = 0;
 if (++VAR_2 < VAR_0)
  return;
 VAR_1 = VAR_1->next;
 VAR_2 = 0;
}
