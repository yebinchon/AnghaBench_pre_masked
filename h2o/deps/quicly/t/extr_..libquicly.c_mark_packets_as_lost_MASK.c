
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int quicly_sentmap_iter_t ;
struct TYPE_10__ {scalar_t__ packet_number; scalar_t__ bytes_in_flight; } ;
typedef TYPE_2__ quicly_sent_packet_t ;
struct TYPE_12__ {scalar_t__ bytes_in_flight; } ;
struct TYPE_9__ {scalar_t__ max_lost_pn; TYPE_4__ sentmap; } ;
struct TYPE_11__ {TYPE_1__ egress; } ;
typedef TYPE_3__ quicly_conn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int *,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(quicly_conn_t *VAR_2, size_t VAR_3)
{
    quicly_sentmap_iter_t VAR_4;
    int VAR_5;

    FUNC_0(VAR_3 != 0);

    FUNC_1(VAR_2, &VAR_4);

    while (FUNC_2(&VAR_4)->packet_number < VAR_2->egress.max_lost_pn)
        FUNC_3(&VAR_4);

    do {
        const quicly_sent_packet_t *VAR_6 = FUNC_2(&VAR_4);
        uint64_t VAR_7;
        if ((VAR_7 = VAR_6->packet_number) == VAR_1) {
            FUNC_0(VAR_2->egress.sentmap.bytes_in_flight == 0);
            break;
        }
        if (VAR_6->bytes_in_flight != 0)
            --VAR_3;
        if ((VAR_5 = FUNC_4(&VAR_2->egress.sentmap, &VAR_4, VAR_0, VAR_2)) != 0)
            return VAR_5;
        VAR_2->egress.max_lost_pn = VAR_7 + 1;
    } while (VAR_3 != 0);

    return 0;
}
