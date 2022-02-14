
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; int * obj; } ;
struct TYPE_6__ {int mutex; int cond; TYPE_2__* recycle_msg; int nb_messages; int * last_msg; TYPE_2__* first_msg; scalar_t__ abort_request; } ;
typedef TYPE_1__ MessageQueue ;
typedef TYPE_2__ AVMessage ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) inline static int FUNC_4(MessageQueue *VAR_0, AVMessage *VAR_1, int VAR_2)
{
    AVMessage *VAR_3;
    int VAR_4;

    FUNC_1(VAR_0->mutex);

    for (;;) {
        if (VAR_0->abort_request) {
            VAR_4 = -1;
            break;
        }

        VAR_3 = VAR_0->first_msg;
        if (VAR_3) {
            VAR_0->first_msg = VAR_3->next;
            if (!VAR_0->first_msg)
                VAR_0->last_msg = ((void*)0);
            VAR_0->nb_messages--;
            *VAR_1 = *VAR_3;
            VAR_3->obj = ((void*)0);



            VAR_3->next = VAR_0->recycle_msg;
            VAR_0->recycle_msg = VAR_3;

            VAR_4 = 1;
            break;
        } else if (!VAR_2) {
            VAR_4 = 0;
            break;
        } else {
            FUNC_0(VAR_0->cond, VAR_0->mutex);
        }
    }
    FUNC_2(VAR_0->mutex);
    return VAR_4;
}
