
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_19__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct sockaddr {int dummy; } ;
struct TYPE_28__ {scalar_t__ master_id; scalar_t__ thread_id; scalar_t__ node_id; } ;
struct TYPE_29__ {TYPE_4__ plaintext; int encrypted; scalar_t__ might_be_client_generated; } ;
struct TYPE_30__ {TYPE_5__ dest; } ;
struct TYPE_25__ {int * base; } ;
struct TYPE_22__ {int _is_stateless_reset_cached; TYPE_6__ cid; TYPE_1__ octets; } ;
typedef TYPE_12__ quicly_decoded_packet_t ;
struct TYPE_24__ {scalar_t__ sa_family; } ;
struct TYPE_33__ {TYPE_19__ sa; } ;
struct TYPE_20__ {TYPE_9__ address; int offered_cid; } ;
struct TYPE_31__ {TYPE_19__ sa; } ;
struct TYPE_32__ {TYPE_7__ address; } ;
struct TYPE_27__ {scalar_t__ master_id; scalar_t__ thread_id; scalar_t__ node_id; } ;
struct TYPE_21__ {TYPE_10__ host; TYPE_8__ peer; TYPE_3__ master_id; TYPE_2__* ctx; } ;
struct TYPE_23__ {TYPE_11__ super; } ;
typedef TYPE_13__ quicly_conn_t ;
struct TYPE_26__ {int * cid_encryptor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_19__*,struct sockaddr*) ;
 scalar_t__ FUNC_2 (TYPE_13__*,TYPE_12__*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_13__*) ;

int FUNC_5(quicly_conn_t *VAR_3, struct sockaddr *VAR_4, struct sockaddr *VAR_5,
                          quicly_decoded_packet_t *VAR_6)
{
    if (FUNC_0(VAR_6->octets.base[0])) {

        if (FUNC_1(&VAR_3->super.peer.address.sa, VAR_5) != 0)
            return 0;
        if (VAR_3->super.host.address.sa.sa_family != VAR_0 &&
            FUNC_1(&VAR_3->super.host.address.sa, VAR_4) != 0)
            return 0;

        if (!FUNC_4(VAR_3) && VAR_6->cid.dest.might_be_client_generated) {
            if (FUNC_3(&VAR_3->super.host.offered_cid, VAR_6->cid.dest.encrypted))
                goto Found;
        }
    }

    if (VAR_3->super.ctx->cid_encryptor != ((void*)0)) {
        if (VAR_3->super.master_id.master_id == VAR_6->cid.dest.plaintext.master_id &&
            VAR_3->super.master_id.thread_id == VAR_6->cid.dest.plaintext.thread_id &&
            VAR_3->super.master_id.node_id == VAR_6->cid.dest.plaintext.node_id)
            goto Found;
        if (FUNC_2(VAR_3, VAR_6))
            goto Found_StatelessReset;
    } else {
        if (FUNC_1(&VAR_3->super.peer.address.sa, VAR_5) == 0)
            goto Found;
        if (VAR_3->super.host.address.sa.sa_family != VAR_0 &&
            FUNC_1(&VAR_3->super.host.address.sa, VAR_4) != 0)
            return 0;
    }


    return 0;

Found:
    VAR_6->_is_stateless_reset_cached = VAR_2;
    return 1;

Found_StatelessReset:
    VAR_6->_is_stateless_reset_cached = VAR_1;
    return 1;
}
