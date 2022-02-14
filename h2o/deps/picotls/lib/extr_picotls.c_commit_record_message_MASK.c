
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_4__ {TYPE_2__* buf; TYPE_3__* enc; } ;
struct st_ptls_record_message_emitter_t {int rec_start; TYPE_1__ super; } ;
typedef int ptls_message_emitter_t ;
struct TYPE_6__ {int * aead; } ;
struct TYPE_5__ {int off; void** base; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(ptls_message_emitter_t *VAR_1)
{
    struct st_ptls_record_message_emitter_t *VAR_2 = (void *)VAR_1;
    int VAR_3;

    if (VAR_2->super.enc->aead != ((void*)0)) {
        VAR_3 = FUNC_1(VAR_2->super.buf, VAR_2->rec_start, VAR_2->super.enc);
    } else {

        size_t VAR_4 = VAR_2->super.buf->off - VAR_2->rec_start - 5;
        FUNC_0(VAR_4 <= VAR_0);
        VAR_2->super.buf->base[VAR_2->rec_start + 3] = (uint8_t)(VAR_4 >> 8);
        VAR_2->super.buf->base[VAR_2->rec_start + 4] = (uint8_t)(VAR_4);
        VAR_3 = 0;
    }

    return VAR_3;
}
