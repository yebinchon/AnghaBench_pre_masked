
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int cc; int rtt; } ;
typedef TYPE_4__ quicly_stats_t ;
struct TYPE_10__ {int rtt; } ;
struct TYPE_11__ {int cc; TYPE_2__ loss; } ;
struct TYPE_9__ {int stats; } ;
struct TYPE_13__ {TYPE_3__ egress; TYPE_1__ super; } ;
typedef TYPE_5__ quicly_conn_t ;


 int FUNC_0 (TYPE_4__*,int *,int) ;

int FUNC_1(quicly_conn_t *VAR_0, quicly_stats_t *VAR_1)
{

    FUNC_0(VAR_1, &VAR_0->super.stats, sizeof(VAR_0->super.stats));


    VAR_1->rtt = VAR_0->egress.loss.rtt;
    VAR_1->cc = VAR_0->egress.cc;

    return 0;
}
