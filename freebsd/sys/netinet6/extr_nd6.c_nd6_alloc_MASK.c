
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct sockaddr_in6 {int sin6_len; struct in6_addr sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct llentry {int ln_state; } ;
struct ifnet {int dummy; } ;
typedef int sin6 ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int VAR_1 ;
 int FUNC_1 (struct sockaddr_in6*,int) ;
 struct llentry* FUNC_2 (int ,int ,struct sockaddr*) ;

__attribute__((used)) static struct llentry *
FUNC_3(const struct in6_addr *VAR_2, int VAR_3, struct ifnet *VAR_4)
{
 struct sockaddr_in6 VAR_5;
 struct llentry *VAR_6;

 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_5 = sizeof(struct sockaddr_in6);
 VAR_5 = VAR_0;
 VAR_5 = *VAR_2;

 VAR_6 = FUNC_2(FUNC_0(VAR_4), 0, (struct sockaddr *)&VAR_5);
 if (VAR_6 != ((void*)0))
  VAR_6->ln_state = VAR_1;

 return (VAR_6);
}
