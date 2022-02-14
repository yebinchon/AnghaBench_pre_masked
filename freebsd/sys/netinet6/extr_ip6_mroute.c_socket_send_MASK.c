
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_rcv; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct mbuf*) ;
 scalar_t__ FUNC_1 (int *,struct sockaddr*,struct mbuf*,struct mbuf*) ;
 int FUNC_2 (struct socket*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_0, struct mbuf *VAR_1, struct sockaddr_in6 *VAR_2)
{

 if (VAR_0) {
  if (FUNC_1(&VAR_0->so_rcv,
     (struct sockaddr *)VAR_2,
     VAR_1, (struct mbuf *)0) != 0) {
   FUNC_2(VAR_0);
   return (0);
  }
 }
 FUNC_0(VAR_1);
 return (-1);
}
