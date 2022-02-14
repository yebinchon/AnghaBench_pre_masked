
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


struct TYPE_13__ {TYPE_1__* buf; } ;
struct TYPE_10__ {TYPE_8__* receiving; TYPE_7__ sending; } ;
struct st_fcgi_generator_t {scalar_t__ leftsize; TYPE_4__* req; TYPE_2__ resp; int * sock; } ;
typedef int h2o_send_state_t ;
struct TYPE_11__ {scalar_t__ len; } ;
typedef TYPE_3__ h2o_iovec_t ;
struct TYPE_14__ {scalar_t__ size; } ;
struct TYPE_12__ {int preferred_chunk_size; } ;
struct TYPE_9__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ FUNC_0 (TYPE_7__*,TYPE_8__**,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,size_t,int ) ;

__attribute__((used)) static void FUNC_2(struct st_fcgi_generator_t *VAR_4)
{
    h2o_iovec_t VAR_5[1];
    size_t VAR_6;
    h2o_send_state_t VAR_7;

    VAR_5[0] = FUNC_0(&VAR_4->resp.sending, &VAR_4->resp.receiving, VAR_4->req->preferred_chunk_size);
    VAR_6 = VAR_5[0].len != 0 ? 1 : 0;
    if (VAR_4->sock == ((void*)0) && VAR_5[0].len == VAR_4->resp.sending.buf->size && VAR_4->resp.receiving->size == 0) {
        if (VAR_4->leftsize == 0 || VAR_4->leftsize == VAR_3) {
            VAR_7 = VAR_1;
        } else {
            VAR_7 = VAR_0;
        }
    } else {
        if (VAR_6 == 0)
            return;
        VAR_7 = VAR_2;
    }
    FUNC_1(VAR_4->req, VAR_5, VAR_6, VAR_7);
}
