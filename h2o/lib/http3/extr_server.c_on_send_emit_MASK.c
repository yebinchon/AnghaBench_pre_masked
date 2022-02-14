
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {size_t size; TYPE_5__* entries; } ;
struct TYPE_9__ {size_t off_within_first_vec; int proceed_called; TYPE_2__ vecs; } ;
struct st_h2o_http3_server_stream_t {scalar_t__ send_state; int quic; int req; TYPE_3__ sendbuf; } ;
struct TYPE_10__ {struct st_h2o_http3_server_stream_t* data; } ;
typedef TYPE_4__ quicly_stream_t ;
struct TYPE_11__ {size_t len; TYPE_1__* callbacks; } ;
struct TYPE_7__ {int (* flatten ) (TYPE_5__*,int *,int ,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct st_h2o_http3_server_stream_t*) ;
 int FUNC_5 (struct st_h2o_http3_server_stream_t*,int ) ;
 int FUNC_6 (TYPE_5__*,int *,int ,size_t) ;

__attribute__((used)) static int FUNC_7(quicly_stream_t *VAR_3, size_t VAR_4, void *VAR_5, size_t *VAR_6, int *VAR_7)
{
    struct st_h2o_http3_server_stream_t *VAR_8 = VAR_3->data;
    uint8_t *VAR_9 = VAR_5, *VAR_10 = VAR_9 + *VAR_6;
    size_t VAR_11 = 0, VAR_12 = VAR_8->sendbuf.off_within_first_vec;


    while (VAR_4 != 0) {
        FUNC_0(VAR_11 < VAR_8->sendbuf.vecs.size);
        if (VAR_4 < VAR_8->sendbuf.vecs.entries[VAR_11].len - VAR_12)
            break;
        VAR_4 -= VAR_8->sendbuf.vecs.entries[VAR_11].len - VAR_12;
        VAR_12 = 0;
        ++VAR_11;
    }


    *VAR_7 = 0;
    while (VAR_9 != VAR_10) {
        if (VAR_11 == VAR_8->sendbuf.vecs.size) {
            *VAR_7 = 1;
            break;
        }
        size_t VAR_13 = VAR_8->sendbuf.vecs.entries[VAR_11].len - (VAR_4 + VAR_12);
        if (VAR_10 - VAR_9 < VAR_13)
            VAR_13 = VAR_10 - VAR_9;
        if (!(VAR_8->sendbuf.vecs.entries[VAR_11].callbacks->flatten)(VAR_8->sendbuf.vecs.entries + VAR_11, &VAR_8->req,
                                                                          FUNC_1(VAR_9, VAR_13), VAR_4 + VAR_12))
            goto Error;
        VAR_9 += VAR_13;

        VAR_4 = 0;
        VAR_12 = 0;
        ++VAR_11;
    }

    *VAR_6 = VAR_9 - (uint8_t *)VAR_5;

    if (*VAR_7 && VAR_8->send_state == VAR_2 && !VAR_8->sendbuf.proceed_called) {
        if (!FUNC_4(VAR_8))
            goto Error;
        VAR_8->sendbuf.proceed_called = 1;
        FUNC_2(&VAR_8->req);
    }

    return 0;

Error:
    *VAR_6 = 0;
    *VAR_7 = 1;
    FUNC_3(VAR_8->quic, VAR_0);
    FUNC_5(VAR_8, VAR_1);
    return 0;
}
