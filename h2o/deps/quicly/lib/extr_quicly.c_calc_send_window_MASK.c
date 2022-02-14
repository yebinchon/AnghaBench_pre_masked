
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_14__ {scalar_t__ bytes_in_flight; } ;
struct TYPE_13__ {scalar_t__ cwnd; } ;
struct TYPE_15__ {TYPE_4__ sentmap; TYPE_3__ cc; } ;
struct TYPE_11__ {int received; scalar_t__ sent; } ;
struct TYPE_12__ {TYPE_1__ num_bytes; } ;
struct TYPE_17__ {int validated; } ;
struct TYPE_16__ {TYPE_7__ address_validation; } ;
struct TYPE_18__ {TYPE_2__ stats; TYPE_6__ peer; } ;
struct TYPE_19__ {TYPE_5__ egress; TYPE_8__ super; } ;
typedef TYPE_9__ quicly_conn_t ;



__attribute__((used)) static size_t FUNC_0(quicly_conn_t *VAR_0, size_t VAR_1, int VAR_2)
{

    if (!VAR_0->super.peer.address_validation.validated) {
        uint64_t VAR_3 = VAR_0->super.stats.num_bytes.received * 3;
        if (VAR_3 <= VAR_0->super.stats.num_bytes.sent)
            return 0;
        return VAR_3 - VAR_0->super.stats.num_bytes.sent;
    }


    if (!VAR_2 && VAR_0->egress.cc.cwnd > VAR_0->egress.sentmap.bytes_in_flight + VAR_1)
        return VAR_0->egress.cc.cwnd - VAR_0->egress.sentmap.bytes_in_flight;
    return VAR_1;
}
