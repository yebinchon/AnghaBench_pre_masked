
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* buf; } ;
struct st_ptls_raw_message_emitter_t {TYPE_2__ super; int start_off; } ;
typedef int ptls_message_emitter_t ;
struct TYPE_3__ {int off; } ;



__attribute__((used)) static int FUNC_0(ptls_message_emitter_t *VAR_0)
{
    struct st_ptls_raw_message_emitter_t *VAR_1 = (void *)VAR_0;

    VAR_1->start_off = VAR_1->super.buf->off;
    return 0;
}
