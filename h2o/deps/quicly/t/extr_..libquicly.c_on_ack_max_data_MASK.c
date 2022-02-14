
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
struct TYPE_11__ {int args; } ;
struct TYPE_12__ {TYPE_3__ max_data; } ;
struct TYPE_13__ {TYPE_4__ data; } ;
typedef TYPE_5__ quicly_sent_t ;
typedef int quicly_sent_packet_t ;
struct TYPE_9__ {int sender; } ;
struct TYPE_10__ {TYPE_1__ max_data; } ;
struct TYPE_14__ {TYPE_2__ ingress; } ;
typedef TYPE_6__ quicly_conn_t ;




 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(quicly_conn_t *VAR_0, const quicly_sent_packet_t *VAR_1, quicly_sent_t *VAR_2,
                           quicly_sentmap_event_t VAR_3)
{
    switch (VAR_3) {
    case 129:
        FUNC_0(&VAR_0->ingress.max_data.sender, &VAR_2->data.max_data.args);
        break;
    case 128:
        FUNC_1(&VAR_0->ingress.max_data.sender, &VAR_2->data.max_data.args);
        break;
    default:
        break;
    }

    return 0;
}
