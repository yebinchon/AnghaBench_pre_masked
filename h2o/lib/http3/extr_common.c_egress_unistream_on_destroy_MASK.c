
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_http3_egress_unistream_t {int sendbuf; } ;
struct TYPE_3__ {struct st_h2o_http3_egress_unistream_t* data; } ;
typedef TYPE_1__ quicly_stream_t ;


 int FUNC_0 (struct st_h2o_http3_egress_unistream_t*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(quicly_stream_t *VAR_0, int VAR_1)
{
    struct st_h2o_http3_egress_unistream_t *VAR_2 = VAR_0->data;
    FUNC_1(&VAR_2->sendbuf);
    FUNC_0(VAR_2);
}
