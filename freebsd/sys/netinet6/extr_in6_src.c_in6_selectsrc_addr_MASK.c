
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct in6_addr {int dummy; } ;
struct sockaddr_in6 {int sin6_len; int sin6_scope_id; struct in6_addr sin6_addr; int sin6_family; } ;
struct ifnet {int dummy; } ;
typedef int dst_sa ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_in6*,int) ;
 int FUNC_1 (int *,struct ifnet*) ;
 int FUNC_2 (int ,struct sockaddr_in6*,int *,int *,int *,struct ifnet**,struct in6_addr*) ;
 int FUNC_3 (struct sockaddr_in6*,int ) ;

int
FUNC_4(uint32_t VAR_1, const struct in6_addr *VAR_2,
    uint32_t VAR_3, struct ifnet *VAR_4, struct in6_addr *VAR_5,
    int *VAR_6)
{
 struct ifnet *VAR_7;
 struct sockaddr_in6 VAR_8;
 int VAR_9;

 VAR_7 = VAR_4;
 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.sin6_family = VAR_0;
 VAR_8.sin6_len = sizeof(VAR_8);
 VAR_8.sin6_addr = *VAR_2;
 VAR_8.sin6_scope_id = VAR_3;
 FUNC_3(&VAR_8, 0);

 VAR_9 = FUNC_2(VAR_1, &VAR_8, ((void*)0), ((void*)0), ((void*)0), &VAR_7, VAR_5);
 if (VAR_6 != ((void*)0))
  *VAR_6 = FUNC_1(((void*)0), VAR_7);

 return (VAR_9);
}
