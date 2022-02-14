
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_evloop_socket_t {int _flags; } ;
typedef int h2o_socket_t ;


 int VAR_0 ;

void FUNC_0(h2o_socket_t *VAR_1, int VAR_2)
{
    struct st_h2o_evloop_socket_t *VAR_3 = (struct st_h2o_evloop_socket_t *)VAR_1;

    if (VAR_2) {
        VAR_3->_flags |= VAR_0;
    } else {
        VAR_3->_flags &= ~VAR_0;
    }
}
