
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* buf; TYPE_3__* enc; } ;
struct st_ptls_raw_message_emitter_t {size_t start_off; size_t* epoch_offsets; TYPE_2__ super; } ;
typedef int ptls_message_emitter_t ;
struct TYPE_6__ {size_t epoch; } ;
struct TYPE_4__ {scalar_t__* base; size_t off; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(ptls_message_emitter_t *VAR_2)
{
    struct st_ptls_raw_message_emitter_t *VAR_3 = (void *)VAR_2;
    size_t VAR_4;


    VAR_4 = VAR_3->super.enc->epoch;
    if (VAR_4 == 1 && VAR_3->super.buf->base[VAR_3->start_off] == VAR_0)
        VAR_4 = 0;

    for (++VAR_4; VAR_4 < 5; ++VAR_4) {
        FUNC_0(VAR_3->epoch_offsets[VAR_4] == VAR_3->start_off);
        VAR_3->epoch_offsets[VAR_4] = VAR_3->super.buf->off;
    }

    VAR_3->start_off = VAR_1;

    return 0;
}
