
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {struct st_quicly_pending_path_challenge_t* base; } ;
struct TYPE_15__ {int buf; } ;
struct TYPE_16__ {int tls; TYPE_11__ transport_params; } ;
struct TYPE_26__ {int blocked; int active; } ;
struct TYPE_14__ {TYPE_9__ _default_scheduler; } ;
struct TYPE_23__ {int bidi; int uni; } ;
struct TYPE_24__ {int control; TYPE_6__ blocked; } ;
struct TYPE_25__ {TYPE_7__ streams; } ;
struct TYPE_21__ {struct st_quicly_pending_path_challenge_t* head; } ;
struct TYPE_22__ {int sentmap; TYPE_4__ path_challenge; } ;
struct TYPE_19__ {int * bidi; int * uni; } ;
struct TYPE_18__ {int sender; } ;
struct TYPE_20__ {TYPE_2__ max_streams; TYPE_1__ max_data; } ;
struct st_quicly_pending_path_challenge_t {TYPE_13__ token; TYPE_12__ crypto; int application; int handshake; int initial; TYPE_10__ super; TYPE_8__ pending; int streams; TYPE_5__ egress; struct st_quicly_pending_path_challenge_t* next; TYPE_3__ ingress; } ;
typedef struct st_quicly_pending_path_challenge_t quicly_conn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct st_quicly_pending_path_challenge_t*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct st_quicly_pending_path_challenge_t*,int ,int) ;
 int FUNC_3 (struct st_quicly_pending_path_challenge_t*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_1 ;

void FUNC_13(quicly_conn_t *VAR_2)
{
    FUNC_0(VAR_0, VAR_2, FUNC_7());

    FUNC_2(VAR_2, 0, 1);

    FUNC_11(&VAR_2->ingress.max_data.sender);
    if (VAR_2->ingress.max_streams.uni != ((void*)0))
        FUNC_11(VAR_2->ingress.max_streams.uni);
    if (VAR_2->ingress.max_streams.bidi != ((void*)0))
        FUNC_11(VAR_2->ingress.max_streams.bidi);
    while (VAR_2->egress.path_challenge.head != ((void*)0)) {
        struct st_quicly_pending_path_challenge_t *VAR_3 = VAR_2->egress.path_challenge.head;
        VAR_2->egress.path_challenge.head = VAR_3->next;
        FUNC_3(VAR_3);
    }
    FUNC_12(&VAR_2->egress.sentmap);

    FUNC_6(VAR_1, VAR_2->streams);

    FUNC_1(!FUNC_10(&VAR_2->pending.streams.blocked.uni));
    FUNC_1(!FUNC_10(&VAR_2->pending.streams.blocked.bidi));
    FUNC_1(!FUNC_10(&VAR_2->pending.streams.control));
    FUNC_1(!FUNC_10(&VAR_2->super._default_scheduler.active));
    FUNC_1(!FUNC_10(&VAR_2->super._default_scheduler.blocked));

    FUNC_5(&VAR_2->initial);
    FUNC_5(&VAR_2->handshake);
    FUNC_4(&VAR_2->application);

    FUNC_8(&VAR_2->crypto.transport_params.buf);
    FUNC_9(VAR_2->crypto.tls);

    FUNC_3(VAR_2->token.base);
    FUNC_3(VAR_2);
}
