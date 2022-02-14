
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;




 int FUNC_0 (int) ;

socklen_t FUNC_1(struct sockaddr *VAR_0)
{
    switch (VAR_0->sa_family) {
    case 129:
        return sizeof(struct sockaddr_in);
    case 128:
        return sizeof(struct sockaddr_in6);
    default:
        FUNC_0(!"unexpected socket type");
        return 0;
    }
}
