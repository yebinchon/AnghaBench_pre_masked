
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; } ;
struct sockaddr {int dummy; } ;
struct sdp_sock {int flags; scalar_t__ faddr; scalar_t__ fport; } ;
struct in_addr {scalar_t__ s_addr; } ;
typedef scalar_t__ in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (struct sdp_sock*) ;
 int VAR_3 ;
 struct sdp_sock* FUNC_2 (struct socket*) ;
 struct sockaddr* FUNC_3 (scalar_t__,struct in_addr*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_4, struct sockaddr **VAR_5)
{
 struct sdp_sock *VAR_6 = ((void*)0);
 struct in_addr VAR_7;
 in_port_t VAR_8;
 int VAR_9;

 if (VAR_4->so_state & VAR_3)
  return (VAR_0);

 VAR_8 = 0;
 VAR_7.s_addr = 0;
 VAR_9 = 0;
 VAR_6 = FUNC_2(VAR_4);
 FUNC_0(VAR_6);
 if (VAR_6->flags & (VAR_2 | VAR_1)) {
  VAR_9 = VAR_0;
  goto out;
 }
 VAR_8 = VAR_6->fport;
 VAR_7.s_addr = VAR_6->faddr;
out:
 FUNC_1(VAR_6);
 if (VAR_9 == 0)
  *VAR_5 = FUNC_3(VAR_8, &VAR_7);
 return VAR_9;
}
