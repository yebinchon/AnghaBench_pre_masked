
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_evloop_socket_t {int fd; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int h2o_socket_t ;


 scalar_t__ FUNC_0 (int ,struct sockaddr*,int*) ;

socklen_t FUNC_1(h2o_socket_t *VAR_0, struct sockaddr *VAR_1)
{
    struct st_h2o_evloop_socket_t *VAR_2 = (void *)VAR_0;
    socklen_t VAR_3 = sizeof(struct sockaddr_storage);
    if (FUNC_0(VAR_2->fd, VAR_1, &VAR_3) != 0)
        return 0;
    return VAR_3;
}
