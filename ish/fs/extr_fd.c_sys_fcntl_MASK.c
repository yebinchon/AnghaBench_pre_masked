
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flock_ {int pid; int len; int start; int whence; int type; } ;
struct flock32_ {int pid; int len; int start; int whence; int type; } ;
struct fdtable {int cloexec; } ;
struct fd {int refcount; } ;
typedef int flock32 ;
typedef int flock ;
typedef int fd_t ;
typedef int dword_t ;
struct TYPE_2__ {struct fdtable* files; } ;
 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 TYPE_1__* VAR_3 ;
 struct fd* FUNC_4 (int) ;
 int FUNC_5 (struct fd*,int) ;
 int FUNC_6 (struct fd*,struct flock_*) ;
 int FUNC_7 (struct fd*,struct flock_*,int) ;
 int FUNC_8 (struct fd*) ;
 int FUNC_9 (struct fd*,int) ;
 int FUNC_10 (int,struct flock_*,int) ;
 int FUNC_11 (int,struct flock_*,int) ;

dword_t FUNC_12(fd_t VAR_4, dword_t VAR_5, dword_t VAR_6) {
    struct fdtable *VAR_7 = VAR_3->files;
    struct fd *VAR_8 = FUNC_4(VAR_4);
    if (VAR_8 == ((void*)0))
        return VAR_0;
    struct flock32_ VAR_9;
    struct flock_ VAR_10;
    fd_t VAR_11;
    int VAR_12;
    switch (VAR_5) {
        case 139:
            FUNC_0("fcntl(%d, F_DUPFD, %d)", VAR_4, VAR_6);
            VAR_8->refcount++;
            return FUNC_5(VAR_8, VAR_6);

        case 138:
            FUNC_0("fcntl(%d, F_DUPFD_CLOEXEC, %d)", VAR_4, VAR_6);
            VAR_8->refcount++;
            VAR_11 = FUNC_5(VAR_8, VAR_6);
            FUNC_2(VAR_11, VAR_7->cloexec);
            return VAR_11;

        case 137:
            FUNC_0("fcntl(%d, F_GETFD)", VAR_4);
            return FUNC_3(VAR_4, VAR_7->cloexec);
        case 133:
            FUNC_0("fcntl(%d, F_SETFD, 0x%x)", VAR_4, VAR_6);
            if (VAR_6 & 1)
                FUNC_2(VAR_4, VAR_7->cloexec);
            else
                FUNC_1(VAR_4, VAR_7->cloexec);
            return 0;

        case 136:
            FUNC_0("fcntl(%d, F_GETFL)", VAR_4);
            return FUNC_8(VAR_8);
        case 132:
            FUNC_0("fcntl(%d, F_SETFL, %#x)", VAR_4, VAR_6);
            return FUNC_9(VAR_8, VAR_6);

        case 134:
            FUNC_0("fcntl(%d, F_GETLK, %#x)", VAR_4, VAR_6);
            if (FUNC_10(VAR_6, &VAR_9, sizeof(VAR_9)))
                return VAR_1;
            VAR_10.type = VAR_9;
            VAR_10.whence = VAR_9;
            VAR_10.start = VAR_9;
            VAR_10.len = VAR_9;
            VAR_10.pid = VAR_9;
            VAR_12 = FUNC_6(VAR_8, &VAR_10);
            if (VAR_12 >= 0) {
                VAR_9 = VAR_10.type;
                VAR_9 = VAR_10.whence;
                VAR_9 = VAR_10.start;
                VAR_9 = VAR_10.len;
                VAR_9 = VAR_10.pid;
                if (FUNC_11(VAR_6, &VAR_9, sizeof(VAR_9)))
                    return VAR_1;
            }
            return VAR_12;

        case 135:
            FUNC_0("fcntl(%d, F_GETLK64, %#x)", VAR_4, VAR_6);
            if (FUNC_10(VAR_6, &VAR_10, sizeof(VAR_10)))
                return VAR_1;
            VAR_12 = FUNC_6(VAR_8, &VAR_10);
            if (VAR_12 >= 0)
                if (FUNC_11(VAR_6, &VAR_10, sizeof(VAR_10)))
                    return VAR_1;
            return VAR_12;

        case 128:
        case 129:
            FUNC_0("fcntl(%d, F_SETLK%*s, %#x)", VAR_4, VAR_5 == 129, "W", VAR_6);
            if (FUNC_10(VAR_6, &VAR_9, sizeof(VAR_9)))
                return VAR_1;
            VAR_10.type = VAR_9;
            VAR_10.whence = VAR_9;
            VAR_10.start = VAR_9;
            VAR_10.len = VAR_9;
            VAR_10.pid = VAR_9;
            return FUNC_7(VAR_8, &VAR_10, VAR_5 == 130);

        case 131:
        case 130:
            FUNC_0("fcntl(%d, F_SETLK%*s64, %#x)", VAR_4, VAR_5 == 129, "W", VAR_6);
            if (FUNC_10(VAR_6, &VAR_10, sizeof(VAR_10)))
                return VAR_1;
            return FUNC_7(VAR_8, &VAR_10, VAR_5 == 129);

        default:
            FUNC_0("fcntl(%d, %d)", VAR_4, VAR_5);
            return VAR_2;
    }
}
