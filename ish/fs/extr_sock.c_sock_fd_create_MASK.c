
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int domain; int type; int protocol; int unix_scm; int unix_got_peer; } ;
struct TYPE_4__ {int mode; } ;
struct fd {int real_fd; TYPE_1__ socket; TYPE_2__ stat; } ;
typedef int fd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fd* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fd*,int) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

__attribute__((used)) static fd_t FUNC_4(int VAR_5, int VAR_6, int VAR_7, int VAR_8) {
    struct fd *VAR_9 = FUNC_0(&VAR_4);
    if (VAR_9 == ((void*)0))
        return VAR_3;
    VAR_9->stat.mode = VAR_2 | 0666;
    VAR_9->real_fd = VAR_5;
    VAR_9->socket.domain = VAR_6;
    VAR_9->socket.type = VAR_7 & VAR_1;
    VAR_9->socket.protocol = VAR_8;
    if (VAR_6 == VAR_0) {
        FUNC_1(&VAR_9->socket.unix_got_peer);
        FUNC_3(&VAR_9->socket.unix_scm);
    }
    return FUNC_2(VAR_9, VAR_7 & ~VAR_1);
}
