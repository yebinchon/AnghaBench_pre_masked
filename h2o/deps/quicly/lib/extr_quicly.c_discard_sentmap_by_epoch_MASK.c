
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int quicly_sentmap_iter_t ;
struct TYPE_9__ {scalar_t__ packet_number; unsigned int ack_epoch; } ;
typedef TYPE_2__ quicly_sent_packet_t ;
struct TYPE_8__ {int sentmap; } ;
struct TYPE_10__ {TYPE_1__ egress; } ;
typedef TYPE_3__ quicly_conn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,TYPE_3__*) ;

int FUNC_4(quicly_conn_t *VAR_2, unsigned VAR_3)
{
    quicly_sentmap_iter_t VAR_4;
    const quicly_sent_packet_t *VAR_5;
    int VAR_6 = 0;

    FUNC_0(VAR_2, &VAR_4);

    while ((VAR_5 = FUNC_1(&VAR_4))->packet_number != VAR_1) {
        if ((VAR_3 & (1u << VAR_5->ack_epoch)) != 0) {
            if ((VAR_6 = FUNC_3(&VAR_2->egress.sentmap, &VAR_4, VAR_0, VAR_2)) != 0)
                return VAR_6;
        } else {
            FUNC_2(&VAR_4);
        }
    }

    return VAR_6;
}
