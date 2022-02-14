
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ll {size_t sll_halen; int * sll_addr; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; int * sa_data; } ;
typedef int sa_family_t ;





 int FUNC_0 (int *,void*,size_t) ;

__attribute__((used)) static void FUNC_1(sa_family_t VAR_0, struct sockaddr *VAR_1, void *VAR_2, size_t VAR_3)
{
    switch(VAR_0)
    {
        case 130:
            FUNC_0(&((struct sockaddr_in*)VAR_1)->sin_addr, VAR_2, VAR_3);
            break;
        case 129:
            FUNC_0(&((struct sockaddr_in6*)VAR_1)->sin6_addr, VAR_2, VAR_3);
            break;
        case 128:
            FUNC_0(((struct sockaddr_ll*)VAR_1)->sll_addr, VAR_2, VAR_3);
            ((struct sockaddr_ll*)VAR_1)->sll_halen = VAR_3;
            break;
        default:
            FUNC_0(VAR_1->sa_data, VAR_2, VAR_3);
            break;
    }
    VAR_1->sa_family = VAR_0;
}
