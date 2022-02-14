
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ netchan_buffer_t ;
struct TYPE_6__ {TYPE_1__* netchan_start_queue; TYPE_1__** netchan_end_queue; } ;
typedef TYPE_2__ client_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(client_t *VAR_0)
{
 netchan_buffer_t *VAR_1, *VAR_2;

 for(VAR_1 = VAR_0->netchan_start_queue; VAR_1; VAR_1 = VAR_2)
 {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
 }

 VAR_0->netchan_start_queue = ((void*)0);
 VAR_0->netchan_end_queue = &VAR_0->netchan_start_queue;
}
