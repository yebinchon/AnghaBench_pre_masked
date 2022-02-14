
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef TYPE_1__ bot_consolemessage_t ;


 TYPE_1__* VAR_0 ;

void FUNC_0(bot_consolemessage_t *VAR_1)
{
 if (VAR_0) VAR_0->prev = VAR_1;
 VAR_1->prev = ((void*)0);
 VAR_1->next = VAR_0;
 VAR_0 = VAR_1;
}
