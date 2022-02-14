
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union poll_fd_info {int fd; } ;
struct select_context {int exceptfds; int writefds; int readfds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_3, int VAR_4, union poll_fd_info VAR_5) {
    struct select_context *VAR_6 = VAR_3;
    if (VAR_4 & VAR_1)
        FUNC_0(VAR_5.fd, VAR_6->readfds);
    if (VAR_4 & VAR_2)
        FUNC_0(VAR_5.fd, VAR_6->writefds);
    if (VAR_4 & VAR_0)
        FUNC_0(VAR_5.fd, VAR_6->exceptfds);
    if (!(VAR_4 & (VAR_1 | VAR_2 | VAR_0)))
        return 0;
    return 1;
}
