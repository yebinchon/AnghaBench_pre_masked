
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* write ) (TYPE_2__*,char const*) ;} ;
struct TYPE_6__ {TYPE_1__ _cb; int * ssl; } ;
typedef TYPE_2__ h2o_socket_t ;
typedef int (* h2o_socket_cb ) (TYPE_2__*,char const*) ;


 int FUNC_0 (int *) ;

void FUNC_1(h2o_socket_t *VAR_0, const char *VAR_1)
{
    h2o_socket_cb VAR_2;

    if (VAR_0->ssl != ((void*)0))
        FUNC_0(VAR_0->ssl);

    VAR_2 = VAR_0->_cb.write;
    VAR_0->_cb.write = ((void*)0);
    VAR_2(VAR_0, VAR_1);
}
