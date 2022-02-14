
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_h2o_http3_server_stream_t {scalar_t__ state; int link; TYPE_2__* quic; } ;
struct TYPE_4__ {struct st_h2o_http3_server_stream_t* data; } ;
typedef TYPE_1__ quicly_stream_t ;
struct TYPE_5__ {int sendstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct st_h2o_http3_server_stream_t*,int ) ;

__attribute__((used)) static int FUNC_6(quicly_stream_t *VAR_3, int VAR_4)
{
    struct st_h2o_http3_server_stream_t *VAR_5 = VAR_3->data;


    if (VAR_5->state == VAR_2) {
        FUNC_0(!FUNC_4(&VAR_5->quic->sendstate));
        FUNC_3(VAR_5->quic, VAR_0);
        if (FUNC_1(&VAR_5->link))
            FUNC_2(&VAR_5->link);
        FUNC_5(VAR_5, VAR_1);
    }

    return 0;
}
