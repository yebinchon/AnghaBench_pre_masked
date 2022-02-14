
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* ssl; } ;
typedef TYPE_5__ h2o_socket_t ;
struct TYPE_10__ {int state; int * session_data; } ;
struct TYPE_9__ {TYPE_3__ async_resumption; } ;
struct TYPE_11__ {TYPE_2__ server; } ;
struct TYPE_8__ {TYPE_4__ handshake; } ;
typedef int SSL_SESSION ;
typedef int SSL ;




 int VAR_0 ;
 TYPE_5__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned char const*,int) ;
 int FUNC_4 (TYPE_5__*,int ) ;

__attribute__((used)) static SSL_SESSION *FUNC_5(SSL *VAR_1,



                                            unsigned char *VAR_2,
                                            int VAR_3, int *VAR_4)
{
    h2o_socket_t *VAR_5 = FUNC_0(FUNC_1(VAR_1));

    switch (VAR_5->ssl->handshake.server.async_resumption.state) {
    case 128:
        VAR_5->ssl->handshake.server.async_resumption.state = VAR_0;
        FUNC_4(VAR_5, FUNC_3(VAR_2, VAR_3));
        return ((void*)0);
    case 129:
        *VAR_4 = 1;
        return VAR_5->ssl->handshake.server.async_resumption.session_data;
    default:
        FUNC_2(!"FIXME");
        return ((void*)0);
    }
}
