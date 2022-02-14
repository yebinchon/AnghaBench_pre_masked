
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_getaddrinfo_t ;
struct addrinfo {scalar_t__ ai_flags; int ai_protocol; int ai_socktype; int ai_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ,char*,char*,struct addrinfo*) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5() {
    VAR_4 = FUNC_1();

    struct addrinfo VAR_7;
    VAR_7.ai_family = VAR_1;
    VAR_7.ai_socktype = VAR_2;
    VAR_7.ai_protocol = VAR_0;
    VAR_7.ai_flags = 0;

    uv_getaddrinfo_t VAR_8;
    FUNC_0(VAR_6, "irc.freenode.net is... ");
    int VAR_9 = FUNC_3(VAR_4, &VAR_8, VAR_5, "irc.freenode.net", "6667", &VAR_7);

    if (VAR_9) {
        FUNC_0(VAR_6, "getaddrinfo call error %s\n", FUNC_2(VAR_9));
        return 1;
    }
    return FUNC_4(VAR_4, VAR_3);
}
