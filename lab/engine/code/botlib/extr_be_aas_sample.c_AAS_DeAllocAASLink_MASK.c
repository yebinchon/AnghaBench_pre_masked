
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * next_area; int * prev_area; struct TYPE_4__* next_ent; struct TYPE_4__* prev_ent; } ;
typedef TYPE_1__ aas_link_t ;
struct TYPE_5__ {TYPE_1__* freelinks; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;

void FUNC_0(aas_link_t *VAR_2)
{
 if (VAR_0.freelinks) VAR_0.freelinks->prev_ent = VAR_2;
 VAR_2->prev_ent = ((void*)0);
 VAR_2->next_ent = VAR_0.freelinks;
 VAR_2->prev_area = ((void*)0);
 VAR_2->next_area = ((void*)0);
 VAR_0.freelinks = VAR_2;
 VAR_1++;
}
