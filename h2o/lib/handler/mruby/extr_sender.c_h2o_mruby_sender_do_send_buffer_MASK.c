
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int h2o_sendvec_t ;
typedef int h2o_send_state_t ;
struct TYPE_16__ {TYPE_1__* req; } ;
typedef TYPE_3__ h2o_mruby_generator_t ;
struct TYPE_17__ {scalar_t__ len; int base; } ;
typedef TYPE_4__ h2o_iovec_t ;
struct TYPE_18__ {TYPE_2__* buf; int inflight; } ;
typedef TYPE_5__ h2o_doublebuffer_t ;
struct TYPE_19__ {scalar_t__ size; } ;
typedef TYPE_6__ h2o_buffer_t ;
struct TYPE_15__ {scalar_t__ size; } ;
struct TYPE_14__ {int preferred_chunk_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_4__ FUNC_1 (TYPE_5__*,TYPE_6__**,int ) ;
 int FUNC_2 (TYPE_3__*,int *,size_t,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

void FUNC_4(h2o_mruby_generator_t *VAR_2, h2o_doublebuffer_t *VAR_3, h2o_buffer_t **VAR_4, int VAR_5)
{
    FUNC_0(!VAR_3->inflight);

    h2o_iovec_t VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_2->req->preferred_chunk_size);
    size_t VAR_7 = 1;
    h2o_send_state_t VAR_8;

    if (VAR_5 && VAR_6.len == VAR_3->buf->size && (*VAR_4)->size == 0) {
        if (VAR_6.len == 0)
            --VAR_7;
        VAR_8 = VAR_0;
    } else {
        if (VAR_6.len == 0)
            return;
        VAR_8 = VAR_1;
    }

    h2o_sendvec_t VAR_9;
    FUNC_3(&VAR_9, VAR_6.base, VAR_6.len);
    FUNC_2(VAR_2, &VAR_9, VAR_7, VAR_8);
}
