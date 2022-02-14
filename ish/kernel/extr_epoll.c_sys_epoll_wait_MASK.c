
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int tv_sec; int tv_nsec; } ;
struct TYPE_2__ {int poll; } ;
struct fd {TYPE_1__ epollfd; int * ops; } ;
struct epoll_event_ {int dummy; } ;
struct epoll_context {int max_events; int n; struct epoll_event_* events; } ;
typedef int int_t ;
typedef int fd_t ;
typedef int addr_t ;


 int FUNC_0 (char*,int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct epoll_context*,struct timespec*) ;
 scalar_t__ FUNC_3 (int ,struct epoll_event_*,int) ;

int_t FUNC_4(fd_t VAR_5, addr_t VAR_6, int_t VAR_7, int_t VAR_8) {
    FUNC_0("epoll_wait(%d, %#x, %d, %d)", VAR_5, VAR_6, VAR_7, VAR_8);
    struct fd *VAR_9 = FUNC_1(VAR_5);
    if (VAR_9 == ((void*)0))
        return VAR_0;
    if (VAR_9->ops != &VAR_4)
        return VAR_2;

    struct timespec VAR_10;
    if (VAR_8 != -1) {
        VAR_10.tv_sec = VAR_8 / 1000;
        VAR_10.tv_nsec = (VAR_8 % 1000) * 1000000;
    }
    if (VAR_7 <= 0)
        return VAR_2;
    struct epoll_event_ VAR_11[VAR_7];

    struct epoll_context VAR_12 = {.events = VAR_11, .n = 0, .max_events = VAR_7};
    int VAR_13 = FUNC_2(VAR_9->epollfd.poll, VAR_3, &VAR_12, VAR_8 == -1 ? ((void*)0) : &VAR_10);
    if (VAR_13 >= 0)
        if (FUNC_3(VAR_6, VAR_11, sizeof(struct epoll_event_) * VAR_13))
            return VAR_1;
    return VAR_13;
}
