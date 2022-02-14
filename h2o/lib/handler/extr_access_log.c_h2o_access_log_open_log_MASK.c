
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_10 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char**,int*,int ) ;
 int FUNC_6 (struct sockaddr_un*,int ,int) ;
 int FUNC_7 (char const*,int,int) ;
 scalar_t__ FUNC_8 (int*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (char const*,struct stat*) ;
 int FUNC_11 (int ,char const*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char const*) ;

int FUNC_14(const char *VAR_11)
{
    int VAR_12;

    if (VAR_11[0] == '|') {
        int VAR_13[2];
        pid_t VAR_14;
        char *VAR_15[4] = {"/bin/sh", "-c", (char *)(VAR_11 + 1), ((void*)0)};

        if (FUNC_8(VAR_13) != 0) {
            FUNC_4("pipe failed");
            return -1;
        }
        if (FUNC_2(VAR_13[1], VAR_2, VAR_1) == -1) {
            FUNC_4("failed to set FD_CLOEXEC on pipefds[1]");
            return -1;
        }

        int VAR_16[] = {VAR_13[0], 0,
                            -1};
        if ((VAR_14 = FUNC_5(VAR_15[0], VAR_15, VAR_16, 0)) == -1) {
            FUNC_3("failed to open logger: %s:%s\n", VAR_11 + 1, FUNC_12(VAR_10));
            return -1;
        }

        FUNC_0(VAR_13[0]);
        VAR_12 = VAR_13[1];
    } else {
        struct stat VAR_17;
        int VAR_18;

        VAR_18 = FUNC_10(VAR_11, &VAR_17);
        if (VAR_18 == 0 && (VAR_17.st_mode & VAR_8) == VAR_9) {
            struct sockaddr_un VAR_19;
            if (FUNC_13(VAR_11) >= sizeof(VAR_19.sun_path)) {
                FUNC_3("path:%s is too long as a unix socket name", VAR_11);
                return -1;
            }
            if ((VAR_12 = FUNC_9(VAR_0, VAR_7, 0)) == -1) {
                FUNC_3("failed to create socket for log file:%s:%s\n", VAR_11, FUNC_12(VAR_10));
                return -1;
            }
            FUNC_6(&VAR_19, 0, sizeof(VAR_19));
            VAR_19.sun_family = VAR_0;
            FUNC_11(VAR_19.sun_path, VAR_11);
            if (FUNC_1(VAR_12, (struct sockaddr *)&VAR_19, sizeof(VAR_19)) == -1) {
                FUNC_3("failed to connect socket for log file:%s:%s\n", VAR_11, FUNC_12(VAR_10));
                FUNC_0(VAR_12);
                return -1;
            }

        } else {
            if ((VAR_12 = FUNC_7(VAR_11, VAR_5 | VAR_6 | VAR_3 | VAR_4, 0644)) == -1) {
                FUNC_3("failed to open log file:%s:%s\n", VAR_11, FUNC_12(VAR_10));
                return -1;
            }
        }
    }

    return VAR_12;
}
