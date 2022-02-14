
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int sa_family; } ;
typedef int ssize_t ;
typedef int socklen_t ;
typedef int in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned short) ;
 int FUNC_4 (int ,char*,void*) ;
 int FUNC_5 (struct sockaddr*,int ,int) ;
 int FUNC_6 (char*,char*,unsigned short*) ;

__attribute__((used)) static ssize_t FUNC_7(char *VAR_2, size_t VAR_3, struct sockaddr *VAR_4, socklen_t *VAR_5)
{
    char *VAR_6 = VAR_2, *VAR_7 = VAR_6 + VAR_3;
    void *VAR_8;
    in_port_t *VAR_9;


    do { if (VAR_6 == VAR_7) return -2; if (*VAR_6++ != 'P') return -1; } while (0);
    do { if (VAR_6 == VAR_7) return -2; if (*VAR_6++ != 'R') return -1; } while (0);
    do { if (VAR_6 == VAR_7) return -2; if (*VAR_6++ != 'O') return -1; } while (0);
    do { if (VAR_6 == VAR_7) return -2; if (*VAR_6++ != 'X') return -1; } while (0);
    do { if (VAR_6 == VAR_7) return -2; if (*VAR_6++ != 'Y') return -1; } while (0);
    do { if (VAR_6 == VAR_7) return -2; if (*VAR_6++ != ' ') return -1; } while (0);


    if (VAR_6 == VAR_7) return -2;
    if (*VAR_6++ != 'T') {
        *VAR_5 = 0;
        goto SkipToEOL;
    }
    do { if (VAR_6 == VAR_7) return -2; if (*VAR_6++ != 'C') return -1; } while (0);
    do { if (VAR_6 == VAR_7) return -2; if (*VAR_6++ != 'P') return -1; } while (0);
    if (VAR_6 == VAR_7) return -2;
    switch (*VAR_6++) {
    case '4':
        *VAR_5 = sizeof(struct sockaddr_in);
        FUNC_5(VAR_4, 0, sizeof(struct sockaddr_in));
        VAR_4->sa_family = VAR_0;
        VAR_8 = &((struct sockaddr_in *)VAR_4)->sin_addr;
        VAR_9 = &((struct sockaddr_in *)VAR_4)->sin_port;
        break;
    case '6':
        *VAR_5 = sizeof(struct sockaddr_in6);
        FUNC_5(VAR_4, 0, sizeof(struct sockaddr_in6));
        VAR_4->sa_family = VAR_1;
        VAR_8 = &((struct sockaddr_in6 *)VAR_4)->sin6_addr;
        VAR_9 = &((struct sockaddr_in6 *)VAR_4)->sin6_port;
        break;
    default:
        return -1;
    }
    do { if (VAR_6 == VAR_7) return -2; if (*VAR_6++ != ' ') return -1; } while (0);


    char *VAR_10 = VAR_6;
    do { do { if (VAR_6 == VAR_7) return -2; } while (*VAR_6++ != ' '); --VAR_6; } while (0);
    *VAR_6 = '\0';
    if (FUNC_4(VAR_4->sa_family, VAR_10, VAR_8) != 1)
        return -1;
    *VAR_6++ = ' ';


    do { do { if (VAR_6 == VAR_7) return -2; } while (*VAR_6++ != ' '); --VAR_6; } while (0);
    ++VAR_6;


    char *VAR_11 = VAR_6;
    do { do { if (VAR_6 == VAR_7) return -2; } while (*VAR_6++ != ' '); --VAR_6; } while (0);
    *VAR_6 = '\0';
    unsigned short VAR_12;
    if (FUNC_6(VAR_11, "%hu", &VAR_12) != 1)
        return -1;
    *VAR_9 = FUNC_3(VAR_12);
    *VAR_6++ = ' ';

SkipToEOL:
    do {
        if (VAR_6 == VAR_7) return -2;
    } while (*VAR_6++ != '\r');
    if (VAR_6 == VAR_7) return -2;
    if (*VAR_6++ != '\n')
        return -2;
    return VAR_6 - VAR_2;




}
