
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * next; struct TYPE_2__* prev; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
 VAR_0 = VAR_0->prev;
 if (VAR_0)
  VAR_0->next = ((void*)0);
}
