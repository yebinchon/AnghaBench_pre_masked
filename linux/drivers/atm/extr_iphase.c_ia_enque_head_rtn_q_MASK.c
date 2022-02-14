
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* tail; } ;
typedef TYPE_1__ IARTN_Q ;



__attribute__((used)) static void FUNC_0 (IARTN_Q *VAR_0, IARTN_Q * VAR_1)
{
   VAR_1->next = ((void*)0);
   if (VAR_0->next == ((void*)0))
      VAR_0->next = VAR_0->tail = VAR_1;
   else {
      VAR_1->next = VAR_0->next;
      VAR_0->next = VAR_1;
   }
   return;
}
