
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int sa_family; } ;
typedef int int32_t ;




 int FUNC_0 (int ) ;

int32_t FUNC_1(struct sockaddr *VAR_0)
{
    switch (VAR_0->sa_family) {
    case 129:
        return FUNC_0(((struct sockaddr_in *)VAR_0)->sin_port);
    case 128:
        return FUNC_0(((struct sockaddr_in6 *)VAR_0)->sin6_port);
    default:
        return -1;
    }
}
