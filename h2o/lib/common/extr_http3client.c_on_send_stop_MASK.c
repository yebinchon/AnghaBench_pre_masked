
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_http3client_req_t {int dummy; } ;
struct TYPE_3__ {struct st_h2o_http3client_req_t* data; } ;
typedef TYPE_1__ quicly_stream_t ;


 int VAR_0 ;
 int FUNC_0 (struct st_h2o_http3client_req_t*,int ) ;
 int FUNC_1 (struct st_h2o_http3client_req_t*) ;
 int FUNC_2 (struct st_h2o_http3client_req_t*,int) ;

__attribute__((used)) static int FUNC_3(quicly_stream_t *VAR_1, int VAR_2)
{
    struct st_h2o_http3client_req_t *VAR_3;

    if ((VAR_3 = VAR_1->data) == ((void*)0))
        return 0;
    FUNC_2(VAR_3, VAR_2);
    FUNC_0(VAR_3, VAR_0);
    FUNC_1(VAR_3);

    return 0;
}
