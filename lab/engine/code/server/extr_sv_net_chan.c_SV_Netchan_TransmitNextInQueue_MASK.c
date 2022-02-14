
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int data; int cursize; } ;
struct TYPE_7__ {struct TYPE_7__* next; TYPE_6__ msg; int clientCommandString; } ;
typedef TYPE_1__ netchan_buffer_t ;
struct TYPE_8__ {TYPE_1__* netchan_start_queue; TYPE_1__** netchan_end_queue; int netchan; scalar_t__ compat; } ;
typedef TYPE_2__ client_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(client_t *VAR_0)
{
 netchan_buffer_t *VAR_1;

 FUNC_0("#462 Netchan_TransmitNextFragment: popping a queued message for transmit\n");
 VAR_1 = VAR_0->netchan_start_queue;






 FUNC_1(&VAR_0->netchan, VAR_1->msg.cursize, VAR_1->msg.data);


 VAR_0->netchan_start_queue = VAR_1->next;
 if(!VAR_0->netchan_start_queue)
 {
  FUNC_0("#462 Netchan_TransmitNextFragment: emptied queue\n");
  VAR_0->netchan_end_queue = &VAR_0->netchan_start_queue;
 }
 else
  FUNC_0("#462 Netchan_TransmitNextFragment: remaining queued message\n");

 FUNC_3(VAR_1);
}
