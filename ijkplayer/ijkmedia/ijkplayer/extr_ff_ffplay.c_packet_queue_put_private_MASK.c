
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int duration; scalar_t__ size; } ;
struct TYPE_9__ {TYPE_3__ pkt; struct TYPE_9__* next; scalar_t__ serial; } ;
struct TYPE_8__ {int recycle_count; int alloc_count; int cond; int duration; int size; int nb_packets; TYPE_2__* last_pkt; TYPE_2__* first_pkt; scalar_t__ serial; TYPE_2__* recycle_pkt; scalar_t__ abort_request; } ;
typedef TYPE_1__ PacketQueue ;
typedef TYPE_2__ MyAVPacketList ;
typedef TYPE_3__ AVPacket ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int,int,int) ;
 TYPE_2__* FUNC_3 (int) ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static int FUNC_4(PacketQueue *VAR_4, AVPacket *VAR_5)
{
    MyAVPacketList *VAR_6;

    if (VAR_4->abort_request)
       return -1;




    VAR_6 = VAR_4->recycle_pkt;
    if (VAR_6) {
        VAR_4->recycle_pkt = VAR_6->next;
        VAR_4->recycle_count++;
    } else {
        VAR_4->alloc_count++;
        VAR_6 = FUNC_3(sizeof(MyAVPacketList));
    }







    if (!VAR_6)
        return -1;
    VAR_6->pkt = *VAR_5;
    VAR_6->next = ((void*)0);
    if (VAR_5 == &VAR_3)
        VAR_4->serial++;
    VAR_6->serial = VAR_4->serial;

    if (!VAR_4->last_pkt)
        VAR_4->first_pkt = VAR_6;
    else
        VAR_4->last_pkt->next = VAR_6;
    VAR_4->last_pkt = VAR_6;
    VAR_4->nb_packets++;
    VAR_4->size += VAR_6->pkt.size + sizeof(*VAR_6);

    VAR_4->duration += FUNC_0(VAR_6->pkt.duration, VAR_1);


    FUNC_1(VAR_4->cond);
    return 0;
}
