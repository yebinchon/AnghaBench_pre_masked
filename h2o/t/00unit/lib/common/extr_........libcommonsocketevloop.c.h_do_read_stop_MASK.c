
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_evloop_socket_t {int _flags; } ;
typedef int h2o_socket_t ;


 int VAR_0 ;
 int FUNC_0 (struct st_h2o_evloop_socket_t*) ;

void FUNC_1(h2o_socket_t *VAR_1)
{
    struct st_h2o_evloop_socket_t *VAR_2 = (struct st_h2o_evloop_socket_t *)VAR_1;

    VAR_2->_flags &= ~VAR_0;
    FUNC_0(VAR_2);
}
