
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* ssl; } ;
typedef TYPE_5__ h2o_socket_t ;
struct TYPE_15__ {scalar_t__ len; scalar_t__ base; } ;
typedef TYPE_6__ h2o_iovec_t ;
struct TYPE_10__ {int * session_data; int state; } ;
struct TYPE_11__ {TYPE_1__ async_resumption; } ;
struct TYPE_12__ {TYPE_2__ server; } ;
struct TYPE_13__ {TYPE_3__ handshake; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,unsigned char const**,long) ;
 int FUNC_2 (TYPE_5__*,int ) ;

void FUNC_3(h2o_socket_t *VAR_1, h2o_iovec_t VAR_2)
{
    if (VAR_2.len != 0) {
        const unsigned char *VAR_3 = (void *)VAR_2.base;
        VAR_1->ssl->handshake.server.async_resumption.session_data = FUNC_1(((void*)0), &VAR_3, (long)VAR_2.len);

    }

    VAR_1->ssl->handshake.server.async_resumption.state = VAR_0;
    FUNC_2(VAR_1, 0);

    if (VAR_1->ssl->handshake.server.async_resumption.session_data != ((void*)0)) {
        FUNC_0(VAR_1->ssl->handshake.server.async_resumption.session_data);
        VAR_1->ssl->handshake.server.async_resumption.session_data = ((void*)0);
    }
}
