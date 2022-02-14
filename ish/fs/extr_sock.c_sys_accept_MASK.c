
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ domain; int unix_got_peer; struct fd* unix_peer; int unix_cred; int protocol; int type; } ;
struct fd {TYPE_1__ socket; int real_fd; } ;
typedef int ssize_t ;
typedef int sockaddr ;
typedef int peer ;
typedef int int_t ;
typedef scalar_t__ fd_t ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,void*,int*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 () ;
 struct fd* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (int,struct fd**,int) ;
 scalar_t__ FUNC_9 (int,scalar_t__,int ,int ) ;
 struct fd* FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,char*,int,int*) ;
 int FUNC_12 (struct fd*) ;
 int FUNC_13 (struct fd*) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (scalar_t__,int) ;
 scalar_t__ FUNC_17 (scalar_t__,int) ;

int_t FUNC_18(fd_t VAR_6, addr_t VAR_7, addr_t VAR_8) {
    FUNC_0("accept(%d, 0x%x, 0x%x)", VAR_6, VAR_7, VAR_8);
    struct fd *VAR_9 = FUNC_10(VAR_6);
    if (VAR_9 == ((void*)0))
        return VAR_2;
    dword_t VAR_10 = 0;
    if (VAR_7 != 0) {
        if (FUNC_16(VAR_8, VAR_10))
            return VAR_3;
    }

    char VAR_11[VAR_10];
    int VAR_12;
    do {
        FUNC_12(VAR_9);
        VAR_4 = 0;
        VAR_12 = FUNC_1(VAR_9->real_fd,
                VAR_7 != 0 ? (void *) VAR_11 : ((void*)0),
                VAR_7 != 0 ? &VAR_10 : ((void*)0));
        FUNC_13(VAR_9);
    } while (FUNC_14() && VAR_4 == VAR_1);
    if (VAR_12 < 0)
        return FUNC_3();

    if (VAR_7 != 0) {
        int VAR_13 = FUNC_11(VAR_7, VAR_11, sizeof(VAR_11), &VAR_10);
        if (VAR_13 < 0)
            return VAR_12;
        if (FUNC_17(VAR_8, VAR_10))
            return VAR_3;
    }

    fd_t VAR_14 = FUNC_9(VAR_12,
            VAR_9->socket.domain, VAR_9->socket.type, VAR_9->socket.protocol);
    if (VAR_14 < 0)
        FUNC_2(VAR_12);

    if (VAR_9->socket.domain == VAR_0) {
        FUNC_6(&VAR_5);
        struct fd *VAR_15 = FUNC_4(VAR_14);
        FUNC_5(&VAR_15->socket.unix_cred);
        struct fd *VAR_16;
        ssize_t VAR_17 = FUNC_8(VAR_12, &VAR_16, sizeof(VAR_16));
        if (VAR_17 == sizeof(VAR_16)) {
            VAR_15->socket.unix_peer = VAR_16;
            VAR_16->socket.unix_peer = VAR_15;
            FUNC_7(&VAR_16->socket.unix_got_peer);
        }
        FUNC_15(&VAR_5);
    }

    return VAR_14;
}
