
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ucred_ {int uid; int gid; scalar_t__ pid; } ;
struct TYPE_6__ {int domain; int type; int protocol; TYPE_2__* unix_peer; } ;
struct fd {int real_fd; TYPE_3__ socket; } ;
typedef int int_t ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;
struct TYPE_4__ {struct ucred_ unix_cred; } ;
struct TYPE_5__ {TYPE_1__ socket; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int,int,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,int,char*,int*) ;
 int FUNC_3 (int *) ;
 int VAR_9 ;
 struct fd* FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (int,...) ;
 scalar_t__ FUNC_10 (int ,char*,int) ;

int_t FUNC_11(fd_t VAR_10, dword_t VAR_11, dword_t VAR_12, addr_t VAR_13, dword_t VAR_14) {
    FUNC_0("getsockopt(%d, %d, %d, %#x, %#x)", VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
    struct fd *VAR_15 = FUNC_4(VAR_10);
    if (VAR_15 == ((void*)0))
        return VAR_6;
    dword_t VAR_16;
    if (FUNC_8(VAR_14, VAR_16))
        return VAR_7;
    char VAR_17[VAR_16];
    if (FUNC_10(VAR_13, VAR_17, VAR_16))
        return VAR_7;

    if (VAR_11 == VAR_1 && (VAR_12 == VAR_2 || VAR_12 == VAR_5 || VAR_12 == VAR_4)) {
        dword_t *VAR_18 = (dword_t *) VAR_17;
        if (VAR_16 != sizeof(*VAR_18))
            return VAR_8;
        if (VAR_12 == VAR_2)
            *VAR_18 = VAR_15->socket.domain;
        else if (VAR_12 == VAR_5)
            *VAR_18 = VAR_15->socket.type;
        else if (VAR_12 == VAR_4)
            *VAR_18 = VAR_15->socket.protocol;
    } else if (VAR_11 == VAR_1 && VAR_12 == VAR_3) {
        struct ucred_ *VAR_19 = (struct ucred_ *) VAR_17;
        if (VAR_16 != sizeof(*VAR_19))
            return VAR_8;
        FUNC_3(&VAR_9);
        if (VAR_15->socket.domain != VAR_0 || VAR_15->socket.unix_peer == ((void*)0)) {
            VAR_19->pid = 0;
            VAR_19->uid = VAR_19->gid = -1;
        } else {
            *VAR_19 = VAR_15->socket.unix_peer->socket.unix_cred;
        }
        FUNC_7(&VAR_9);
    } else {
        int VAR_20 = FUNC_6(VAR_12, VAR_11);
        if (VAR_20 < 0)
            return VAR_8;
        int VAR_21 = FUNC_5(VAR_11);
        if (VAR_21 < 0)
            return VAR_8;

        int VAR_22 = FUNC_2(VAR_15->real_fd, VAR_21, VAR_20, VAR_17, &VAR_16);
        if (VAR_22 < 0)
            return FUNC_1();
    }

    if (FUNC_9(VAR_14, VAR_16))
        return VAR_7;
    if (FUNC_9(VAR_13, VAR_17))
        return VAR_7;
    return 0;
}
