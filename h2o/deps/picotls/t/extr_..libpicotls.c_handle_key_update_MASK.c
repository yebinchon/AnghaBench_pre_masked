
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int needs_key_update; TYPE_1__* ctx; } ;
typedef TYPE_2__ ptls_t ;
typedef int ptls_message_emitter_t ;
struct TYPE_9__ {int* base; int len; } ;
typedef TYPE_3__ ptls_iovec_t ;
struct TYPE_7__ {int * update_traffic_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_1(ptls_t *VAR_3, ptls_message_emitter_t *VAR_4, ptls_iovec_t VAR_5)
{
    const uint8_t *VAR_6 = VAR_5.base + VAR_2, *const VAR_7 = VAR_5.base + VAR_5.len;
    int VAR_8;


    if (VAR_7 - VAR_6 != 1 || *VAR_6 > 1)
        return VAR_0;


    if ((VAR_8 = FUNC_0(VAR_3, 0)) != 0)
        return VAR_8;

    if (*VAR_6) {
        if (VAR_3->ctx->update_traffic_key != ((void*)0))
            return VAR_1;
        VAR_3->needs_key_update = 1;
    }

    return 0;
}
