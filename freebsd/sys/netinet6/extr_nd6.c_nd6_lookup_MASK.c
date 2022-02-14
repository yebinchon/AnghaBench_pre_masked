
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct sockaddr_in6 {int sin6_len; struct in6_addr sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct llentry {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int sin6 ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct sockaddr_in6*,int) ;
 struct llentry* FUNC_3 (int ,int,struct sockaddr*) ;

struct llentry *
FUNC_4(const struct in6_addr *VAR_1, int VAR_2, struct ifnet *VAR_3)
{
 struct sockaddr_in6 VAR_4;
 struct llentry *VAR_5;

 FUNC_2(&VAR_4, sizeof(VAR_4));
 VAR_4 = sizeof(struct sockaddr_in6);
 VAR_4 = VAR_0;
 VAR_4 = *VAR_1;

 FUNC_0(VAR_3);

 VAR_5 = FUNC_3(FUNC_1(VAR_3), VAR_2, (struct sockaddr *)&VAR_4);

 return (VAR_5);
}
