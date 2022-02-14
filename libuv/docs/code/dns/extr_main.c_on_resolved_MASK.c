
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_getaddrinfo_t ;
typedef int uv_connect_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {scalar_t__ ai_addr; } ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (struct sockaddr_in*,char*,int) ;
 int FUNC_5 (int *,int *,struct sockaddr const*,int ) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(uv_getaddrinfo_t *VAR_3, int VAR_4, struct addrinfo *VAR_5) {
    if (VAR_4 < 0) {
        FUNC_0(VAR_2, "getaddrinfo callback error %s\n", FUNC_2(VAR_4));
        return;
    }

    char VAR_6[17] = {'\0'};
    FUNC_4((struct sockaddr_in*) VAR_5->ai_addr, VAR_6, 16);
    FUNC_0(VAR_2, "%s\n", VAR_6);

    uv_connect_t *VAR_7 = (uv_connect_t*) FUNC_1(sizeof(uv_connect_t));
    uv_tcp_t *VAR_8 = (uv_tcp_t*) FUNC_1(sizeof(uv_tcp_t));
    FUNC_6(VAR_0, VAR_8);

    FUNC_5(VAR_7, VAR_8, (const struct sockaddr*) VAR_5->ai_addr, VAR_1);

    FUNC_3(VAR_5);
}
