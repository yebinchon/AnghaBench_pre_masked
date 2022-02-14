
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union poll_fd_info {scalar_t__ ptr; } ;
struct pollfd_ {int revents; int events; } ;
struct poll_context {int nfds; scalar_t__* files; struct pollfd_* polls; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1, int VAR_2, union poll_fd_info VAR_3) {
    struct poll_context *VAR_4 = VAR_1;
    struct pollfd_ *VAR_5 = VAR_4->polls;
    int VAR_6 = VAR_4->nfds;
    int VAR_7 = 0;
    for (int VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        if (VAR_4->files[VAR_8] == VAR_3.ptr) {
            VAR_5[VAR_8].revents = VAR_2 & (VAR_5[VAR_8].events | VAR_0);
            VAR_7 = 1;
        }
    }
    return VAR_7;
}
