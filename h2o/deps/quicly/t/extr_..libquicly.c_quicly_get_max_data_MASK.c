
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int bytes_consumed; } ;
struct TYPE_10__ {TYPE_3__ max_data; } ;
struct TYPE_7__ {int sent; int permitted; } ;
struct TYPE_8__ {TYPE_1__ max_data; } ;
struct TYPE_11__ {TYPE_4__ ingress; TYPE_2__ egress; } ;
typedef TYPE_5__ quicly_conn_t ;



void FUNC_0(quicly_conn_t *VAR_0, uint64_t *VAR_1, uint64_t *VAR_2, uint64_t *VAR_3)
{
    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_0->egress.max_data.permitted;
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_0->egress.max_data.sent;
    if (VAR_3 != ((void*)0))
        *VAR_3 = VAR_0->ingress.max_data.bytes_consumed;
}
