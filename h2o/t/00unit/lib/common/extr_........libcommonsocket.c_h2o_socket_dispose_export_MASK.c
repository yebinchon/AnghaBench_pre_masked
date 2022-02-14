
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; int input; int * ssl; } ;
typedef TYPE_1__ h2o_socket_export_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(h2o_socket_export_t *VAR_0)
{
    FUNC_0(VAR_0->fd != -1);
    if (VAR_0->ssl != ((void*)0)) {
        FUNC_2(VAR_0->ssl);
        VAR_0->ssl = ((void*)0);
    }
    FUNC_3(&VAR_0->input);
    FUNC_1(VAR_0->fd);
    VAR_0->fd = -1;
}
