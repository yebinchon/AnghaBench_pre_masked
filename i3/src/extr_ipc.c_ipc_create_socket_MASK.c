
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 char* VAR_5 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (struct sockaddr_un*,int ,int) ;
 int FUNC_8 (char const*,int ) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char const*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int ,int ) ;
 char* FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,int) ;
 int FUNC_16 (char*) ;

int FUNC_17(const char *VAR_6) {
    int VAR_7;

    FUNC_1(VAR_5);

    char *VAR_8 = FUNC_11(VAR_6);
    FUNC_0("Creating IPC-socket at %s\n", VAR_8);
    char *VAR_9 = FUNC_14(VAR_8);
    const char *VAR_10 = FUNC_3(VAR_9);
    if (!FUNC_9(VAR_10))
        FUNC_8(VAR_10, VAR_1);
    FUNC_5(VAR_9);


    FUNC_16(VAR_8);

    if ((VAR_7 = FUNC_13(VAR_0, VAR_4, 0)) < 0) {
        FUNC_10("socket()");
        FUNC_5(VAR_8);
        return -1;
    }

    (void)FUNC_4(VAR_7, VAR_3, VAR_2);

    struct sockaddr_un VAR_11;
    FUNC_7(&VAR_11, 0, sizeof(struct sockaddr_un));
    VAR_11.sun_family = VAR_0;
    FUNC_15(VAR_11.sun_path, VAR_8, sizeof(VAR_11.sun_path) - 1);
    if (FUNC_2(VAR_7, (struct sockaddr *)&VAR_11, sizeof(struct sockaddr_un)) < 0) {
        FUNC_10("bind()");
        FUNC_5(VAR_8);
        return -1;
    }

    FUNC_12(VAR_7);

    if (FUNC_6(VAR_7, 5) < 0) {
        FUNC_10("listen()");
        FUNC_5(VAR_8);
        return -1;
    }

    VAR_5 = VAR_8;
    return VAR_7;
}
