
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sdp_sock {int laddr; int lport; } ;
struct in_addr {int s_addr; } ;
typedef int in_port_t ;


 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (struct sdp_sock*) ;
 struct sdp_sock* FUNC_2 (struct socket*) ;
 struct sockaddr* FUNC_3 (int ,struct in_addr*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_0, struct sockaddr **VAR_1)
{
 struct sdp_sock *VAR_2;
 struct in_addr VAR_3;
 in_port_t VAR_4;

 VAR_2 = FUNC_2(VAR_0);
 FUNC_0(VAR_2);
 VAR_4 = VAR_2->lport;
 VAR_3.s_addr = VAR_2->laddr;
 FUNC_1(VAR_2);

 *VAR_1 = FUNC_3(VAR_4, &VAR_3);
 return 0;
}
