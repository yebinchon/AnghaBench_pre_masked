
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yoml_t ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct passwd {int pw_gid; int pw_uid; } ;
typedef int pid_t ;
typedef int h2o_configurator_command_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,void*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *,int *,char*,char const*,...) ;
 int FUNC_5 (char*,char* const,char const*) ;
 int FUNC_6 (char* const,char* const*,int*,int ) ;
 scalar_t__ FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int*) ;
 int FUNC_9 (int ,int,char*,char const*) ;
 int FUNC_10 (int ,int ,int ) ;
 char const* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(h2o_configurator_command_t *VAR_6, yoml_t *VAR_7, const char *VAR_8, char *const *VAR_9,
                            struct sockaddr_un *VAR_10, struct passwd *VAR_11)
{
    int VAR_12, VAR_13 = -1, VAR_14[2] = {-1, -1};


    VAR_10->sun_family = VAR_0;
    VAR_12 = FUNC_9(VAR_10->sun_path, sizeof(VAR_10->sun_path), "%s/_", VAR_8);
    if (VAR_12 < 0 || VAR_12 >= sizeof(VAR_10->sun_path)) {
        FUNC_4(VAR_6, VAR_7, "unix socket path too long: %s", VAR_8);
        goto Error;
    }


    if ((VAR_13 = FUNC_10(VAR_0, VAR_4, 0)) == -1) {
        FUNC_4(VAR_6, VAR_7, "socket(2) failed: %s", FUNC_11(VAR_5));
        goto Error;
    }
    if (FUNC_0(VAR_13, (void *)VAR_10, sizeof(*VAR_10)) != 0) {
        FUNC_4(VAR_6, VAR_7, "bind(2) failed: %s", FUNC_11(VAR_5));
        goto Error;
    }
    if (FUNC_7(VAR_13, VAR_3) != 0) {
        FUNC_4(VAR_6, VAR_7, "listen(2) failed: %s", FUNC_11(VAR_5));
        goto Error;
    }

    if (VAR_11 != ((void*)0) && FUNC_1(VAR_10->sun_path, VAR_11->pw_uid, VAR_11->pw_gid) != 0) {
        FUNC_4(VAR_6, VAR_7, "chown(2) failed to change ownership of socket:%s:%s", VAR_10->sun_path, FUNC_11(VAR_5));
        goto Error;
    }


    if (FUNC_8(VAR_14) != 0) {
        FUNC_4(VAR_6, VAR_7, "pipe(2) failed: %s", FUNC_11(VAR_5));
        VAR_14[0] = -1;
        VAR_14[1] = -1;
        goto Error;
    }
    if (FUNC_3(VAR_14[1], VAR_2, VAR_1) < 0)
        goto Error;


    int VAR_15[] = {VAR_13, 0,
                        VAR_14[0], 5,
                        -1};
    pid_t VAR_16 = FUNC_6(VAR_9[0], VAR_9, VAR_15, 0);
    if (VAR_16 == -1) {
        FUNC_5("[lib/handler/fastcgi.c] failed to launch helper program %s:%s\n", VAR_9[0], FUNC_11(VAR_5));
        goto Error;
    }

    FUNC_2(VAR_13);
    VAR_13 = -1;
    FUNC_2(VAR_14[0]);
    VAR_14[0] = -1;

    return VAR_14[1];

Error:
    if (VAR_14[0] != -1)
        FUNC_2(VAR_14[0]);
    if (VAR_14[1])
        FUNC_2(VAR_14[1]);
    if (VAR_13 != -1)
        FUNC_2(VAR_13);
    FUNC_12(VAR_10->sun_path);
    return -1;
}
