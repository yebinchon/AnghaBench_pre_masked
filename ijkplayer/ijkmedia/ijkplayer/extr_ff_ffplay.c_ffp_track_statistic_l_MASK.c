
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_11__ {TYPE_7__ time_base; } ;
struct TYPE_10__ {int duration; int packets; int bytes; } ;
struct TYPE_9__ {int duration; int nb_packets; int size; } ;
typedef TYPE_1__ PacketQueue ;
typedef TYPE_2__ FFTrackCacheStatistic ;
typedef int FFPlayer ;
typedef TYPE_3__ AVStream ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_7__) ;

void FUNC_2(FFPlayer *VAR_0, AVStream *VAR_1, PacketQueue *VAR_2, FFTrackCacheStatistic *VAR_3)
{
    FUNC_0(VAR_3);

    if (VAR_2) {
        VAR_3->bytes = VAR_2->size;
        VAR_3->packets = VAR_2->nb_packets;
    }

    if (VAR_2 && VAR_1 && VAR_1->time_base.den > 0 && VAR_1->time_base.num > 0) {
        VAR_3->duration = VAR_2->duration * FUNC_1(VAR_1->time_base) * 1000;
    }
}
