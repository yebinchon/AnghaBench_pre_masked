
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int what; struct TYPE_7__* next; } ;
struct TYPE_6__ {int mutex; TYPE_2__* last_msg; TYPE_2__* first_msg; int nb_messages; TYPE_2__* recycle_msg; int abort_request; } ;
typedef TYPE_1__ MessageQueue ;
typedef TYPE_2__ AVMessage ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) inline static void FUNC_4(MessageQueue *VAR_0, int VAR_1)
{
    AVMessage **VAR_2, *VAR_3, *VAR_4;
    FUNC_0(VAR_0->mutex);

    VAR_4 = VAR_0->first_msg;

    if (!VAR_0->abort_request && VAR_0->first_msg) {
        VAR_2 = &VAR_0->first_msg;
        while (*VAR_2) {
            VAR_3 = *VAR_2;

            if (VAR_3->what == VAR_1) {
                *VAR_2 = VAR_3->next;



                FUNC_3(VAR_3);
                VAR_3->next = VAR_0->recycle_msg;
                VAR_0->recycle_msg = VAR_3;

                VAR_0->nb_messages--;
            } else {
                VAR_4 = VAR_3;
                VAR_2 = &VAR_3->next;
            }
        }

        if (VAR_0->first_msg) {
            VAR_0->last_msg = VAR_4;
        } else {
            VAR_0->last_msg = ((void*)0);
        }
    }

    FUNC_1(VAR_0->mutex);
}
