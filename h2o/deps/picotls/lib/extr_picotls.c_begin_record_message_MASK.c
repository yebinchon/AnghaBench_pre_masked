
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* buf; } ;
struct st_ptls_record_message_emitter_t {TYPE_1__ super; int rec_start; } ;
typedef int ptls_message_emitter_t ;
struct TYPE_4__ {int off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(ptls_message_emitter_t *VAR_3)
{
    struct st_ptls_record_message_emitter_t *VAR_4 = (void *)VAR_3;
    int VAR_5;

    VAR_4->rec_start = VAR_4->super.buf->off;
    FUNC_0(VAR_4->super.buf, VAR_0, VAR_1, VAR_2, 0, 0);
    VAR_5 = 0;
Exit:
    return VAR_5;
}
