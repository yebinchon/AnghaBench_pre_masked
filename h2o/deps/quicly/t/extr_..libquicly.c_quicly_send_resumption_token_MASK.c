
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int flows; } ;
struct TYPE_8__ {int generation; } ;
struct TYPE_9__ {TYPE_2__ new_token; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_11__ {TYPE_4__ pending; TYPE_3__ egress; TYPE_1__ super; } ;
typedef TYPE_5__ quicly_conn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(quicly_conn_t *VAR_2)
{
    if (VAR_2->super.state <= VAR_1) {
        ++VAR_2->egress.new_token.generation;
        VAR_2->pending.flows |= VAR_0;
    }
    return 0;
}
