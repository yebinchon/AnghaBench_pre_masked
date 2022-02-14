
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sockaddr const*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (struct sockaddr_un*,int ,int) ;
 char* FUNC_6 (char*,int *,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (int ,char*,int) ;

int FUNC_10(const char *VAR_5) {
    char *VAR_6 = ((void*)0);
    if (VAR_5 != ((void*)0)) {
        VAR_6 = FUNC_8(VAR_5);
    }

    if (VAR_6 == ((void*)0)) {
        if ((VAR_6 = FUNC_4("I3SOCK")) != ((void*)0)) {
            VAR_6 = FUNC_8(VAR_6);
        }
    }

    if (VAR_6 == ((void*)0)) {
        VAR_6 = FUNC_6("I3_SOCKET_PATH", ((void*)0), 0);
    }

    if (VAR_6 == ((void*)0)) {
        VAR_6 = FUNC_8("/tmp/i3-ipc.sock");
    }

    int VAR_7 = FUNC_7(VAR_0, VAR_4, 0);
    if (VAR_7 == -1)
        FUNC_1(VAR_1, "Could not create socket");

    (void)FUNC_2(VAR_7, VAR_3, VAR_2);

    struct sockaddr_un VAR_8;
    FUNC_5(&VAR_8, 0, sizeof(struct sockaddr_un));
    VAR_8.sun_family = VAR_0;
    FUNC_9(VAR_8.sun_path, VAR_6, sizeof(VAR_8.sun_path) - 1);
    if (FUNC_0(VAR_7, (const struct sockaddr *)&VAR_8, sizeof(struct sockaddr_un)) < 0)
        FUNC_1(VAR_1, "Could not connect to i3 on socket %s", VAR_6);
    FUNC_3(VAR_6);
    return VAR_7;
}
