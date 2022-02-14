
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_evloop_socket_t {int _flags; int fd; scalar_t__ loop; } ;
struct st_h2o_evloop_epoll_t {int ep; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct st_h2o_evloop_socket_t *VAR_4)
{
    struct st_h2o_evloop_epoll_t *VAR_5 = (void *)VAR_4->loop;
    int VAR_6;

    if ((VAR_4->_flags & VAR_2) == 0)
        return;
    while ((VAR_6 = FUNC_0(VAR_5->ep, VAR_1, VAR_4->fd, ((void*)0))) != 0 && VAR_3 == VAR_0)
        ;
    if (VAR_6 != 0)
        FUNC_1("socket_export: epoll(DEL) returned error %d (fd=%d)\n", VAR_3, VAR_4->fd);
}
