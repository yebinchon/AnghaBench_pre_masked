
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint_t ;
struct sockaddr_max_ {int dummy; } ;
struct TYPE_2__ {scalar_t__ domain; int unix_got_peer; int * unix_peer; int unix_cred; } ;
struct fd {TYPE_1__ socket; int real_fd; } ;
typedef int ssize_t ;
typedef int int_t ;
typedef int fd_t ;
typedef int addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 struct fd* FUNC_6 (int ) ;
 int FUNC_7 (int ,struct sockaddr_max_*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int ,struct fd**,int) ;

int_t FUNC_11(fd_t VAR_3, addr_t VAR_4, uint_t VAR_5) {
    FUNC_0("connect(%d, 0x%x, %d)", VAR_3, VAR_4, VAR_5);
    struct fd *VAR_6 = FUNC_6(VAR_3);
    if (VAR_6 == ((void*)0))
        return VAR_1;
    struct sockaddr_max_ VAR_7;
    int VAR_8 = FUNC_7(VAR_4, &VAR_7, &VAR_5);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_8 = FUNC_2(VAR_6->real_fd, (void *) &VAR_7, VAR_5);
    if (VAR_8 < 0)
        return FUNC_3();

    if (VAR_6->socket.domain == VAR_0) {
        FUNC_4(&VAR_6->socket.unix_cred);
        FUNC_1(VAR_6->socket.unix_peer == ((void*)0));

        ssize_t VAR_9 = FUNC_10(VAR_6->real_fd, &VAR_6, sizeof(struct fd *));
        if (VAR_9 == sizeof(struct fd *)) {

            FUNC_5(&VAR_2);
            while (VAR_6->socket.unix_peer == ((void*)0))
                FUNC_9(&VAR_6->socket.unix_got_peer, &VAR_2, ((void*)0));
            FUNC_8(&VAR_2);
        }
    }

    return VAR_8;
}
