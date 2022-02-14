
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sock; int (* cb ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ h2o_websocket_conn_t ;
struct TYPE_7__ {int input; TYPE_1__* data; } ;
typedef TYPE_2__ h2o_socket_t ;


 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, h2o_socket_t *VAR_1, size_t VAR_2)
{
    h2o_websocket_conn_t *VAR_3 = VAR_0;


    if (VAR_1 == ((void*)0)) {
        (*VAR_3->cb)(VAR_3, ((void*)0));
        return;
    }

    VAR_3->sock = VAR_1;
    VAR_1->data = VAR_3;
    FUNC_0(&VAR_1->input, VAR_2);
    FUNC_1(VAR_3);
}
