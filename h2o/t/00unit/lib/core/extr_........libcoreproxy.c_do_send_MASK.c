
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* buf; } ;
struct rp_generator_t {TYPE_4__* src_req; scalar_t__ had_body_error; TYPE_8__* last_content_before_send; TYPE_7__ sending; TYPE_1__* client; } ;
typedef int h2o_send_state_t ;
struct TYPE_11__ {scalar_t__ len; } ;
typedef TYPE_3__ h2o_iovec_t ;
struct TYPE_14__ {scalar_t__ size; } ;
struct TYPE_12__ {int preferred_chunk_size; } ;
struct TYPE_10__ {scalar_t__ size; } ;
struct TYPE_9__ {TYPE_8__** buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ FUNC_0 (TYPE_7__*,TYPE_8__**,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,size_t,int ) ;

__attribute__((used)) static void FUNC_2(struct rp_generator_t *VAR_3)
{
    h2o_iovec_t VAR_4[1];
    size_t VAR_5;
    h2o_send_state_t VAR_6;

    VAR_4[0] = FUNC_0(&VAR_3->sending,
                                       VAR_3->last_content_before_send != ((void*)0) ? &VAR_3->last_content_before_send : VAR_3->client->buf,
                                       VAR_3->src_req->preferred_chunk_size);

    if (VAR_3->last_content_before_send != ((void*)0) && VAR_4[0].len == VAR_3->sending.buf->size &&
        VAR_3->last_content_before_send->size == 0) {
        VAR_5 = VAR_4[0].len != 0 ? 1 : 0;
        VAR_6 = VAR_1;
    } else {
        if (VAR_4[0].len == 0)
            return;
        VAR_5 = 1;
        VAR_6 = VAR_2;
    }

    if (VAR_3->had_body_error)
        VAR_6 = VAR_0;

    FUNC_1(VAR_3->src_req, VAR_4, VAR_5, VAR_6);
}
