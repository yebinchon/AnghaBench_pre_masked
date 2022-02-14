
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_6__ {int recycle_count; int alloc_count; int cond; int nb_messages; TYPE_2__* last_msg; TYPE_2__* first_msg; TYPE_2__* recycle_msg; scalar_t__ abort_request; } ;
typedef TYPE_1__ MessageQueue ;
typedef TYPE_2__ AVMessage ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int,int,int) ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) inline static int FUNC_3(MessageQueue *VAR_1, AVMessage *VAR_2)
{
    AVMessage *VAR_3;

    if (VAR_1->abort_request)
        return -1;




    VAR_3 = VAR_1->recycle_msg;
    if (VAR_3) {
        VAR_1->recycle_msg = VAR_3->next;
        VAR_1->recycle_count++;
    } else {
        VAR_1->alloc_count++;
        VAR_3 = FUNC_2(sizeof(AVMessage));
    }







    if (!VAR_3)
        return -1;

    *VAR_3 = *VAR_2;
    VAR_3->next = ((void*)0);

    if (!VAR_1->last_msg)
        VAR_1->first_msg = VAR_3;
    else
        VAR_1->last_msg->next = VAR_3;
    VAR_1->last_msg = VAR_3;
    VAR_1->nb_messages++;
    FUNC_0(VAR_1->cond);
    return 0;
}
