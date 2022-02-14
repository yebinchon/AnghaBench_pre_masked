
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct inpcb {struct in6_addr in6p_faddr; int inp_fport; } ;
typedef int in_port_t ;


 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int ,char*) ;
 struct sockaddr* FUNC_3 (int ,struct in6_addr*) ;
 struct inpcb* FUNC_4 (struct socket*) ;

int
FUNC_5(struct socket *VAR_0, struct sockaddr **VAR_1)
{
 struct inpcb *VAR_2;
 struct in6_addr VAR_3;
 in_port_t VAR_4;

 VAR_2 = FUNC_4(VAR_0);
 FUNC_2(VAR_2 != ((void*)0), ("in6_getpeeraddr: inp == NULL"));

 FUNC_0(VAR_2);
 VAR_4 = VAR_2->inp_fport;
 VAR_3 = VAR_2->in6p_faddr;
 FUNC_1(VAR_2);

 *VAR_1 = FUNC_3(VAR_4, &VAR_3);
 return 0;
}
