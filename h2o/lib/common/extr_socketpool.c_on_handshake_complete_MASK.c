
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* sock; TYPE_1__* pool; } ;
typedef TYPE_2__ h2o_socketpool_connect_request_t ;
struct TYPE_9__ {TYPE_2__* data; } ;
typedef TYPE_3__ h2o_socket_t ;
struct TYPE_7__ {int _ssl_ctx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 (TYPE_3__*) ;
 char const* VAR_1 ;

__attribute__((used)) static void FUNC_4(h2o_socket_t *VAR_2, const char *VAR_3)
{
    h2o_socketpool_connect_request_t *VAR_4 = VAR_2->data;

    FUNC_1(VAR_4->sock == VAR_2);

    if (VAR_3 == VAR_1 && (FUNC_0(VAR_4->pool->_ssl_ctx) & VAR_0) == 0) {

    } else if (VAR_3 != ((void*)0)) {
        FUNC_3(VAR_2);
        VAR_4->sock = ((void*)0);
    }

    FUNC_2(VAR_4, VAR_3);
}
