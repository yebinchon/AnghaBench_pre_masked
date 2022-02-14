
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* cb ) (void*) ;void* data; } ;
struct TYPE_6__ {TYPE_1__ on_close; int * _peername; int input; int * ssl; } ;
typedef TYPE_2__ h2o_socket_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(h2o_socket_t *VAR_0, const char *VAR_1)
{
    void (*VAR_2)(void *VAR_3);
    void *VAR_4;

    if (VAR_0->ssl != ((void*)0)) {
        FUNC_0(VAR_0->ssl);
        VAR_0->ssl = ((void*)0);
    }
    FUNC_3(&VAR_0->input);
    if (VAR_0->_peername != ((void*)0)) {
        FUNC_2(VAR_0->_peername);
        VAR_0->_peername = ((void*)0);
    }

    VAR_2 = VAR_0->on_close.cb;
    VAR_4 = VAR_0->on_close.data;

    FUNC_1(VAR_0);

    if (VAR_2 != ((void*)0))
        VAR_2(VAR_4);
}
