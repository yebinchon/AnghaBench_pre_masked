
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_evloop_socket_t {int fd; } ;
typedef int h2o_socket_t ;



int FUNC_0(h2o_socket_t *VAR_0)
{
    struct st_h2o_evloop_socket_t *VAR_1 = (struct st_h2o_evloop_socket_t *)VAR_0;
    return VAR_1->fd;
}
