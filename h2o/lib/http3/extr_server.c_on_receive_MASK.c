
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf; } ;
struct st_h2o_http3_server_stream_t {scalar_t__ read_blocked; TYPE_1__ recvbuf; } ;
struct TYPE_5__ {struct st_h2o_http3_server_stream_t* data; } ;
typedef TYPE_2__ quicly_stream_t ;


 int FUNC_0 (int *,size_t,void const*,size_t) ;
 int FUNC_1 (struct st_h2o_http3_server_stream_t*,char const**) ;

__attribute__((used)) static int FUNC_2(quicly_stream_t *VAR_0, size_t VAR_1, const void *VAR_2, size_t VAR_3)
{
    struct st_h2o_http3_server_stream_t *VAR_4 = VAR_0->data;
    int VAR_5;
    const char *VAR_6 = ((void*)0);


    if ((VAR_5 = FUNC_0(&VAR_4->recvbuf.buf, VAR_1, VAR_2, VAR_3)) != 0)
        return VAR_5;

    if (VAR_4->read_blocked)
        return 0;


    return FUNC_1(VAR_4, &VAR_6);
}
