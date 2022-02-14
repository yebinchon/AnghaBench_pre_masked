
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {int mutex; scalar_t__ nb_messages; TYPE_2__* first_msg; int * last_msg; TYPE_2__* recycle_msg; } ;
typedef TYPE_1__ MessageQueue ;
typedef TYPE_2__ AVMessage ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__**) ;

__attribute__((used)) inline static void FUNC_3(MessageQueue *VAR_0)
{
    AVMessage *VAR_1, *VAR_2;

    FUNC_0(VAR_0->mutex);
    for (VAR_1 = VAR_0->first_msg; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
        VAR_2 = VAR_1->next;



        VAR_1->next = VAR_0->recycle_msg;
        VAR_0->recycle_msg = VAR_1;

    }
    VAR_0->last_msg = ((void*)0);
    VAR_0->first_msg = ((void*)0);
    VAR_0->nb_messages = 0;
    FUNC_1(VAR_0->mutex);
}
