
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpopt {int dummy; } ;
struct tcphdr {int dummy; } ;
struct socket {int dummy; } ;
struct inpcb {struct socket* inp_socket; } ;
struct in_conninfo {int dummy; } ;


 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct in_conninfo*,struct tcpopt*,struct tcphdr*,struct inpcb*,struct socket**,int *,void*,void*) ;

void
FUNC_2(struct in_conninfo *VAR_0, struct tcpopt *VAR_1, struct tcphdr *VAR_2,
    struct inpcb *VAR_3, void *VAR_4, void *VAR_5)
{
 struct socket *VAR_6 = VAR_3->inp_socket;

 FUNC_0(VAR_3);

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_6, ((void*)0), VAR_4, VAR_5);
}
