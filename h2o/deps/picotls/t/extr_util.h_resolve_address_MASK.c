
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct addrinfo {int ai_family; int ai_socktype; int ai_protocol; int ai_flags; int ai_addrlen; int ai_addr; } ;
typedef int socklen_t ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,char const*,char*) ;
 int FUNC_1 (struct addrinfo*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (struct sockaddr*,int ,int ) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_6(struct sockaddr *VAR_4, socklen_t *VAR_5, const char *VAR_6, const char *VAR_7, int VAR_8, int VAR_9,
                                  int VAR_10)
{
    struct addrinfo VAR_11, *VAR_12;
    int VAR_13;

    FUNC_5(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.ai_family = VAR_8;
    VAR_11.ai_socktype = VAR_9;
    VAR_11.ai_protocol = VAR_10;
    VAR_11.ai_flags = VAR_0 | VAR_1 | VAR_2;
    if ((VAR_13 = FUNC_3(VAR_6, VAR_7, &VAR_11, &VAR_12)) != 0 || VAR_12 == ((void*)0)) {
        FUNC_0(VAR_3, "failed to resolve address:%s:%s:%s\n", VAR_6, VAR_7,
                VAR_13 != 0 ? FUNC_2(VAR_13) : "getaddrinfo returned NULL");
        return -1;
    }

    FUNC_4(VAR_4, VAR_12->ai_addr, VAR_12->ai_addrlen);
    *VAR_5 = VAR_12->ai_addrlen;

    FUNC_1(VAR_12);
    return 0;
}
