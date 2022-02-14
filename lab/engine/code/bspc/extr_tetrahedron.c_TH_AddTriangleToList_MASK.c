
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ th_triangle_t ;



void FUNC_0(th_triangle_t **VAR_0, th_triangle_t *VAR_1)
{
 VAR_1->prev = ((void*)0);
 VAR_1->next = *VAR_0;
 if (*VAR_0) (*VAR_0)->prev = VAR_1;
 *VAR_0 = VAR_1;
}
