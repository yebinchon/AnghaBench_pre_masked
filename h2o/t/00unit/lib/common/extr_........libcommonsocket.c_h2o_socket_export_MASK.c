
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int input; TYPE_2__* ssl; } ;
typedef TYPE_3__ h2o_socket_t ;
struct TYPE_14__ {int input; TYPE_2__* ssl; } ;
typedef TYPE_4__ h2o_socket_export_t ;
typedef int h2o_buffer_prototype_t ;
struct TYPE_11__ {int encrypted; } ;
struct TYPE_12__ {TYPE_1__ input; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

int FUNC_6(h2o_socket_t *VAR_1, h2o_socket_export_t *VAR_2)
{
    static h2o_buffer_prototype_t VAR_3;

    FUNC_0(!FUNC_5(VAR_1));

    if (FUNC_1(VAR_1, VAR_2) == -1)
        return -1;

    if ((VAR_2->ssl = VAR_1->ssl) != ((void*)0)) {
        VAR_1->ssl = ((void*)0);
        FUNC_3(&VAR_2->ssl->input.encrypted, &VAR_3);
    }
    VAR_2->input = VAR_1->input;
    FUNC_3(&VAR_2->input, &VAR_3);
    FUNC_2(&VAR_1->input, &VAR_0);

    FUNC_4(VAR_1);

    return 0;
}
