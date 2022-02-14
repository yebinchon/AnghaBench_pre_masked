
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_http3client_req_t {int sendbuf; } ;
struct TYPE_3__ {struct st_h2o_http3client_req_t* data; } ;
typedef TYPE_1__ quicly_stream_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,size_t) ;

__attribute__((used)) static void FUNC_2(quicly_stream_t *VAR_0, size_t VAR_1)
{
    struct st_h2o_http3client_req_t *VAR_2 = VAR_0->data;

    FUNC_0(VAR_2 != ((void*)0));
    FUNC_1(&VAR_2->sendbuf, VAR_1);
}
