
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ send_ack_at; int packet_number; int sentmap; } ;
struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_10__ {TYPE_2__ egress; TYPE_1__ super; } ;
typedef TYPE_3__ quicly_conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,unsigned int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,scalar_t__,int ) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_7(quicly_conn_t *VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9;

    FUNC_0(VAR_6->super.state < VAR_2);


    if ((VAR_9 = FUNC_1(VAR_6, ~0u)) != 0)
        return VAR_9;
    if ((VAR_9 = FUNC_5(&VAR_6->egress.sentmap, VAR_6->egress.packet_number, VAR_4, VAR_1)) != 0)
        return VAR_9;
    if (FUNC_3(&VAR_6->egress.sentmap, VAR_5) == ((void*)0))
        return VAR_0;
    FUNC_4(&VAR_6->egress.sentmap, 0);
    ++VAR_6->egress.packet_number;

    if (VAR_7) {
        VAR_6->super.state = VAR_2;
        VAR_6->egress.send_ack_at = 0;
    } else {
        VAR_6->super.state = VAR_3;
        VAR_6->egress.send_ack_at = VAR_8 ? VAR_4 + FUNC_2(VAR_6) : 0;
    }

    FUNC_6(VAR_6);

    return 0;
}
