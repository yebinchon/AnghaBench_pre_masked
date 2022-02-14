
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int sent; } ;
struct TYPE_10__ {scalar_t__ bytes_in_flight; } ;
struct TYPE_14__ {TYPE_6__ max_data; TYPE_1__ sentmap; int last_retransmittable_sent_at; int loss; } ;
struct TYPE_11__ {scalar_t__ send_probe; } ;
struct TYPE_12__ {TYPE_2__ address_validation; } ;
struct TYPE_13__ {TYPE_3__ peer; } ;
struct TYPE_16__ {TYPE_5__ egress; TYPE_4__ super; } ;
typedef TYPE_7__ quicly_conn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int,int ,int ) ;
 int FUNC_1 (TYPE_7__*) ;

__attribute__((used)) static void FUNC_2(quicly_conn_t *VAR_1)
{
    FUNC_0(&VAR_1->egress.loss, VAR_0, VAR_1->egress.last_retransmittable_sent_at,
                             VAR_1->egress.sentmap.bytes_in_flight != 0 || VAR_1->super.peer.address_validation.send_probe,
                             FUNC_1(VAR_1), VAR_1->egress.max_data.sent);
}
