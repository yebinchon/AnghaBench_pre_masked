
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int shutdown_reason_t ;
struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ ipc_client ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

void FUNC_5(shutdown_reason_t VAR_2, int VAR_3) {
    FUNC_3(VAR_2);

    ipc_client *VAR_4;
    while (!FUNC_0(&VAR_1)) {
        VAR_4 = FUNC_1(&VAR_1);
        if (VAR_4->fd != VAR_3) {
            FUNC_4(VAR_4->fd, VAR_0);
        }
        FUNC_2(VAR_4, VAR_3);
    }
}
