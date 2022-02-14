
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct inpcb {struct socket* inp_socket; } ;


 int FUNC_0 (struct inpcb*) ;

struct socket *
FUNC_1(struct inpcb *VAR_0)
{

 FUNC_0(VAR_0);
 return (VAR_0->inp_socket);
}
