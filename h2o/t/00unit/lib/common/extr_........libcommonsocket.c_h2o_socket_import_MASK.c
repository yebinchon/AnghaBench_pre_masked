
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int input; TYPE_2__* ssl; } ;
typedef TYPE_3__ h2o_socket_t ;
struct TYPE_13__ {int fd; int input; TYPE_2__* ssl; } ;
typedef TYPE_4__ h2o_socket_export_t ;
typedef int h2o_loop_t ;
struct TYPE_10__ {int encrypted; } ;
struct TYPE_11__ {TYPE_1__ input; } ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;

h2o_socket_t *FUNC_4(h2o_loop_t *VAR_1, h2o_socket_export_t *VAR_2)
{
    h2o_socket_t *VAR_3;

    FUNC_0(VAR_2->fd != -1);

    VAR_3 = FUNC_1(VAR_1, VAR_2);
    VAR_2->fd = -1;
    if ((VAR_3->ssl = VAR_2->ssl) != ((void*)0)) {
        FUNC_3(VAR_3);
        FUNC_2(&VAR_3->ssl->input.encrypted, &VAR_0);
    }
    VAR_3->input = VAR_2->input;
    FUNC_2(&VAR_3->input, &VAR_0);
    return VAR_3;
}
