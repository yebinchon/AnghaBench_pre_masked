
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; } ;
struct TYPE_7__ {int cond; int mutex; TYPE_2__* recycle_msg; } ;
typedef TYPE_1__ MessageQueue ;
typedef TYPE_2__ AVMessage ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__**) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) inline static void FUNC_7(MessageQueue *VAR_0)
{
    FUNC_6(VAR_0);

    FUNC_2(VAR_0->mutex);
    while(VAR_0->recycle_msg) {
        AVMessage *VAR_1 = VAR_0->recycle_msg;
        if (VAR_1)
            VAR_0->recycle_msg = VAR_1->next;
        FUNC_5(VAR_1);
        FUNC_4(&VAR_1);
    }
    FUNC_3(VAR_0->mutex);

    FUNC_1(VAR_0->mutex);
    FUNC_0(VAR_0->cond);
}
