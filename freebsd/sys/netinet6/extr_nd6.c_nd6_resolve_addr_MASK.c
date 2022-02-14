
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,int,int *,struct sockaddr_in6 const*,char*,int *,int *) ;

int
FUNC_1(struct ifnet *VAR_1, int VAR_2, const struct sockaddr *VAR_3,
    char *VAR_4, uint32_t *VAR_5)
{
 int VAR_6;

 VAR_2 |= VAR_0;
 VAR_6 = FUNC_0(VAR_1, VAR_2, ((void*)0),
     (const struct sockaddr_in6 *)VAR_3, VAR_4, VAR_5, ((void*)0));
 return (VAR_6);
}
