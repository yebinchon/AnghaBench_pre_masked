
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int poll; } ;
struct fd {TYPE_1__ epollfd; } ;
typedef int int_t ;
typedef int fd_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct fd* FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct fd*,int) ;
 int FUNC_3 () ;

fd_t FUNC_4(int_t VAR_4) {
    FUNC_0("epoll_create(%#x)", VAR_4);
    if (VAR_4 & ~(VAR_0))
        return VAR_1;

    struct fd *VAR_5 = FUNC_1(&VAR_3);
    if (VAR_5 == ((void*)0))
        return VAR_2;
    VAR_5->epollfd.poll = FUNC_3();
    return FUNC_2(VAR_5, VAR_4);
}
