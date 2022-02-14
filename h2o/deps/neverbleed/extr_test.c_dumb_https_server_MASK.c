
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
typedef int sin ;
typedef int reuse_flag ;
typedef int buf ;
typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int ) ;
 int FUNC_7 (int,int *,int *) ;
 scalar_t__ FUNC_8 (int,void*,int) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int,int ) ;
 int FUNC_14 (int,int ,int ,int*,int) ;
 int FUNC_15 (int ,int ,int ) ;
 int VAR_7 ;
 char* FUNC_16 (scalar_t__) ;
 int FUNC_17 (char const*) ;

int FUNC_18(unsigned short VAR_8, SSL_CTX *VAR_9)
{
    int VAR_10, VAR_11;
    struct sockaddr_in VAR_12 = {};

    if ((VAR_10 = FUNC_15(VAR_0, VAR_2, 0)) == -1) {
        FUNC_10(VAR_7, "failed to create socket:%s\n", FUNC_16(VAR_6));
        return 111;
    }
    VAR_11 = 1;
    FUNC_14(VAR_10, VAR_3, VAR_5, &VAR_11, sizeof(VAR_11));
    VAR_12.sin_family = VAR_0;
    VAR_12.sin_addr.s_addr = FUNC_11(0x7f000001);
    VAR_12.sin_port = FUNC_12(8888);
    if (FUNC_8(VAR_10, (void *)&VAR_12, sizeof(VAR_12)) != 0) {
        FUNC_10(VAR_7, "bind failed:%s\n", FUNC_16(VAR_6));
        return 111;
    }
    if (FUNC_13(VAR_10, VAR_4) != 0) {
        FUNC_10(VAR_7, "listen failed:%s\n", FUNC_16(VAR_6));
        return 111;
    }

    while (1) {
        int VAR_13;
        SSL *VAR_14;
        char VAR_15[4096];

        while ((VAR_13 = FUNC_7(VAR_10, ((void*)0), ((void*)0))) == -1 && VAR_6 == VAR_1)
            ;
        if (VAR_13 == -1) {
            FUNC_10(VAR_7, "accept(2) failed:%s\n", FUNC_16(VAR_6));
            return 111;
        }
        VAR_14 = FUNC_2(VAR_9);
        FUNC_4(VAR_14, VAR_13);
        if (FUNC_0(VAR_14) == 1) {
            FUNC_3(VAR_14, VAR_15, sizeof(VAR_15));
            const char *VAR_16 =
                "HTTP/1.0 200 OK\r\nContent-Length: 6\r\nConnection: close\r\nContent-Type: text/plain\r\n\r\nhello\n";
            FUNC_6(VAR_14, VAR_16, FUNC_17(VAR_16));
            FUNC_5(VAR_14);
        } else {
            FUNC_10(VAR_7, "SSL_accept failed\n");
        }
        FUNC_1(VAR_14);
        FUNC_9(VAR_13);
    }
}
