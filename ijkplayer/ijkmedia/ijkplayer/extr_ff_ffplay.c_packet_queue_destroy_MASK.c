
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_6__ {int cond; int mutex; TYPE_2__* recycle_pkt; } ;
typedef TYPE_1__ PacketQueue ;
typedef TYPE_2__ MyAVPacketList ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__**) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(PacketQueue *VAR_0)
{
    FUNC_5(VAR_0);

    FUNC_2(VAR_0->mutex);
    while(VAR_0->recycle_pkt) {
        MyAVPacketList *VAR_1 = VAR_0->recycle_pkt;
        if (VAR_1)
            VAR_0->recycle_pkt = VAR_1->next;
        FUNC_4(&VAR_1);
    }
    FUNC_3(VAR_0->mutex);

    FUNC_1(VAR_0->mutex);
    FUNC_0(VAR_0->cond);
}
