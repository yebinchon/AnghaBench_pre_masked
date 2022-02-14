
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


struct TYPE_20__ {size_t len; TYPE_1__* callbacks; } ;
typedef TYPE_3__ h2o_sendvec_t ;
typedef int h2o_send_state_t ;
struct TYPE_21__ {size_t len; scalar_t__ base; } ;
typedef TYPE_4__ h2o_iovec_t ;
struct TYPE_22__ {int req; } ;
typedef TYPE_5__ h2o_http2_stream_t ;
struct TYPE_19__ {int buf; } ;
struct TYPE_23__ {TYPE_2__ _write; } ;
typedef TYPE_6__ h2o_http2_conn_t ;
struct TYPE_18__ {int (* flatten ) (TYPE_3__*,int *,int ,size_t) ;} ;
struct TYPE_17__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*,int *,size_t,int ) ;
 TYPE_12__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (scalar_t__,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int *,int ,size_t) ;
 size_t FUNC_6 (size_t,size_t) ;

__attribute__((used)) static h2o_sendvec_t *FUNC_7(h2o_http2_conn_t *VAR_2, h2o_http2_stream_t *VAR_3, h2o_sendvec_t *VAR_4, size_t VAR_5,
                                size_t *VAR_6, h2o_send_state_t VAR_7)
{
    h2o_iovec_t VAR_8;
    size_t VAR_9;

    if ((VAR_9 = FUNC_0(VAR_2, VAR_3)) == 0)
        goto Exit;


    VAR_8.base =
        FUNC_2(&VAR_2->_write.buf, VAR_0 + VAR_9).base + VAR_0;
    VAR_8.len = VAR_9;


    while (VAR_5 != 0) {
        if (VAR_4->len != *VAR_6)
            break;
        ++VAR_4;
        --VAR_5;
        *VAR_6 = 0;
    }
    while (VAR_5 != 0) {
        size_t VAR_10 = FUNC_6(VAR_8.len, VAR_4->len - *VAR_6);
        if (!(*VAR_4->callbacks->flatten)(VAR_4, &VAR_3->req, FUNC_3(VAR_8.base, VAR_10), *VAR_6))
            return ((void*)0);
        VAR_8.base += VAR_10;
        VAR_8.len -= VAR_10;
        *VAR_6 += VAR_10;
        while (VAR_4->len == *VAR_6) {
            ++VAR_4;
            --VAR_5;
            *VAR_6 = 0;
            if (VAR_5 == 0)
                break;
        }
        if (VAR_8.len == 0)
            break;
    }


    if (VAR_8.len != VAR_9 || !FUNC_4(VAR_7)) {
        size_t VAR_11 = VAR_9 - VAR_8.len;
        if (VAR_5 != 0) {
            VAR_7 = VAR_1;
        }
        FUNC_1(VAR_2, VAR_3, &VAR_2->_write.buf, VAR_11, VAR_7);
    }

Exit:
    return VAR_4;
}
