
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_h2o_http3_egress_unistream_t {TYPE_1__* sendbuf; } ;
struct TYPE_5__ {struct st_h2o_http3_egress_unistream_t* data; } ;
typedef TYPE_2__ quicly_stream_t ;
struct TYPE_4__ {size_t size; scalar_t__ bytes; } ;


 int FUNC_0 (void*,scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_1(quicly_stream_t *VAR_0, size_t VAR_1, void *VAR_2, size_t *VAR_3, int *VAR_4)
{
    struct st_h2o_http3_egress_unistream_t *VAR_5 = VAR_0->data;

    if (*VAR_3 >= VAR_5->sendbuf->size - VAR_1) {
        *VAR_3 = VAR_5->sendbuf->size - VAR_1;
        *VAR_4 = 1;
    } else {
        *VAR_4 = 0;
    }
    FUNC_0(VAR_2, VAR_5->sendbuf->bytes + VAR_1, *VAR_3);
    return 0;
}
