
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int quicly_sentmap_event_t ;
struct TYPE_9__ {int args; scalar_t__ uni; } ;
struct TYPE_10__ {TYPE_1__ max_streams; } ;
struct TYPE_13__ {TYPE_2__ data; } ;
typedef TYPE_5__ quicly_sent_t ;
typedef int quicly_sent_packet_t ;
typedef int quicly_maxsender_t ;
struct TYPE_11__ {int * bidi; int * uni; } ;
struct TYPE_12__ {TYPE_3__ max_streams; } ;
struct TYPE_14__ {TYPE_4__ ingress; } ;
typedef TYPE_6__ quicly_conn_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(quicly_conn_t *VAR_0, const quicly_sent_packet_t *VAR_1, quicly_sent_t *VAR_2,
                              quicly_sentmap_event_t VAR_3)
{
    quicly_maxsender_t *VAR_4 = VAR_2->data.max_streams.uni ? VAR_0->ingress.max_streams.uni : VAR_0->ingress.max_streams.bidi;
    FUNC_0(VAR_4 != ((void*)0));

    switch (VAR_3) {
    case 129:
        FUNC_1(VAR_4, &VAR_2->data.max_streams.args);
        break;
    case 128:
        FUNC_2(VAR_4, &VAR_2->data.max_streams.args);
        break;
    default:
        break;
    }

    return 0;
}
