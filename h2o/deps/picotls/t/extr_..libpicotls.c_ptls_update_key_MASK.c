
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int needs_key_update; int key_update_send_request; TYPE_1__* ctx; } ;
typedef TYPE_2__ ptls_t ;
struct TYPE_4__ {int * update_traffic_key; } ;


 int FUNC_0 (int ) ;

int FUNC_1(ptls_t *VAR_0, int VAR_1)
{
    FUNC_0(VAR_0->ctx->update_traffic_key == ((void*)0));
    VAR_0->needs_key_update = 1;
    VAR_0->key_update_send_request = VAR_1;
    return 0;
}
