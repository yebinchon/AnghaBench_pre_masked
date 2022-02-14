
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int duration; scalar_t__ size; } ;
struct TYPE_8__ {int serial; struct TYPE_8__* next; TYPE_3__ pkt; } ;
struct TYPE_7__ {int mutex; int cond; TYPE_2__* recycle_pkt; int duration; int size; int nb_packets; int * last_pkt; TYPE_2__* first_pkt; scalar_t__ abort_request; } ;
typedef TYPE_1__ PacketQueue ;
typedef TYPE_2__ MyAVPacketList ;
typedef TYPE_3__ AVPacket ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(PacketQueue *VAR_1, AVPacket *VAR_2, int VAR_3, int *VAR_4)
{
    MyAVPacketList *VAR_5;
    int VAR_6;

    FUNC_2(VAR_1->mutex);

    for (;;) {
        if (VAR_1->abort_request) {
            VAR_6 = -1;
            break;
        }

        VAR_5 = VAR_1->first_pkt;
        if (VAR_5) {
            VAR_1->first_pkt = VAR_5->next;
            if (!VAR_1->first_pkt)
                VAR_1->last_pkt = ((void*)0);
            VAR_1->nb_packets--;
            VAR_1->size -= VAR_5->pkt.size + sizeof(*VAR_5);
            VAR_1->duration -= FUNC_0(VAR_5->pkt.duration, VAR_0);
            *VAR_2 = VAR_5->pkt;
            if (VAR_4)
                *VAR_4 = VAR_5->serial;



            VAR_5->next = VAR_1->recycle_pkt;
            VAR_1->recycle_pkt = VAR_5;

            VAR_6 = 1;
            break;
        } else if (!VAR_3) {
            VAR_6 = 0;
            break;
        } else {
            FUNC_1(VAR_1->cond, VAR_1->mutex);
        }
    }
    FUNC_3(VAR_1->mutex);
    return VAR_6;
}
