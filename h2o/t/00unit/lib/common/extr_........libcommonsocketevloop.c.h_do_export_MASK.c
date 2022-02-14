
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_evloop_socket_t {int _flags; int fd; } ;
typedef int h2o_socket_t ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ h2o_socket_export_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct st_h2o_evloop_socket_t*) ;

int FUNC_2(h2o_socket_t *VAR_1, h2o_socket_export_t *VAR_2)
{
    struct st_h2o_evloop_socket_t *VAR_3 = (void *)VAR_1;

    FUNC_0((VAR_3->_flags & VAR_0) == 0);
    FUNC_1(VAR_3);
    VAR_3->_flags = VAR_0;

    VAR_2->fd = VAR_3->fd;
    VAR_3->fd = -1;

    return 0;
}
