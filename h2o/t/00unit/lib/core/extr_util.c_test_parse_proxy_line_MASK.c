
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; int sin6_addr; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; } ;
typedef int ssize_t ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,void*,int*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    char VAR_2[256];
    struct sockaddr_storage VAR_3;
    socklen_t VAR_4;
    ssize_t VAR_5;

    FUNC_6(VAR_2, "");
    VAR_5 = FUNC_5(VAR_2, FUNC_7(VAR_2), (void *)&VAR_3, &VAR_4);
    FUNC_4(VAR_5 == -2);

    FUNC_6(VAR_2, "PROXY TCP4 192.168.0.1 192.168.0.11 56324 443\r\nabc");
    VAR_5 = FUNC_5(VAR_2, FUNC_7(VAR_2), (void *)&VAR_3, &VAR_4);
    FUNC_4(VAR_5 == FUNC_7(VAR_2) - 3);
    FUNC_4(VAR_4 == sizeof(struct sockaddr_in));
    FUNC_4(VAR_3.ss_family == VAR_0);
    FUNC_4(((struct sockaddr_in *)&VAR_3)->sin_addr.s_addr == FUNC_1(0xc0a80001));
    FUNC_4(((struct sockaddr_in *)&VAR_3)->sin_port == FUNC_2(56324));

    FUNC_6(VAR_2, "PROXY TCP4 192.168.0.1 192.168.0.11 56324 443\r");
    VAR_5 = FUNC_5(VAR_2, FUNC_7(VAR_2), (void *)&VAR_3, &VAR_4);
    FUNC_4(VAR_5 == -2);

    FUNC_6(VAR_2, "PROXY TCP5");
    VAR_5 = FUNC_5(VAR_2, FUNC_7(VAR_2), (void *)&VAR_3, &VAR_4);
    FUNC_4(VAR_5 == -1);

    FUNC_6(VAR_2, "PROXY UNKNOWN");
    VAR_5 = FUNC_5(VAR_2, FUNC_7(VAR_2), (void *)&VAR_3, &VAR_4);
    FUNC_4(VAR_5 == -2);

    FUNC_6(VAR_2, "PROXY UNKNOWN\r\nabc");
    VAR_5 = FUNC_5(VAR_2, FUNC_7(VAR_2), (void *)&VAR_3, &VAR_4);
    FUNC_4(VAR_5 == FUNC_7(VAR_2) - 3);
    FUNC_4(VAR_4 == 0);

    FUNC_6(VAR_2, "PROXY TCP6 ::1 ::1 56324 443\r\n");
    VAR_5 = FUNC_5(VAR_2, FUNC_7(VAR_2), (void *)&VAR_3, &VAR_4);
    FUNC_4(VAR_5 == FUNC_7(VAR_2));
    FUNC_4(VAR_4 == sizeof(struct sockaddr_in6));
    FUNC_4(VAR_3.ss_family == VAR_1);
    FUNC_4(FUNC_3(&((struct sockaddr_in6 *)&VAR_3)->sin6_addr, FUNC_0("\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1")) == 0);
    FUNC_4(((struct sockaddr_in6 *)&VAR_3)->sin6_port == FUNC_2(56324));
}
